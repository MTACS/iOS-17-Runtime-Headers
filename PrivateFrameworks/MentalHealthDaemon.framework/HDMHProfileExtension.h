
@interface HDMHProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider, HDProfileExtension> {
    HDBackgroundFeatureDeliveryManager * _depressionAndAnxietyAssessmentsBackgroundFeatureDeliveryManager;
    HDFeatureAvailabilityManager * _depressionAndAnxietyAssessmentsFeatureAvailabilityManager;
    HDAnalyticsDailyEventManager * _mentalHealthDailyEventManager;
    HDMHNotificationManager * _notificationManager;
    HDBackgroundFeatureDeliveryManager * _periodicDepressionAndAnxietyAssessmentPromptsBackgroundFeatureDeliveryManager;
    HDFeatureAvailabilityManager * _periodicDepressionAndAnxietyAssessmentPromptsFeatureAvailabilityManager;
    HDPrimaryProfile * _profile;
    HKMHSettingsManager * _settingsManager;
    HDFeatureAvailabilityManager * _stateOfMindLoggingFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager * _stateOfMindLoggingPatternEscalationsBackgroundFeatureDeliveryManager;
    HDFeatureAvailabilityManager * _stateOfMindLoggingPatternEscalationsFeatureAvailabilityManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDMHNotificationManager *notificationManager;
@property (nonatomic, readonly) HDPrimaryProfile *profile;
@property (nonatomic, readonly) HKMHSettingsManager *settingsManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 typicalDayProvider:(id)arg2;
- (id)notificationManager;
- (id)profile;
- (id)settingsManager;

@end
