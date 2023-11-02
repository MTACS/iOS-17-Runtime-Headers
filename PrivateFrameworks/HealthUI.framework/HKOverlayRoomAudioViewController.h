
@interface HKOverlayRoomAudioViewController : HKOverlayRoomViewController <HKAudioExposureDevicesDataSourceObserver, HKHealthChartFactoryViewControllerProviderClass, HKOverlayRoomTrendModelProviding> {
    HKAudioExposureDevicesDataSource * _audioExposureDevicesDataSource;
    NSMutableArray * _contextDelegates;
    bool  _isShowingUnattenuatedOverlayPill;
    long long  _preferredOverlay;
    NSNumber * _preferredOverlayIndex;
    NSString * _quantityTypeIdentifier;
    HKChartSummaryTrendModel * _trendModel;
}

@property (nonatomic, retain) HKAudioExposureDevicesDataSource *audioExposureDevicesDataSource;
@property (nonatomic, retain) NSMutableArray *contextDelegates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isShowingUnattenuatedOverlayPill;
@property (nonatomic, readonly) long long preferredOverlay;
@property (nonatomic, readonly) NSString *quantityTypeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKChartSummaryTrendModel *trendModel;

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;

- (void).cxx_destruct;
- (id)_buildAudioAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 averageOverVisibleRange:(bool)arg4 attenuated:(bool)arg5;
- (id /* block */)_buildAverageDataSourceTitleFromTimeScope:(bool)arg1;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id)_headphonePredicateForDevices:(id)arg1 withName:(id)arg2;
- (long long)_initialPillForPreference:(long long)arg1;
- (bool)_isAudioExposureDevicesSupported;
- (bool)_isEnvironmentalAudioExposureRoom;
- (bool)_isHeadphoneAudioExposureRoom;
- (id)_makeHeadphoneDeviceFiltersUsingContextCreator:(id /* block */)arg1;
- (void)_registerForAudioExposureDeviceUpdates;
- (void)_reloadAudioExposureDevices;
- (void)_setupAudioExposureDataSourceIfNeeded;
- (bool)_shouldShowUnattenuatedOverlayPill;
- (id)_unattenuatedBaseDisplayTypeForPrimaryDisplayType:(id)arg1 applicationItems:(id)arg2;
- (id /* block */)_userInfoCreationBlockForLEQ;
- (void)audioExposureDataSourceIsReady:(id)arg1;
- (id)audioExposureDevicesDataSource;
- (id)contextDelegates;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5 audioExposureDeviceDataSource:(id)arg6 trendModel:(id)arg7;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5 trendModel:(id)arg6;
- (id)initialSelectedContextForMode:(long long)arg1 containerIndex:(long long)arg2;
- (bool)isShowingUnattenuatedOverlayPill;
- (long long)preferredOverlay;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)quantityTypeIdentifier;
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(id)arg2;
- (void)setAudioExposureDevicesDataSource:(id)arg1;
- (void)setContextDelegates:(id)arg1;
- (void)setIsShowingUnattenuatedOverlayPill:(bool)arg1;
- (id)showAllFiltersButtonTitle;
- (bool)supportsShowAllFilters;
- (id)trendModel;
- (void)viewDidLoad;

@end
