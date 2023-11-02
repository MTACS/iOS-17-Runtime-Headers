
@interface HealthExperienceUI.DataTypeDetailViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HKInternalSettingsGestureHandler, HealthExperienceUI.TapToRadarButtonDisplaying> {
    void $__lazy_storage_$_addDataButton;
    void $__lazy_storage_$_personalizedFeedTrainer;
    void $__lazy_storage_$_tapToRadarHandler;
    void cancellables;
    void chartContext;
    void chartImageProvider;
    void chartOverlayVersionProvider;
    void didSubmitAnalyticsForRoomEntry;
    void hkType;
    void mode;
    void providedHealthStore;
    void providedHealthToolbox;
    void restorationUserActivity;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)addDataKeyCommandFired;
- (void)addDataTapped:(id)arg1;
- (bool)canBecomeFirstResponder;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)onInternalSettingsGesture;
- (void)restoreUserActivityState:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)ttrButtonTapped;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
