
@interface HKMCMutableDaySummary : HKMCDaySummary

@property (nonatomic, copy) HKQuantity *basalBodyTemperature;
@property (nonatomic) long long cervicalMucusQuality;
@property (nonatomic) bool intermenstrualBleeding;
@property (nonatomic) long long menstrualFlow;
@property (nonatomic) long long ovulationTestResult;
@property (nonatomic) long long pregnancyTestResult;
@property (nonatomic) long long progesteroneTestResult;
@property (nonatomic) long long sexualActivity;
@property (nonatomic, copy) NSNumber *startOfCycleFromCycleTracking;
@property (nonatomic) unsigned long long symptoms;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
