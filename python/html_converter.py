"""
This is a variant on Luca Minudel's original exercise created by Emily Bache
"""
import html as html_converter


class HtmlConverter:

    def convert_to_html(self, filename):
        with open(filename, "r") as f:
            # bug: should be "<html>"
            html = "<html<"
            for line in f:
                html += "<p>"
                line = line.strip()
                html += self.escape(line, quote=True)
                # bug: should be "</p>"
                html += "<br />"
            html += "</html>"
            return html

    def escape(self, line, quote):
        return html_converter.escape(line, quote=quote)
