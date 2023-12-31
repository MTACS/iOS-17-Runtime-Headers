
@interface _IMTimingInstance : NSObject {
    bool  _isRunning;
    double  _startTiming;
    double  _stopTiming;
    double  _totalTime;
}

@property (nonatomic) bool isRunning;
@property (nonatomic) double totalTime;

+ (id)createTimingInstanceWithStartTime:(float)arg1;

- (id)description;
- (id)init;
- (bool)isRunning;
- (void)setIsRunning:(bool)arg1;
- (void)setTotalTime:(double)arg1;
- (void)startUsingTime:(double)arg1;
- (void)stopUsingTime:(double)arg1;
- (double)totalTime;

@end
