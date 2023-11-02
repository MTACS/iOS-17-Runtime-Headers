
@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (nonatomic) bool acceptPodcastCollections;
@property (nonatomic) bool acceptPodcastStations;
@property (nonatomic) long long maxResults;
@property (nonatomic, copy) NSString *query;

+ (id)basicPodcastAppSearch;
+ (id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2;

- (bool)acceptPodcastCollections;
- (bool)acceptPodcastStations;
- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)maxResults;
- (bool)mutatingCommand;
- (id)query;
- (bool)requiresResponse;
- (void)setAcceptPodcastCollections:(bool)arg1;
- (void)setAcceptPodcastStations:(bool)arg1;
- (void)setMaxResults:(long long)arg1;
- (void)setQuery:(id)arg1;

@end