
@protocol SUUIJSModalDocumentController <JSExport>

@required

- (NSArray *)documents;
- (void)popDocument;
- (void)popToDocument:(IKDOMDocument *)arg1;
- (void)pushDocument:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)replaceDocument:(IKDOMDocument *)arg1 :(IKDOMDocument *)arg2 :(NSDictionary *)arg3;

@end
