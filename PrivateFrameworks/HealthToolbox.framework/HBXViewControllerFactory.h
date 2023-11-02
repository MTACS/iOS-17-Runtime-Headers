
@interface HBXViewControllerFactory : NSObject {
    HKHealthChartFactory * _chartFactory;
    WDProfile * _profile;
    HBXUnitSupport * _unitSupport;
}

@property (nonatomic, retain) HKHealthChartFactory *chartFactory;
@property (nonatomic, retain) WDProfile *profile;
@property (nonatomic, retain) HBXUnitSupport *unitSupport;

+ (id)factories;
+ (struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; })factoriesLock;
+ (void)resetSharedInstances;
+ (id)sharedInstance;
+ (id)sharedInstanceForHealthStore:(id)arg1;

- (void).cxx_destruct;
- (id)chartFactory;
- (id)createActivityChartForActivityMoveMode:(long long)arg1 displayDate:(id)arg2 activityOptions:(unsigned long long)arg3 chartSharableModel:(id)arg4;
- (void)createAndStartExportForViewController:(id)arg1 shareSheetSourceView:(id)arg2;
- (id)createAppSourcesViewControllerUsingInsetStyling:(bool)arg1;
- (id)createBuddyViewControllerWithHealthDetailsLast:(bool)arg1;
- (id)createChartForTypeIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 minimumSize:(struct CGSize { double x1; double x2; })arg4 disableXAxis:(bool)arg5;
- (id)createClinicalDocumentOverviewViewController;
- (id)createContactConsolidationControllerInViewController:(id)arg1;
- (id)createDataSourcesTableViewController:(id)arg1;
- (id)createDeletedSourceMessageViewControllerForSource:(id)arg1;
- (id)createDeviceSourcesViewControllerUsingInsetStyling:(bool)arg1;
- (id)createDeviceStoredDataViewControllerForDevice:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(bool)arg3;
- (id)createElectrocardiogramDataMetadataViewControllerWithElectrocardiogram:(id)arg1 dataProvider:(id)arg2;
- (id)createElectrocardiogramListDataProvider;
- (id)createFavoritesController;
- (id)createHKUnitPreferenceController;
- (id)createInteractiveChartForType:(id)arg1 preferredOverlay:(long long)arg2 displayDate:(id)arg3;
- (id)createInteractiveChartForType:(id)arg1 preferredOverlay:(long long)arg2 displayDateInterval:(id)arg3;
- (id)createListViewController:(id)arg1;
- (id)createLocalDeviceStoredDataViewControllerForSource:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(bool)arg3;
- (id)createResearchStudySourcesViewControllerUsingInsetStyling:(bool)arg1 restorationStudyBundleIdentifier:(id)arg2;
- (id)createSingleAppAuthorizationViewControllerUsingInsetStyling:(bool)arg1 restorationApplicationBundleIdentifier:(id)arg2;
- (id)createSourcesViewControllerUsingInsetStyling:(bool)arg1;
- (id)createUnitPreferencesController:(id)arg1;
- (id)createWatchStoredDataViewControllerForSource:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(bool)arg3;
- (id)detailViewControllerForSourceModel:(id)arg1 withHealthStore:(id)arg2;
- (void)fetchUserDefaultForKey:(id)arg1 withCallback:(id /* block */)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)localizedDisplayNameForUnit:(id)arg1;
- (id)localizedPreferredUnitDisplayNameForType:(id)arg1;
- (id)localizedPreferredUnitDisplayNameForType:(id)arg1 nameContext:(long long)arg2;
- (id)localizedUnitDisplayNameForDisplayType:(id)arg1 nameContext:(long long)arg2;
- (id)notificationManager;
- (id)preferredUnitForType:(id)arg1;
- (id)profile;
- (void)setChartFactory:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setUnitSupport:(id)arg1;
- (id)unitStringForType:(id)arg1;
- (id)unitSupport;
- (void)updatePreferredUnit:(id)arg1 forType:(id)arg2;

@end
