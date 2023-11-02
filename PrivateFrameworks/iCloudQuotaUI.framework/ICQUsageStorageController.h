
@interface ICQUsageStorageController : PSListController {
    SUManagerClient * _SUManager;
    PSSpecifier * _appsStorageGroup;
    NSMutableArray * _deferredUsageApps;
    bool  _delayUsagePopulation;
    bool  _openedFromSoftwareUpdate;
    PSSpecifier * _photosSpecifier;
    PSSpecifier * _storageAvailableSpecifier;
    NSDate * _storageExpiry;
    bool  _storageLookupInProgress;
    PSSpecifier * _storageUsedSpecifier;
    double  _timeoutLimit;
    NSString * _updateName;
    unsigned long long  _updateRequiredBytes;
}

@property (nonatomic) bool delayUsagePopulation;
@property (nonatomic) bool openedFromSoftwareUpdate;

+ (id)storageAvailableSpecifier;
+ (id)storageUsedSpecifier;
+ (id)systemSizeAvailable:(id)arg1;
+ (id)systemSizeUsed:(id)arg1;

- (void).cxx_destruct;
- (id)_specifierForApp:(id)arg1;
- (id)_specifierForBundle:(id)arg1;
- (void)addStorageSpecifiers:(id)arg1 completed:(bool)arg2;
- (void)appDeletionComplete;
- (void)checkForPendingUpdate;
- (id)controllerForSpecifier:(id)arg1;
- (void)dealloc;
- (bool)delayUsagePopulation;
- (void)didEnterForeground;
- (void)didUnlock;
- (void)handleURL:(id)arg1;
- (id)init;
- (bool)mediaCache:(id)arg1 hasGroups:(id)arg2;
- (bool)openedFromSoftwareUpdate;
- (void)prepareForSnapshot;
- (void)refreshSoftwareUpdateRequiredSpace;
- (void)reloadSpecifiers;
- (void)reloadStorageSummary;
- (void)removeStorageSpecifier:(id)arg1;
- (void)setDelayUsagePopulation:(bool)arg1;
- (void)setOpenedFromSoftwareUpdate:(bool)arg1;
- (bool)shouldDeferPushForSpecifierID:(id)arg1;
- (void)sizeChangedForSpecifier:(id)arg1;
- (void)snapshotAndReportDiskSpace;
- (id)specifiers;
- (bool)storageExpired;
- (id)stringWithAppSizeForSpecifier:(id)arg1;
- (id)tapToRadarURLForAttributes:(id)arg1;
- (Class)usageDetailControllerForBundleID:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
