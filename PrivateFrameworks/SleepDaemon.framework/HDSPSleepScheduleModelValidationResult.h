
@interface HDSPSleepScheduleModelValidationResult : NSObject {
    NSError * _error;
    bool  _success;
    HKSPSleepEventTimelineResults * _timelineResults;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) HKSPSleepEventTimelineResults *timelineResults;

+ (id)emptyFailureWithError:(id)arg1;

- (void).cxx_destruct;
- (id)error;
- (id)initWithSuccess:(bool)arg1 timelineResults:(id)arg2 error:(id)arg3;
- (bool)success;
- (id)timelineResults;

@end
