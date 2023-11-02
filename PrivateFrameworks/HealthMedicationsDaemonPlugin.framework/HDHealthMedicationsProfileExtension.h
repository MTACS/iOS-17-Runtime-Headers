
@interface HDHealthMedicationsProfileExtension : NSObject <HDProfileExtension> {
    HDAnalyticsDailyEventManager * _medicationDailyAnalyticsManager;
    HDMedicationDoseEventObserver * _medicationDoseEventObserver;
    HDMedicationNotificationSyncManager * _medicationNotificationSyncManager;
    HDMedicationScheduleManager * _medicationScheduleManager;
    HDMedicationSyncRequester * _medicationSyncRequester;
    HDMedicationDataDonator * _medicationsDataDonator;
    HDPrimaryProfile * _profile;
    HDMedicationsWidgetSchedulingManager * _widgetSchedulingManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDMedicationDoseEventObserver *medicationDoseEventObserver;
@property (nonatomic, readonly) HDMedicationNotificationSyncManager *medicationNotificationSyncManager;
@property (nonatomic, readonly) HDMedicationScheduleManager *medicationScheduleManager;
@property (nonatomic, readonly) HDMedicationSyncRequester *medicationSyncRequester;
@property (nonatomic, readonly) HDMedicationDataDonator *medicationsDataDonator;
@property (nonatomic, readonly) HDPrimaryProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDMedicationsWidgetSchedulingManager *widgetSchedulingManager;

- (void).cxx_destruct;
- (id)createMedicationNotificationSyncManager;
- (id)createMedicationsDonatorWithError:(id*)arg1;
- (id)createMedicationsWidgetTimelineController;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)medicationDoseEventObserver;
- (id)medicationNotificationSyncManager;
- (id)medicationScheduleManager;
- (id)medicationSyncRequester;
- (id)medicationsDataDonator;
- (id)profile;
- (void)start;
- (id)widgetSchedulingManager;

@end
