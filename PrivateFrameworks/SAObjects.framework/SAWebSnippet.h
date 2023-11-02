
@interface SAWebSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *webSearch;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setWebSearch:(id)arg1;
- (id)webSearch;

@end
