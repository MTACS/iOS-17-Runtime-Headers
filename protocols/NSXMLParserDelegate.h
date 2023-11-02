
@protocol NSXMLParserDelegate <NSObject>

@optional

- (void)parser:(NSXMLParser *)arg1 didEndElement:(NSString *)arg2 namespaceURI:(NSString *)arg3 qualifiedName:(NSString *)arg4;
- (void)parser:(NSXMLParser *)arg1 didEndMappingPrefix:(NSString *)arg2;
- (void)parser:(NSXMLParser *)arg1 didStartElement:(NSString *)arg2 namespaceURI:(NSString *)arg3 qualifiedName:(NSString *)arg4 attributes:(NSDictionary *)arg5;
- (void)parser:(NSXMLParser *)arg1 didStartMappingPrefix:(NSString *)arg2 toURI:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg1 foundAttributeDeclarationWithName:(NSString *)arg2 forElement:(NSString *)arg3 type:(NSString *)arg4 defaultValue:(NSString *)arg5;
- (void)parser:(NSXMLParser *)arg1 foundCDATA:(NSData *)arg2;
- (void)parser:(NSXMLParser *)arg1 foundCharacters:(NSString *)arg2;
- (void)parser:(NSXMLParser *)arg1 foundComment:(NSString *)arg2;
- (void)parser:(NSXMLParser *)arg1 foundElementDeclarationWithName:(NSString *)arg2 model:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg1 foundExternalEntityDeclarationWithName:(NSString *)arg2 publicID:(NSString *)arg3 systemID:(NSString *)arg4;
- (void)parser:(NSXMLParser *)arg1 foundIgnorableWhitespace:(NSString *)arg2;
- (void)parser:(NSXMLParser *)arg1 foundInternalEntityDeclarationWithName:(NSString *)arg2 value:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg1 foundNotationDeclarationWithName:(NSString *)arg2 publicID:(NSString *)arg3 systemID:(NSString *)arg4;
- (void)parser:(NSXMLParser *)arg1 foundProcessingInstructionWithTarget:(NSString *)arg2 data:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg1 foundUnparsedEntityDeclarationWithName:(NSString *)arg2 publicID:(NSString *)arg3 systemID:(NSString *)arg4 notationName:(NSString *)arg5;
- (void)parser:(NSXMLParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (NSData *)parser:(NSXMLParser *)arg1 resolveExternalEntityName:(NSString *)arg2 systemID:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg1 validationErrorOccurred:(NSError *)arg2;
- (void)parserDidEndDocument:(NSXMLParser *)arg1;
- (void)parserDidStartDocument:(NSXMLParser *)arg1;

@end
