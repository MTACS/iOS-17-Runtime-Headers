
@interface SASettingFloatSnippet : SASettingNumericSnippet

@property (nonatomic, copy) NSNumber *value;

+ (id)floatSnippet;
+ (id)floatSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(id)arg1;
- (id)value;

@end
