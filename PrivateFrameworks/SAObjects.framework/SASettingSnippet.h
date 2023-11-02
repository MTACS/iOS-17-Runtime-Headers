
@interface SASettingSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *settingKeys;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSettingKeys:(id)arg1;
- (id)settingKeys;

@end
