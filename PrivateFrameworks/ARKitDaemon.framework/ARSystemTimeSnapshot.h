
@interface ARSystemTimeSnapshot : NSObject {
    double  _upTime;
    double  _upTimeIncludingSleep;
    double  _upTimeIncludingSleepAndDriftCorrection;
}

@property (nonatomic, readonly) double upTime;
@property (nonatomic, readonly) double upTimeIncludingSleep;
@property (nonatomic, readonly) double upTimeIncludingSleepAndDriftCorrection;

+ (id)timeSinceSnapshot:(id)arg1;

- (id)description;
- (id)init;
- (id)initWithUpTime:(double)arg1 upTimeIncludingSleep:(double)arg2 upTimeIncludingSleepAndDriftCorrection:(double)arg3;
- (id)timeSinceSnapshot:(id)arg1;
- (double)upTime;
- (double)upTimeIncludingSleep;
- (double)upTimeIncludingSleepAndDriftCorrection;

@end
