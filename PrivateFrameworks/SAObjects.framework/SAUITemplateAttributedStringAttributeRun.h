
@interface SAUITemplateAttributedStringAttributeRun : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSDictionary *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUITemplateRange *range;
@property (readonly) Class superclass;

+ (id)attributedStringAttributeRun;
+ (id)attributedStringAttributeRunWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributes;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)range;
- (void)setAttributes:(id)arg1;
- (void)setRange:(id)arg1;

@end
