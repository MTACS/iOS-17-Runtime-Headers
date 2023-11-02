
@interface ARCoachingAnimTime : NSObject {
    double  _absoluteTime;
    double  _delta;
    double  _deltaPercentage;
    double  _duration;
    double  _oscillatingTime;
    double  _startTime;
}

@property (nonatomic) double absoluteTime;
@property (nonatomic, readonly) double delta;
@property (nonatomic, readonly) double deltaPercentage;
@property (nonatomic) double duration;
@property (nonatomic, readonly) double oscillatingTime;
@property (nonatomic) double startTime;

- (double)absoluteTime;
- (double)delta;
- (double)deltaPercentage;
- (double)duration;
- (id)init;
- (double)oscillatingTime;
- (void)setAbsoluteTime:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
