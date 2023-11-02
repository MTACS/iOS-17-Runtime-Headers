
@interface SAUISirilandSnippet : SAUISnippet

@property (nonatomic, copy) NSString *navigationPath;

+ (id)sirilandSnippet;
+ (id)sirilandSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)navigationPath;
- (void)setNavigationPath:(id)arg1;

@end
