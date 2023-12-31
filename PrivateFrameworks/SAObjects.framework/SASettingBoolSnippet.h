
@interface SASettingBoolSnippet : SASettingSnippet

@property (nonatomic) bool toggle;
@property (nonatomic, copy) NSNumber *value;

+ (id)boolSnippet;
+ (id)boolSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setToggle:(bool)arg1;
- (void)setValue:(id)arg1;
- (bool)toggle;
- (id)value;

@end
