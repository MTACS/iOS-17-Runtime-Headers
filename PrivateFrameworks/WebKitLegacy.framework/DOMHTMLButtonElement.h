
@interface DOMHTMLButtonElement : DOMHTMLElement

@property (copy) NSString *accessKey;
@property bool autofocus;
@property bool disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *name;
@property (copy) NSString *type;
@property (copy) NSString *value;
@property (readonly) bool willValidate;

- (id)accessKey;
- (bool)autofocus;
- (void)click;
- (bool)disabled;
- (id)form;
- (id)name;
- (void)setAccessKey:(id)arg1;
- (void)setAutofocus:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1;
- (int)structuralComplexityContribution;
- (id)type;
- (id)value;
- (bool)willValidate;

@end
