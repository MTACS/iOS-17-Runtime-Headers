
@interface TADeviceRecordSettings : NSObject <NSSecureCoding> {
    long long  _assumedKeyRollHour;
    double  _expiryTimeInterval;
    double  _hyperHELEStagingInterval;
    double  _hyperStagingInterval;
    double  _keepAliveInterval;
    double  _maxExpectedDurianWildInterval;
    double  _maxExpectedHELEWildInterval;
    double  _minimumHELEStagingInterval;
    double  _minimumStagingInterval;
    double  _purgeTimeInterval;
    double  _scanInterval;
    bool  _shouldAlertHELEImmediatelyForImmediateTypes;
    long long  _stagingBackstopHour;
    long long  _stagingHELEBackstopHour;
    bool  _surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyroll;
    bool  _surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyroll;
    bool  _surfaceImmediatelyBeepOnMove;
}

@property (nonatomic, readonly) long long assumedKeyRollHour;
@property (nonatomic) double expiryTimeInterval;
@property (nonatomic, readonly) double hyperHELEStagingInterval;
@property (nonatomic, readonly) double hyperStagingInterval;
@property (nonatomic, readonly) double keepAliveInterval;
@property (nonatomic, readonly) double maxExpectedDurianWildInterval;
@property (nonatomic, readonly) double maxExpectedHELEWildInterval;
@property (nonatomic, readonly) double minimumHELEStagingInterval;
@property (nonatomic, readonly) double minimumStagingInterval;
@property (nonatomic) double purgeTimeInterval;
@property (nonatomic, readonly) double scanInterval;
@property (nonatomic, readonly) bool shouldAlertHELEImmediatelyForImmediateTypes;
@property (nonatomic, readonly) long long stagingBackstopHour;
@property (nonatomic, readonly) long long stagingHELEBackstopHour;
@property (nonatomic, readonly) bool surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyroll;
@property (nonatomic, readonly) bool surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyroll;
@property (nonatomic, readonly) bool surfaceImmediatelyBeepOnMove;

+ (bool)supportsSecureCoding;

- (long long)assumedKeyRollHour;
- (void)encodeWithCoder:(id)arg1;
- (double)expiryTimeInterval;
- (double)hyperHELEStagingInterval;
- (double)hyperStagingInterval;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpiryTimeInterval:(double)arg1 purgeTimeInterval:(double)arg2 keepAliveInterval:(double)arg3 minimumStagingInterval:(double)arg4 stagingBackstopHour:(unsigned long long)arg5 assumedKeyRollHour:(unsigned long long)arg6 scanInterval:(double)arg7 surfaceImmediatelyBeepOnMove:(bool)arg8 surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyroll:(bool)arg9 maxExpectedHELEWildInterval:(double)arg10 maxExpectedDurianWildInterval:(double)arg11 shouldAlertHELEImmediatelyForImmediateTypes:(bool)arg12 minimumHELEStagingInterval:(double)arg13 stagingHELEBackstopHour:(unsigned long long)arg14 surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyroll:(bool)arg15 hyperHELEStagingInterval:(double)arg16 hyperStagingInterval:(double)arg17;
- (id)initWithExpiryTimeIntervalOrDefault:(id)arg1 purgeTimeIntervalOrDefault:(id)arg2 keepAliveIntervalOrDefault:(id)arg3 minimumStagingIntervalOrDefault:(id)arg4 stagingBackstopHourOrDefault:(id)arg5 assumedKeyRollHourOrDefault:(id)arg6 scanIntervalOrDefault:(id)arg7 surfaceImmediatelyBeepOnMoveOrDefault:(id)arg8 surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyrollOrDefault:(id)arg9 maxExpectedHELEWildIntervalOrDefault:(id)arg10 maxExpectedDurianWildIntervalOrDefault:(id)arg11 shouldAlertHELEImmediatelyForImmediateTypesOrDefault:(id)arg12 minimumHELEStagingIntervalOrDefault:(id)arg13 stagingHELEBackstopHourOrDefault:(id)arg14 surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyrollOrDefault:(id)arg15 hyperHELEStagingIntervalOrDefault:(id)arg16 hyperStagingIntervalOrDefault:(id)arg17;
- (bool)isEqual:(id)arg1;
- (double)keepAliveInterval;
- (double)maxExpectedDurianWildInterval;
- (double)maxExpectedHELEWildInterval;
- (double)minimumHELEStagingInterval;
- (double)minimumStagingInterval;
- (double)purgeTimeInterval;
- (double)scanInterval;
- (void)setExpiryTimeInterval:(double)arg1;
- (void)setPurgeTimeInterval:(double)arg1;
- (bool)shouldAlertHELEImmediatelyForImmediateTypes;
- (long long)stagingBackstopHour;
- (long long)stagingHELEBackstopHour;
- (bool)surfaceAfterHyperStagingIntervalBetweenBackstopAndKeyroll;
- (bool)surfaceHELEAfterHyperStagingIntervalBetweenBackstopAndKeyroll;
- (bool)surfaceImmediatelyBeepOnMove;

@end
