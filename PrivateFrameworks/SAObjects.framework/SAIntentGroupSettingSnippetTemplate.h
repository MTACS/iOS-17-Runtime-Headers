
@interface SAIntentGroupSettingSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic, copy) NSString *alignment;
@property (nonatomic, copy) NSString *text;

+ (id)settingSnippetTemplate;
+ (id)settingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)alignment;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAlignment:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
