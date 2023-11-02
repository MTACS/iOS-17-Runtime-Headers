
@interface HKMCOnboardingCompletionInfo : NSObject {
    NSArray * _addedCycleFactors;
    NSArray * _deletedCycleFactors;
    bool  _deviationDetectionEnabled;
    <HKCurrentCountryCode> * _deviationDetectionSupportedCountryCode;
    bool  _fertileWindowProjectionsEnabled;
    bool  _fertilityTrackingDisplayTypesVisible;
    NSNumber * _heartRateInputEnabled;
    <HKCurrentCountryCode> * _heartRateInputSupportedCountryCode;
    bool  _menstruationProjectionsEnabled;
    bool  _sexualActivityDisplayTypeVisible;
    HKQuantity * _userEnteredCycleLength;
    NSNumber * _userEnteredLastPeriodStartDay;
    HKQuantity * _userEnteredPeriodLength;
    NSNumber * _wristTemperatureInputEnabled;
    <HKCurrentCountryCode> * _wristTemperatureInputSupportedCountryCode;
}

@property (nonatomic, readonly, copy) NSArray *addedCycleFactors;
@property (nonatomic, readonly, copy) NSArray *deletedCycleFactors;
@property (nonatomic, readonly) bool deviationDetectionEnabled;
@property (nonatomic, readonly) <HKCurrentCountryCode> *deviationDetectionSupportedCountryCode;
@property (nonatomic, readonly) bool fertileWindowProjectionsEnabled;
@property (nonatomic, readonly) bool fertilityTrackingDisplayTypesVisible;
@property (nonatomic, readonly, copy) NSNumber *heartRateInputEnabled;
@property (nonatomic, readonly) <HKCurrentCountryCode> *heartRateInputSupportedCountryCode;
@property (nonatomic, readonly) bool menstruationProjectionsEnabled;
@property (nonatomic, readonly) bool sexualActivityDisplayTypeVisible;
@property (nonatomic, readonly, copy) HKQuantity *userEnteredCycleLength;
@property (nonatomic, readonly, copy) NSNumber *userEnteredLastPeriodStartDay;
@property (nonatomic, readonly, copy) HKQuantity *userEnteredPeriodLength;
@property (nonatomic, readonly, copy) NSNumber *wristTemperatureInputEnabled;
@property (nonatomic, readonly) <HKCurrentCountryCode> *wristTemperatureInputSupportedCountryCode;

- (void).cxx_destruct;
- (id)addedCycleFactors;
- (id)deletedCycleFactors;
- (bool)deviationDetectionEnabled;
- (id)deviationDetectionSupportedCountryCode;
- (bool)fertileWindowProjectionsEnabled;
- (bool)fertilityTrackingDisplayTypesVisible;
- (id)heartRateInputEnabled;
- (id)heartRateInputSupportedCountryCode;
- (id)initWithUserEnteredCycleLength:(id)arg1 userEnteredPeriodLength:(id)arg2 userEnteredLastPeriodStartDay:(id)arg3 addedCycleFactors:(id)arg4 deletedCycleFactors:(id)arg5 menstruationProjectionsEnabled:(bool)arg6 fertileWindowProjectionsEnabled:(bool)arg7 deviationDetectionEnabled:(bool)arg8 fertilityTrackingDisplayTypesVisible:(bool)arg9 sexualActivityDisplayTypeVisible:(bool)arg10 heartRateInputSupportedCountryCode:(id)arg11 deviationDetectionSupportedCountryCode:(id)arg12 wristTemperatureInputSupportedCountryCode:(id)arg13 heartRateInputEnabled:(id)arg14 wristTemperatureInputEnabled:(id)arg15;
- (bool)menstruationProjectionsEnabled;
- (bool)sexualActivityDisplayTypeVisible;
- (id)userEnteredCycleLength;
- (id)userEnteredLastPeriodStartDay;
- (id)userEnteredPeriodLength;
- (id)wristTemperatureInputEnabled;
- (id)wristTemperatureInputSupportedCountryCode;

@end
