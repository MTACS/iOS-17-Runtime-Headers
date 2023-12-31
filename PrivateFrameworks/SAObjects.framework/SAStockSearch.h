
@interface SAStockSearch : SADomainCommand

@property (nonatomic, copy) NSArray *stockReferences;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setStockReferences:(id)arg1;
- (id)stockReferences;

@end
