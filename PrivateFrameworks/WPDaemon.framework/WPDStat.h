
@interface WPDStat : NSObject {
    double  _currentTime;
    NSDate * _lastTime;
}

@property double currentTime;
@property (retain) NSDate *lastTime;

- (void).cxx_destruct;
- (void)calculateTimeUpdate;
- (double)currentTime;
- (id)init;
- (id)lastTime;
- (void)setCurrentTime:(double)arg1;
- (void)setLastTime:(id)arg1;
- (void)startTime;
- (void)stopTime;

@end
