
@interface ICQCloudStorageGroupController : NSObject <CloudStorageGroupControllerProtocol, DelayedPushDelegate, ICQUICloudStorageOffersManagerDelegate, RUITableViewRowDelegate> {
    bool  _buyMore;
    bool  _delayedEnterManageStorage;
    PSListController * _listController;
    bool  _loadingCommerce;
    bool  _loadingStorage;
    PSSpecifier * _managedStorage;
    bool  _quotaCached;
    bool  _quotaFailed;
    bool  _quotaFetchInProgress;
    ICQQuotaInfoResponse * _quotaInfo;
    PSTableCell * _remoteLoadingCell;
    NSMutableArray * _specifiers;
    ICQPreferencesRemoteUIDelegate * _storageDelegate;
    ICQUICloudStorageOffersManager * _storageOffersManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)backupInfoHeaders;
+ (id)backupInfoHeadersForAccount:(id)arg1;

- (void).cxx_destruct;
- (void)addGroupToListController:(id)arg1;
- (id)availableStorage:(id)arg1;
- (void)cancelLoaders;
- (void)clearQuotaCache;
- (void)dealloc;
- (void)enterBuyStorage;
- (void)enterBuyStorageWhenPossible;
- (void)enterManageStorageWhenPossible;
- (void)enterManagedStorage:(id)arg1;
- (void)getQuotaInfo;
- (void)groupRemovedFromListController;
- (bool)hasPurchasedMoreStorage;
- (id)init;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadStarted:(id)arg1;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)quotaInfoChanged;
- (void)reachabilityChanged:(id)arg1;
- (void)remoteUIDelegate:(id)arg1 didCreatePage:(id)arg2 forAccount:(id)arg3 inObjectModel:(id)arg4;
- (void)remoteUIDelegate:(id)arg1 didCreatePage:(id)arg2 inObjectModel:(id)arg3;
- (void)rowDidChange:(id)arg1 action:(int)arg2;
- (void)rowDidEndEditing:(id)arg1;
- (void)rowIsFirstResponder:(id)arg1;
- (id)sourceURLForRUITableViewRow;
- (id)specifiersWithBuyMore:(bool)arg1;
- (void)startSpinnerInCellForSpecifier:(id)arg1;
- (void)stopSpinner;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (id)textFieldRow:(id)arg1 changeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id)totalStorage:(id)arg1;
- (void)updateManagedStorageState;

@end
