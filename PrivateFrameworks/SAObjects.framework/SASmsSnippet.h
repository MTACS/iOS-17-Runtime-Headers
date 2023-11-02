
@interface SASmsSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *smss;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSmss:(id)arg1;
- (id)smss;

@end
