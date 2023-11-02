
@interface ASVDeceleration : NSObject {
    double  _currentTime;
    long long  _frameCount;
    bool  _isDecelerating;
    float  _minEndDelta;
    double  _previousTime;
    double  _startTime;
    float  _velocity;
}

@property (nonatomic) double currentTime;
@property (nonatomic) long long frameCount;
@property (nonatomic) bool isDecelerating;
@property (nonatomic) float minEndDelta;
@property (nonatomic) double previousTime;
@property (nonatomic) double startTime;
@property (nonatomic) float velocity;

- (double)currentTime;
- (float)decelerationDelta;
- (long long)frameCount;
- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2;
- (bool)isDecelerating;
- (float)minEndDelta;
- (double)previousTime;
- (void)setCurrentTime:(double)arg1;
- (void)setFrameCount:(long long)arg1;
- (void)setIsDecelerating:(bool)arg1;
- (void)setMinEndDelta:(float)arg1;
- (void)setPreviousTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setVelocity:(float)arg1;
- (double)startTime;
- (float)velocity;

@end
