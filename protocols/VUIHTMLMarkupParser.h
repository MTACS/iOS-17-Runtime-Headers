
@protocol VUIHTMLMarkupParser <NSObject>

@required

- (void)parser:(VUIHTMLMarkupParser *)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(VUIHTMLMarkupParser *)arg1 didFindCharacters:(NSString *)arg2;
- (void)parser:(VUIHTMLMarkupParser *)arg1 didStartElement:(unsigned long long)arg2;
- (void)parser:(VUIHTMLMarkupParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)parserDidEndDocument:(VUIHTMLMarkupParser *)arg1;
- (void)parserDidFindNewline:(VUIHTMLMarkupParser *)arg1;
- (void)parserDidStartDocument:(VUIHTMLMarkupParser *)arg1;

@end
