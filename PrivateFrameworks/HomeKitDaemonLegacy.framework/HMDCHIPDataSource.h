
@interface HMDCHIPDataSource : HMFObject <HMFLogging, HMFTimerDelegate, HMMTRAccessoryServerBrowserDelegate, HMMTRResidentStateManagerDataSource, HMMTRStorageDataSource, HMMTRUIDialogPresenterDelegate> {
    HMFTimer * _attestationDataRefreshTimer;
    HMMTRAttestationDataStore * _attestationDataStore;
    HMMTRResidentStateManager * _chipResidentStateManager;
    HMMTRStorage * _chipStorage;
    HMDUIDialogPresenter * _dialogPresenter;
    HMDHomeManager * _homeManager;
    NSNotificationCenter * _notificationCenter;
    HMMTRUIDialogPresenter * _uiDialogPresenter;
    HMFTimer * _vendorMetadataRefreshTimer;
    HMMTRVendorMetadataStore * _vendorMetadataStore;
}

@property (nonatomic, readonly, copy) NSSet *allFabricIDs;
@property (nonatomic, readonly, copy) NSSet *allPairedHAPServerIdentifiers;
@property (readonly) HMFTimer *attestationDataRefreshTimer;
@property (retain) HMMTRAttestationDataStore *attestationDataStore;
@property (retain) HMMTRResidentStateManager *chipResidentStateManager;
@property (retain) HMMTRStorage *chipStorage;
@property (getter=isCurrentDevicePrimaryResident, readonly) bool currentDevicePrimaryResident;
@property (readonly, copy) NSNumber *currentFabricID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDUIDialogPresenter *dialogPresenter;
@property (readonly) unsigned long long hash;
@property HMDHomeManager *homeManager;
@property (readonly, copy) NSDictionary *keyValueStore;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSNumber *pairingTargetFabricIndex;
@property (readonly) Class superclass;
@property (retain) HMMTRUIDialogPresenter *uiDialogPresenter;
@property (readonly) HMFTimer *vendorMetadataRefreshTimer;
@property (retain) HMMTRVendorMetadataStore *vendorMetadataStore;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)allFabricIDs;
- (id)allPairedHAPServerIdentifiers;
- (id)attestationDataRefreshTimer;
- (id)attestationDataStore;
- (void)browser:(id)arg1 didRemoveAccessoryPairingWithNodeID:(id)arg2;
- (id)chipResidentStateManager;
- (id)chipStorage;
- (void)configureWithAccessoryServerBrowser:(id)arg1;
- (void)configureWithAttestationDataStore:(id)arg1;
- (void)configureWithResidentStateManager:(id)arg1;
- (void)configureWithStorage:(id)arg1;
- (void)configureWithUIDialogPresenter:(id)arg1;
- (void)configureWithVendorMetadataStore:(id)arg1;
- (void)createCHIPStoragesForHomes:(id)arg1 homeManager:(id)arg2 completion:(id /* block */)arg3;
- (id)currentFabricID;
- (id)dialogPresenter;
- (void)handleAccessoryCHIPStorageChangedNotification:(id)arg1;
- (void)handleHomeCHIPStorageChangedNotification:(id)arg1;
- (void)handleHomeRemovedNotification:(id)arg1;
- (void)handlePrimaryResidentUpdatedNotification:(id)arg1;
- (void)handleUpdatedDataWithIsLocalChange:(bool)arg1;
- (id)home;
- (id)homeManager;
- (id)homeWithCHIPFabricID:(id)arg1;
- (id)initWithHomeManager:(id)arg1;
- (id)initWithHomeManager:(id)arg1 notificationCenter:(id)arg2 vendorMetadataRefreshTimer:(id)arg3 attestationDataRefreshTimer:(id)arg4 dialogPresenter:(id)arg5;
- (bool)isCurrentDevicePrimaryResident;
- (id)notificationCenter;
- (id)pairingTargetFabricIndex;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setAttestationDataStore:(id)arg1;
- (void)setChipResidentStateManager:(id)arg1;
- (void)setChipStorage:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setUiDialogPresenter:(id)arg1;
- (void)setVendorMetadataStore:(id)arg1;
- (id)storageDataSourceForFabricWithID:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)uiDialogPresenter;
- (id)vendorMetadataRefreshTimer;
- (id)vendorMetadataStore;

@end
