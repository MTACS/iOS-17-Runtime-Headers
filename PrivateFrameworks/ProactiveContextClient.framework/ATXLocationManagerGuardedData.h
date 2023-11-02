
@interface ATXLocationManagerGuardedData : NSObject {
    CLLocation * currentLocation;
    unsigned long long  currentRoutineMode;
    NSDate * lastLOIUpdateTimestamp;
    NSDate * lastPredictedExitTimesUpdateTimestamp;
    NSDate * lastPredictedLOIsUpdateTimestamp;
    NSDate * lastRequestLocationDate;
    NSDate * lastRoutineModeTimestamp;
    ATXLocationManagerState * state;
}

- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
