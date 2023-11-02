
@interface WDProfile : NSObject <UIStateRestoring> {
    HKChartDataCacheController * _dataCacheController;
    HKDateCache * _dateCache;
    HKDisplayTypeController * _displayTypeController;
    WDFavoriteDisplayTypesController * _favoriteDisplayTypesController;
    HKHealthRecordsStore * _healthRecordsStore;
    HKHealthStore * _healthStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKManualEntryValidationController * _manualEntryValidationController;
    WDNotificationManager * _notificationManager;
    HKSampleTypeDateRangeController * _sampleTypeDateRangeController;
    HKSelectedTimeScopeController * _selectedTimeScopeController;
    WDSourceOrderController * _sourceOrderController;
    HKUCUMUnitDisplayConverter * _ucumDisplayConverter;
    HKUnitPreferenceController * _unitController;
    HKSampleTypeUpdateController * _updateController;
    WDUserActivityManager * _userActivityManager;
    WDUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) HKChartDataCacheController *dataCacheController;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) WDFavoriteDisplayTypesController *favoriteDisplayTypesController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthRecordsStore *healthRecordsStore;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKManualEntryValidationController *manualEntryValidationController;
@property (nonatomic, readonly) WDNotificationManager *notificationManager;
@property (nonatomic, readonly) Class objectRestorationClass;
@property (nonatomic, readonly) NSString *presentationContext;
@property (nonatomic, readonly) <UIStateRestoring> *restorationParent;
@property (nonatomic, readonly) HKSampleTypeDateRangeController *sampleTypeDateRangeController;
@property (nonatomic, readonly) HKSelectedTimeScopeController *selectedTimeScopeController;
@property (nonatomic, readonly) WDSourceOrderController *sourceOrderController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKUCUMUnitDisplayConverter *ucumDisplayConverter;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;
@property (nonatomic, readonly) HKSampleTypeUpdateController *updateController;
@property (nonatomic, readonly) WDUserActivityManager *userActivityManager;
@property (nonatomic, readonly) WDUserDefaults *userDefaults;
@property (nonatomic, readonly) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;

- (void).cxx_destruct;
- (id)_createHealthStore;
- (id)dataCacheController;
- (id)dateCache;
- (id)displayTypeController;
- (id)favoriteDisplayTypesController;
- (id)healthRecordsStore;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)manualEntryValidationController;
- (id)notificationManager;
- (id)presentationContext;
- (id)sampleTypeDateRangeController;
- (id)selectedTimeScopeController;
- (id)sourceOrderController;
- (id)ucumDisplayConverter;
- (id)unitController;
- (id)updateController;
- (id)userActivityManager;
- (id)userDefaults;
- (id)wheelchairUseCharacteristicCache;

@end
