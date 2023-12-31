
@interface SAUITemplateAttributedString : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *attributeRuns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)attributedString;
+ (id)attributedStringWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributeRuns;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAttributeRuns:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
