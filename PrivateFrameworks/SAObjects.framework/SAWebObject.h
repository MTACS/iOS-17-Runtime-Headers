
@interface SAWebObject : SADomainObject

@property (nonatomic, copy) NSString *query;
@property (nonatomic, retain) SAWebWebSearchResult *results;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)query;
- (id)results;
- (void)setQuery:(id)arg1;
- (void)setResults:(id)arg1;

@end
