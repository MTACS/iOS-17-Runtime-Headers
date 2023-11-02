
@interface SAUSSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *sections;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)sections;
- (void)setSections:(id)arg1;

@end
