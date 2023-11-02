
@protocol ENXMLSaxParserDelegate <NSObject>

@optional

- (void)parser:(ENXMLSaxParser *)arg1 didEndElement:(NSString *)arg2;
- (void)parser:(ENXMLSaxParser *)arg1 didFailWithError:(NSError *)arg2;
- (void)parser:(ENXMLSaxParser *)arg1 didStartElement:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)parser:(ENXMLSaxParser *)arg1 foundCDATA:(NSString *)arg2;
- (void)parser:(ENXMLSaxParser *)arg1 foundCharacters:(NSString *)arg2;
- (void)parser:(ENXMLSaxParser *)arg1 foundComment:(NSString *)arg2;
- (void)parserDidEndDocument:(ENXMLSaxParser *)arg1;
- (void)parserDidStartDocument:(ENXMLSaxParser *)arg1;

@end
