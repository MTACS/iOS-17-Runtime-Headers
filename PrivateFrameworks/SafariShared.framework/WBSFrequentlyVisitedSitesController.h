
@interface WBSFrequentlyVisitedSitesController : NSObject {
    WBSFrequentlyVisitedSitesBannedURLStore * _bannedURLStore;
    WBSHistory * _history;
    NSString * _profileIdentifier;
    double  _timeOfLastFrequentlyVisitedSitesComputation;
}

@property (nonatomic, readonly) NSArray *frequentlyVisitedSites;
@property (nonatomic, readonly) NSString *profileIdentifier;

- (void).cxx_destruct;
- (id)_canonicalizedFavoritesURLStringSet;
- (id)_frequentlyVisitedSitesURLStringSet;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (void)_saveFrequentlyVisitedSites:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearFrequentlyVisitedSites;
- (id)frequentlyVisitedSites;
- (id)initWithHistory:(id)arg1 bannedURLStore:(id)arg2 profileIdentifier:(id)arg3;
- (id)profileIdentifier;
- (bool)recomputeFrequentlyVisitedSitesIfNecessary;

@end
