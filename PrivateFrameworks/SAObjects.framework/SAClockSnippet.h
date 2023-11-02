
@interface SAClockSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *clocks;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)clocks;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setClocks:(id)arg1;

@end
