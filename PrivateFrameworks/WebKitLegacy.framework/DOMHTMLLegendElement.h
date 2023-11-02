
@interface DOMHTMLLegendElement : DOMHTMLElement

@property (copy) NSString *accessKey;
@property (copy) NSString *align;
@property (readonly) DOMHTMLFormElement *form;

- (id)accessKey;
- (id)align;
- (id)form;
- (void)setAccessKey:(id)arg1;
- (void)setAlign:(id)arg1;

@end
