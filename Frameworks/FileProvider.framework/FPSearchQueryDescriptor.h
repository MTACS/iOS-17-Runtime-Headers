
@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor {
    bool  _avoidCoreSpotlightSearch;
    NSString * _searchQueryString;
    bool  _thirdPartySearchOnServer;
}

@property (nonatomic) bool avoidCoreSpotlightSearch;
@property (copy) NSString *searchQueryString;
@property (getter=isThirdPartySearchOnServer, nonatomic) bool thirdPartySearchOnServer;

- (void).cxx_destruct;
- (id)_scopes;
- (void)augmentQueryContext:(id)arg1;
- (bool)avoidCoreSpotlightSearch;
- (unsigned long long)hash;
- (bool)isEqualToItemQueryDescriptor:(id)arg1;
- (bool)isThirdPartySearchOnServer;
- (bool)keepCollectorsAlive;
- (id)name;
- (id)queryStringForMountPoint:(id)arg1;
- (id)searchQueryString;
- (void)setAvoidCoreSpotlightSearch:(bool)arg1;
- (void)setSearchQueryString:(id)arg1;
- (void)setThirdPartySearchOnServer:(bool)arg1;

@end
