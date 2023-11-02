
@interface _SFAccountIconController : NSObject {
    WBSAutoFillQuirksManager * _autoFillQuirksManager;
    NSMutableArray * _blocksAwaitingHistoryItems;
    NSMutableArray * _blocksAwaitingSharedWebCredentialsInformation;
    <_SFAccountIconControllerDelegate> * _delegate;
    NSMutableDictionary * _domainToAppID;
    NSMutableDictionary * _domainToItems;
    NSMutableSet * _domainsThatHaveRequestedIcon;
    NSMutableDictionary * _domainsToExtractedBackgroundColors;
    WBSCache * _iconCache;
    bool  _initializedHistory;
    _SFSiteMetadataManager * _metadataManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _touchIconRequests;
}

@property (nonatomic) <_SFAccountIconControllerDelegate> *delegate;

+ (struct CGSize { double x1; double x2; })_minimumIconSize;
+ (struct CGSize { double x1; double x2; })_preferredIconSize;
+ (struct CGSize { double x1; double x2; })tableViewIconSize;

- (void).cxx_destruct;
- (void)_checkForLocalVisitToDomain:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_fetchAppIconForDomain:(id)arg1;
- (void)_fetchTouchIconForDomain:(id)arg1;
- (void)_fetchTouchIconInHistoryForDomain:(id)arg1;
- (void)_iconDidUpdateForDomain:(id)arg1;
- (void)_populateDomainToAppIDWithCompletion:(id /* block */)arg1;
- (void)_populateDomainToItemsWithCompletion:(id /* block */)arg1;
- (void)_requestTouchIconForDomain:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)backgroundColorForDomain:(id)arg1;
- (id)cachedIconForDomain:(id)arg1 resizedToSize:(struct CGSize { double x1; double x2; })arg2;
- (void)clearIconFetchingState;
- (void)dealloc;
- (id)delegate;
- (id)iconForDomain:(id)arg1;
- (id)initWithMetadataManager:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
