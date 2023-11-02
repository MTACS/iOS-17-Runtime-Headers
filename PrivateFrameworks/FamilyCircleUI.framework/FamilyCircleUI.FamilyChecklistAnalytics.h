
@interface FamilyCircleUI.FamilyChecklistAnalytics : NSObject

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)sendChecklistChildSettingsToggleAnalyticsEvent;
- (void)sendChecklistCommLimitsToggleAnalyticsEvent;
- (void)sendChecklistIcloudPlusToggleAnalyticsEvent;
- (void)sendChecklistLocationSharingToggleAnalyticsEvent;
- (void)sendChildSettingsAnalyticsEvent;
- (void)sendChildSettingsOnOffToggleEvent;
- (void)sendCommLimitsAnalyticsEvent;
- (void)sendCommLimitsOnOffToggleEvent;
- (void)sendEmergencyContactsAnalyticsEvent;
- (void)sendEmergencyContactsOnOffToggleEvent;
- (void)sendEmergencyContactsToggleAnalyticsEvent;
- (void)sendIcloudPlusSharingAnalyticsEvent;
- (void)sendLocationSharingAnalyticsEvent;
- (void)sendLocationSharingOnOffToggleEvent;
- (void)sendRecoveryContactsAnalyticsEvent;
- (void)sendRecoveryContactsOnOffToggleEvent;
- (void)sendRecoveryContactsToggleAnalyticsEvent;
- (void)sendTotalChecklistViewsAnalyticsEvent;
- (void)sendicloudPlusOnOffToggleEvent;

@end
