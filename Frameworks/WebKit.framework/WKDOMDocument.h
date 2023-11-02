
@interface WKDOMDocument : WKDOMNode

@property (readonly) WKDOMElement *body;

- (id)body;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;
- (id)createElement:(id)arg1;
- (id)createTextNode:(id)arg1;
- (id)parserYieldToken;

@end
