
@interface ATXNotificationsAggregateLogger : NSObject {
    PETScalarEventTracker * _rttFromTracker;
    PETScalarEventTracker * _rttSelectionTracker;
}

+ (id)rtFromMapping;
+ (id)rtOutcomesMapping;
+ (id)sharedInstance;
+ (id)stringForRTFrom:(unsigned long long)arg1;
+ (id)stringForRTOutcome:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)logRealTimeTuningCountFrom:(unsigned long long)arg1;
- (void)logRealTimeTuningOutcome:(unsigned long long)arg1;

@end
