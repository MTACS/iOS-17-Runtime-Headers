
@interface DOMHTMLLabelElement : DOMHTMLElement

@property (copy) NSString *accessKey;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *htmlFor;

- (id)accessKey;
- (id)control;
- (id)form;
- (id)htmlFor;
- (void)setAccessKey:(id)arg1;
- (void)setHtmlFor:(id)arg1;

@end
