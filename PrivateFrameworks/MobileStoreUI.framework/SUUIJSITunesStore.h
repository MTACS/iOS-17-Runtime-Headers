
@interface SUUIJSITunesStore : IKJSITunesStore <SUUIItemStateCenterObserver, SUUIJSITunesStore> {
    SUUIClientContext * _clientContext;
    bool  _isAppPreview;
}

@property (nonatomic) long long applicationIconBadgeNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *hostApp;
@property (nonatomic, readonly) bool isAppPreview;
@property (nonatomic, readonly) SUUIJSAppleAccount *primaryAppleAccount;
@property (nonatomic, readonly) SUUIJSRestrictions *restrictions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_displayWifiConnectionRequiredAlert;
- (void)_finishPurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2;
- (void)_finishSoftwarePurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2;
- (id)_millisecondsFromTimeInterval:(double)arg1;
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;
- (id)_rentalInfoFromMediaItems:(id)arg1;
- (long long)applicationIconBadgeNumber;
- (void)approveInPerson:(id)arg1 :(id)arg2;
- (bool)areVideosCloudPurchasesEnabled;
- (void)attemptLocalAskToBuyApproval:(id)arg1;
- (void)buy:(id)arg1;
- (void)clearToggleStateItems;
- (void)dealloc;
- (id)documentSizeForNavigationDocument:(id)arg1;
- (void)download:(id)arg1;
- (void)downloadExistsFor:(id)arg1 :(id)arg2;
- (void)exit:(id)arg1;
- (void)fetchMSOProviderStatus:(id)arg1;
- (void)fetchTemplates:(id)arg1 :(id)arg2;
- (void)findApps:(id)arg1 :(id)arg2 :(id)arg3;
- (void)findLibraryItems:(id)arg1 :(id)arg2 :(id)arg3;
- (void)findOwnedItems:(id)arg1 :(id)arg2;
- (void)findToggleStateForItem:(id)arg1 :(id)arg2;
- (void)getAdminStatus:(id)arg1 :(id)arg2;
- (void)getBookSample:(id)arg1;
- (void)getProfilePermissions:(id)arg1 :(id)arg2;
- (void)headsUp:(id)arg1 :(id)arg2;
- (id)hostApp;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;
- (bool)isAppPreview;
- (void)isInstalledApp:(id)arg1 :(id)arg2;
- (void)isRemovedSystemApp:(id)arg1 :(id)arg2;
- (void)itemStateCenterMediaLibrariesDidChange:(id)arg1;
- (void)launchICloudFamilySettings;
- (void)loadGratisContent:(id)arg1;
- (void)loadRental:(id)arg1 :(id)arg2;
- (void)loadRentals:(id)arg1;
- (void)log:(id)arg1;
- (id)primaryAppleAccount;
- (void)resetStateForActiveDocument;
- (bool)resourceExists:(id)arg1;
- (void)restoreRemovedSystemApp:(id)arg1 :(id)arg2;
- (id)restrictions;
- (bool)sendAppPreviewStateChanged:(bool)arg1;
- (void)sendApplicationDidEnterBackground;
- (void)sendApplicationWillEnterForeground;
- (void)sendApplicationWindowSizeDidUpdate:(struct CGSize { double x1; double x2; })arg1;
- (void)sendOnNavigationStackWillPop:(bool)arg1;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (bool)sendOnShowPageEventType:(id)arg1 data:(id)arg2;
- (bool)sendOnXEventWithDictionary:(id)arg1;
- (void)setApplicationIconBadgeNumber:(long long)arg1;
- (void)setPreviewOverlay:(id)arg1 :(id)arg2;
- (void)updateToggleStateForItem:(id)arg1 toggled:(bool)arg2 :(id)arg3;

@end