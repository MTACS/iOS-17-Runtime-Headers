
@interface HistoryController : WBSHistoryController {
    NSMapTable * _frequentlyVisitedSitesBannedURLStores;
    NSMapTable * _frequentlyVisitedSitesControllers;
}

- (void).cxx_destruct;
- (id)_createHistoryForProfileIdentifier:(id)arg1;
- (id)frequentlyVisitedSitesBannedURLStoreForProfileIdentifier:(id)arg1 loadIfNeeded:(bool)arg2;
- (id)frequentlyVisitedSitesControllerForProfileIdentifier:(id)arg1 loadIfNeeded:(bool)arg2;
- (id)historyForProfileIdentifier:(id)arg1 loadIfNeeded:(bool)arg2;
- (id)init;

@end
