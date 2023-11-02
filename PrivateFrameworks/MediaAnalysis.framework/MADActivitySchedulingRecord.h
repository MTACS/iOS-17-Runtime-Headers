
@interface MADActivitySchedulingRecord : NSObject {
    unsigned long long  _activityID;
    double  _duration;
    int  _exitStatus;
    NSDate * _startTime;
}

@property (nonatomic) unsigned long long activityID;
@property (nonatomic) double duration;
@property (nonatomic) int exitStatus;
@property (nonatomic) NSDate *startTime;

- (unsigned long long)activityID;
- (id)description;
- (double)duration;
- (int)exitStatus;
- (void)setActivityID:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setExitStatus:(int)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
