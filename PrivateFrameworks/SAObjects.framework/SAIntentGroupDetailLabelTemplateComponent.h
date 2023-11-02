
@interface SAIntentGroupDetailLabelTemplateComponent : SAIntentGroupLabelTemplateComponent

@property (nonatomic, copy) NSString *detailText;

+ (id)detailLabelTemplateComponent;
+ (id)detailLabelTemplateComponentWithDictionary:(id)arg1 context:(id)arg2;

- (id)detailText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDetailText:(id)arg1;

@end
