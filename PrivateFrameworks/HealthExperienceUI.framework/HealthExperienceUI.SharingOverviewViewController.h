
@interface HealthExperienceUI.SharingOverviewViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HealthExperienceUI.TapToRadarButtonDisplaying> {
    void $__lazy_storage_$_store;
    void healthExperienceStore;
    void healthStore;
    void syncObserver;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)ttrButtonTapped;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
