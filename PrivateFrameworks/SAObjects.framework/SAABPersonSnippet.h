
@interface SAABPersonSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *displayProperties;
@property (nonatomic, copy) NSArray *persons;

+ (id)personSnippet;
+ (id)personSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)displayProperties;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)persons;
- (void)setDisplayProperties:(id)arg1;
- (void)setPersons:(id)arg1;

@end
