
@interface _SBBatteryLogContext : NSObject {
    int  _capacity;
    NSArray * _foregroundApplications;
    bool  _hasChargedPartially;
    double  _standbyTimeInSeconds;
    double  _usageTimeInSeconds;
    int  _voltage;
}

@property (nonatomic) int capacity;
@property (nonatomic, retain) NSArray *foregroundApplications;
@property (nonatomic) bool hasChargedPartially;
@property (nonatomic) double standbyTimeInSeconds;
@property (nonatomic) double usageTimeInSeconds;
@property (nonatomic) int voltage;

- (void).cxx_destruct;
- (int)capacity;
- (id)foregroundApplications;
- (bool)hasChargedPartially;
- (void)setCapacity:(int)arg1;
- (void)setForegroundApplications:(id)arg1;
- (void)setHasChargedPartially:(bool)arg1;
- (void)setStandbyTimeInSeconds:(double)arg1;
- (void)setUsageTimeInSeconds:(double)arg1;
- (void)setVoltage:(int)arg1;
- (double)standbyTimeInSeconds;
- (double)usageTimeInSeconds;
- (int)voltage;

@end
