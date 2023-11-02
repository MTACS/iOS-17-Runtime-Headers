
@protocol WFPythonHTMLParserDelegate <NSObject>

@optional

- (void)parser:(WFPythonHTMLParser *)arg1 foundCharacterRef:(NSString *)arg2;
- (void)parser:(WFPythonHTMLParser *)arg1 foundComment:(NSString *)arg2;
- (void)parser:(WFPythonHTMLParser *)arg1 foundData:(NSString *)arg2;
- (void)parser:(WFPythonHTMLParser *)arg1 foundDoctypeDeclaration:(NSString *)arg2;
- (void)parser:(WFPythonHTMLParser *)arg1 foundEndTag:(NSString *)arg2;
- (void)parser:(WFPythonHTMLParser *)arg1 foundEntityRef:(NSString *)arg2;
- (void)parser:(WFPythonHTMLParser *)arg1 foundProcessingInstruction:(NSString *)arg2;
- (void)parser:(WFPythonHTMLParser *)arg1 foundStartTag:(NSString *)arg2 attributes:(NSArray *)arg3;
- (void)parser:(WFPythonHTMLParser *)arg1 foundUnknownDeclaration:(NSString *)arg2;

@end
