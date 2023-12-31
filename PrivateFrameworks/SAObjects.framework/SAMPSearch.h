
@interface SAMPSearch : SADomainCommand

@property (nonatomic, copy) NSArray *constraints;
@property (nonatomic) long long maxResults;
@property (nonatomic, copy) NSArray *searchTypes;
@property (nonatomic) bool strict;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)constraints;
- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)maxResults;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (id)searchTypes;
- (void)setConstraints:(id)arg1;
- (void)setMaxResults:(long long)arg1;
- (void)setSearchTypes:(id)arg1;
- (void)setStrict:(bool)arg1;
- (bool)strict;

@end
