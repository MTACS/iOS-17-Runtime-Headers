
@interface SAEmailSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *emails;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)emails;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setEmails:(id)arg1;

@end
