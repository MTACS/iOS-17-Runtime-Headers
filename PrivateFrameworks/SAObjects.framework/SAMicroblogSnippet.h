
@interface SAMicroblogSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *microblogs;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)microblogs;
- (void)setMicroblogs:(id)arg1;

@end
