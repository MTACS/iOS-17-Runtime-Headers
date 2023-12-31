
@interface SAUIAlternateProviderSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *alternateProviderResults;

+ (id)alternateProviderSnippet;
+ (id)alternateProviderSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)alternateProviderResults;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAlternateProviderResults:(id)arg1;

@end
