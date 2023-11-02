
@interface _OSBatteryDrainPredictor : NSObject {
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSObject<OS_os_log> *log;

+ (id)behaviorDescription:(long long)arg1;
+ (id)predictor;

- (void).cxx_destruct;
- (long long)drainForEventsFromStream:(id)arg1 matchingQuery:(id)arg2;
- (id)drainPerDayFromDate:(id)arg1 forNumberOfDays:(int)arg2;
- (long long)historicalClassification;
- (id)init;
- (id)log;
- (void)logCompletion:(id)arg1;
- (void)setLog:(id)arg1;

@end
