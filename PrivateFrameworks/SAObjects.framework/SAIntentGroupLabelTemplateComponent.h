
@interface SAIntentGroupLabelTemplateComponent : SADomainObject

@property (nonatomic, copy) NSString *labelTemplateComponentStyle;
@property (nonatomic, copy) NSString *text;

+ (id)labelTemplateComponent;
+ (id)labelTemplateComponentWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)labelTemplateComponentStyle;
- (void)setLabelTemplateComponentStyle:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
