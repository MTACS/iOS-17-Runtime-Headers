
@protocol GQHXMLOutput <NSObject>

@required

- (void)addCharRef:(const char *)arg1;
- (void)addXmlCharContent:(const char *)arg1;
- (struct __CFData { }*)createHtml;
- (struct __CFData { }*)createHtmlWithCss:(struct __CFString { }*)arg1;
- (struct __CFData { }*)createProgressiveHtml;
- (void)endElement;
- (void)endElementWithExpectedName:(const char *)arg1;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)startElement:(const char *)arg1;

@end
