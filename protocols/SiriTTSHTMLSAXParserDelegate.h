
@protocol SiriTTSHTMLSAXParserDelegate <NSObject>

@required

- (void)parser:(SiriTTSHTMLSAXParser *)arg1 didEndElement:(NSString *)arg2;
- (void)parser:(SiriTTSHTMLSAXParser *)arg1 didStartElement:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)parser:(SiriTTSHTMLSAXParser *)arg1 foundCharacters:(NSString *)arg2;

@end
