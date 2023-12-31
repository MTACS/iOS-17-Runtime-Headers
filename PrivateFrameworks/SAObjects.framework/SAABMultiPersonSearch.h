
@interface SAABMultiPersonSearch : SADomainCommand

@property (nonatomic, copy) NSArray *personSearches;
@property (nonatomic, copy) NSNumber *resultsLimit;

+ (id)multiPersonSearch;
+ (id)multiPersonSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)personSearches;
- (bool)requiresResponse;
- (id)resultsLimit;
- (void)setPersonSearches:(id)arg1;
- (void)setResultsLimit:(id)arg1;

@end
