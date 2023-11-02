
@protocol TCVegaJSDocumentInterface <JSExport>

@required

- (TCVegaHTMLElement *)body;
- (TCVegaHTMLElement *)createElementWithString:(NSString *)arg1;
- (void)setBody:(TCVegaHTMLElement *)arg1;

@optional

- (TCVegaHTMLElement *)createElementWithString:(NSString *)arg1 __JS_EXPORT_AS__createElement:(id)arg2;

@end
