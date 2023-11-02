
@interface HDHeartDailyAnalytics : NSObject <NSCopying> {
    NSMutableDictionary * _payload;
}

@property (nonatomic, readonly, copy) NSDictionary *payload;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)payload;
- (void)updateActiveWatchProductType:(id)arg1;
- (void)updateActiveWatchSystemBuildVersion:(id)arg1;
- (void)updateAgeInYears:(id)arg1;
- (void)updateAlgorithmVersionIRN:(id)arg1;
- (void)updateAreHealthNotificationsAuthorized:(bool)arg1;
- (void)updateAtrialFibrillationDetectionV2CountryCode:(id)arg1;
- (void)updateCountAnalyzedTachogramsPast24Hours:(long long)arg1;
- (void)updateCountMobileAssetsDownloadedPast24Hours:(long long)arg1;
- (void)updateCountRecordedTachogramsPast24Hours:(long long)arg1;
- (void)updateDaysSinceLastCountryMonitorCheck:(id)arg1;
- (void)updateDaysSinceLastCountryMonitorFetch:(id)arg1;
- (void)updateECGActiveAlgorithmVersion:(id)arg1;
- (void)updateECGOnboardingCountryCode:(id)arg1;
- (void)updateECGUpdateVersionPhone:(id)arg1;
- (void)updateECGUpdateVersionWatch:(id)arg1;
- (void)updateElectrocardiogramClassificationCount:(long long)arg1;
- (void)updateGlucoseEnhancedChartingCountryCode:(id)arg1;
- (void)updateHighHeartRateNotificationThreshold:(id)arg1;
- (void)updateIRNOnboardingCountryCode:(id)arg1;
- (void)updateIrregularRhythmNotificationClassificationCount:(long long)arg1;
- (void)updateIsAtrialFibrillationEnabled:(id)arg1;
- (void)updateIsAtrialFibrillationEnabledV2:(id)arg1;
- (void)updateIsBradycardiaDetectionEnabled:(bool)arg1;
- (void)updateIsEcgOnboarded:(bool)arg1;
- (void)updateIsGlucoseEnhancedChartingDelivered:(bool)arg1;
- (void)updateIsImproveHealthAndActivityAllowed:(bool)arg1;
- (void)updateIsIrnOnboarded:(bool)arg1;
- (void)updateIsMenstrualCyclesHeartRateInputDelivered:(bool)arg1;
- (void)updateIsRespiratoryRateDelivered:(bool)arg1;
- (void)updateIsRespiratoryRateEnabledInPrivacy:(id)arg1;
- (void)updateIsTachycardiaDetectionEnabled:(bool)arg1;
- (void)updateLastCountryMonitorFetchBuildNumber:(id)arg1;
- (void)updateLowHeartRateNotificationThreshold:(id)arg1;
- (void)updateMenstrualCyclesHeartRateInputCountryCode:(id)arg1;
- (void)updateNumberOfStandAndIdleHoursInPreviousCalendarDay:(id)arg1;
- (void)updateOTAFactorPackID:(id)arg1;
- (void)updateRespiratoryRateCountryCode:(id)arg1;
- (void)updateSex:(long long)arg1;
- (void)updateWasWatchWornPast24Hours:(bool)arg1;
- (void)updateWeeksSinceElectrocardiogramOnboarded:(id)arg1;
- (void)updateWithElectrocardiogramClassifications:(id)arg1 isWithin24HoursPostIRN:(bool)arg2;

@end
