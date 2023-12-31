
@interface DOMHTMLFormElement : DOMHTMLElement

@property (copy) NSString *acceptCharset;
@property (copy) NSString *action;
@property (readonly) DOMHTMLCollection *elements;
@property (copy) NSString *encoding;
@property (copy) NSString *enctype;
@property (readonly) int length;
@property (copy) NSString *method;
@property (copy) NSString *name;
@property (copy) NSString *target;

- (id)acceptCharset;
- (id)action;
- (id)autocomplete;
- (bool)checkValidity;
- (id)elements;
- (id)encoding;
- (id)enctype;
- (int)length;
- (id)method;
- (id)name;
- (bool)noValidate;
- (void)reset;
- (void)setAcceptCharset:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setAutocomplete:(id)arg1;
- (void)setEncoding:(id)arg1;
- (void)setEnctype:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNoValidate:(bool)arg1;
- (void)setTarget:(id)arg1;
- (int)structuralComplexityContribution;
- (void)submit;
- (id)target;

@end
