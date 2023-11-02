
@interface PowerUIBatteryMitigationManager : NSObject {
    unsigned long long  _decisionSignalID;
    NSString * _defaultsDomain;
    NSDate * _lastAttemptedFullChargeDate;
    NSDate * _lastDOD0Update;
    NSNumber * _lastDOD0ValueAtQualQmax;
    NSArray * _lastDOD0Values;
    NSDate * _lastFullChargeDate;
    NSArray * _lastQMaxArray;
    NSDate * _lastQMaxUpdate;
    NSDate * _lastQualifiedQmaxDate;
    NSObject<OS_os_log> * _log;
    unsigned long long  _testDaysSinceQmaxUpdate;
    unsigned long long  _testHoursSinceDOD0Update;
    double  _timeSinceLastDOD0Update;
    double  _timeSinceLastQmaxUpdate;
}

@property unsigned long long decisionSignalID;
@property (nonatomic, retain) NSString *defaultsDomain;
@property (nonatomic, retain) NSDate *lastAttemptedFullChargeDate;
@property (retain) NSDate *lastDOD0Update;
@property (nonatomic, retain) NSNumber *lastDOD0ValueAtQualQmax;
@property (nonatomic, retain) NSArray *lastDOD0Values;
@property (nonatomic, retain) NSDate *lastFullChargeDate;
@property (nonatomic, retain) NSArray *lastQMaxArray;
@property (retain) NSDate *lastQMaxUpdate;
@property (nonatomic, retain) NSDate *lastQualifiedQmaxDate;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long testDaysSinceQmaxUpdate;
@property (nonatomic) unsigned long long testHoursSinceDOD0Update;
@property (nonatomic) double timeSinceLastDOD0Update;
@property (nonatomic) double timeSinceLastQmaxUpdate;

+ (id)managerWithDefaultsDomain:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (double)additionalWaitTime;
- (double)additionalWaitTimeForDOD0WithInterval:(double)arg1;
- (double)additionalWaitTimeForQMaxWithInterval:(double)arg1;
- (double)additionalWaitTimeWithProperties:(id)arg1;
- (unsigned long long)decisionSignalID;
- (id)defaultsDomain;
- (id)dod0ArrayFromBatteryProperties:(id)arg1;
- (id)initWithDefaultsDomain:(id)arg1;
- (id)lastAttemptedFullChargeDate;
- (id)lastDOD0Update;
- (id)lastDOD0ValueAtQualQmax;
- (id)lastDOD0Values;
- (id)lastFullChargeDate;
- (id)lastQMaxArray;
- (id)lastQMaxUpdate;
- (id)lastQualifiedQmaxDate;
- (id)log;
- (double)maxAdditionalWaitTimeForQMax;
- (void)periodicQMaxCheck;
- (id)qMaxFromBatteryProperties:(id)arg1;
- (id)readLastDOD0Update;
- (id)readLastDOD0Values;
- (id)readLastQMaxArray;
- (id)readLastQMaxUpdate;
- (void)requestPeriodicQMaxCheckInMinutes:(int)arg1 waking:(bool)arg2;
- (void)setDecisionSignalID:(unsigned long long)arg1;
- (void)setDefaultsDomain:(id)arg1;
- (void)setLastAttemptedFullChargeDate:(id)arg1;
- (void)setLastDOD0Update:(id)arg1;
- (void)setLastDOD0ValueAtQualQmax:(id)arg1;
- (void)setLastDOD0Values:(id)arg1;
- (void)setLastFullChargeDate:(id)arg1;
- (void)setLastQMaxArray:(id)arg1;
- (void)setLastQMaxUpdate:(id)arg1;
- (void)setLastQualifiedQmaxDate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setTestDaysSinceQmaxUpdate:(unsigned long long)arg1;
- (void)setTestHoursSinceDOD0Update:(unsigned long long)arg1;
- (void)setTimeSinceLastDOD0Update:(double)arg1;
- (void)setTimeSinceLastQmaxUpdate:(double)arg1;
- (unsigned long long)testDaysSinceQmaxUpdate;
- (unsigned long long)testHoursSinceDOD0Update;
- (double)timeSinceLastDOD0Update;
- (double)timeSinceLastQmaxUpdate;
- (void)updateLastDOD0Values:(id)arg1 atDate:(id)arg2;
- (void)updateLastQMaxArray:(id)arg1 atDate:(id)arg2;

@end
