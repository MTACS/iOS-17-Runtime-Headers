
@interface HDRPDailyAnalyticsReport : NSObject {
    NSCalendar * _calendar;
    NSUserDefaults * _controlCenterUserDefaults;
    NSDate * _endTime;
    <HKFeatureAvailabilityProviding> * _featureAvailabilityProvider;
    bool  _healthDataCollectionAllowed;
    HKRPOxygenSaturationSettings * _oxygenSaturationSettings;
    NRPairedDeviceRegistry * _pairedDeviceRegistry;
    HDProfile * _profile;
    NSDate * _startTime;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSUserDefaults *controlCenterUserDefaults;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) <HKFeatureAvailabilityProviding> *featureAvailabilityProvider;
@property (getter=isHealthDataCollectionAllowed, nonatomic, readonly) bool healthDataCollectionAllowed;
@property (nonatomic, readonly) HKRPOxygenSaturationSettings *oxygenSaturationSettings;
@property (nonatomic, readonly) NRPairedDeviceRegistry *pairedDeviceRegistry;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSDate *startTime;

- (void).cxx_destruct;
- (id)_activePairedWatchBuild;
- (id)_dateIntervalForPreviousDays:(unsigned long long)arg1;
- (id)_gatherDiagnosticAndUsageReportFromBackgroundOxygenSaturationSamplesInPreviousDay:(id)arg1 wasWorn:(id)arg2 error:(id*)arg3;
- (id)_gatherImproveHealthAndActivityReportFromBackgroundOxygenSaturationSamplesInPreviousDay:(id)arg1 oxygenSaturationSamplesInPreviousDay:(id)arg2 error:(id*)arg3;
- (bool)_hasCompatiblePairedAppleWatch;
- (id)_numberOfEveningSamplesFromSamples:(id)arg1;
- (id)_numberOfForegroundSamplesFromSamples:(id)arg1;
- (id)_numberOfSamplesByTruncatedOxygenSaturationValueFromSamples:(id)arg1 keyPrefix:(id)arg2;
- (id)_numberOfSamplesWithExerciseMinute5MinutesPriorInPreviousDayAndReturnError:(id*)arg1;
- (id)_numberOfSamplesWithHeartRateGreaterThan100BPMFromSamples:(id)arg1;
- (id)_numberOfSamplesWithHighElevationTakeFromSamples:(id)arg1;
- (id)_numberOfWeeksSinceOnboardedAndReturnError:(id*)arg1;
- (id)_queryForBackgroundOxygenSaturationSamplesInPreviousDayAndReturnError:(id*)arg1;
- (id)_queryForHasWornWatchInPreviousDayAndReturnError:(id*)arg1;
- (id)_queryForOxygenSaturationSamplesInPreviousDayAndReturnError:(id*)arg1;
- (id)calendar;
- (id)controlCenterUserDefaults;
- (id)endTime;
- (id)featureAvailabilityProvider;
- (id)generatePayloadAndReturnError:(id*)arg1;
- (id)initWithDate:(id)arg1 profile:(id)arg2 pairedDeviceRegistry:(id)arg3 featureAvailabilityProvider:(id)arg4 oxygenSaturationSettings:(id)arg5 controlCenterUserDefaults:(id)arg6 healthDataCollectionAllowed:(bool)arg7;
- (bool)isHealthDataCollectionAllowed;
- (id)oxygenSaturationSettings;
- (id)pairedDeviceRegistry;
- (id)profile;
- (id)startTime;

@end
