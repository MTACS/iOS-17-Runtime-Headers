
@interface AVTUsageTrackingRecordTimedEvent : NSObject {
    NSDate * _currentStartTime;
    bool  _paused;
    <AVTAvatarRecord> * _record;
    double  _totalTime;
}

@property (nonatomic, retain) NSDate *currentStartTime;
@property (nonatomic) bool paused;
@property (nonatomic, readonly) <AVTAvatarRecord> *record;
@property (nonatomic) double totalTime;

- (void).cxx_destruct;
- (id)currentStartTime;
- (id)initWithStartTime:(id)arg1 record:(id)arg2;
- (void)pauseAtTime:(id)arg1;
- (bool)paused;
- (id)record;
- (void)resumeAtTime:(id)arg1;
- (void)setCurrentStartTime:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTotalTime:(double)arg1;
- (double)totalElapsedTimeAtTime:(id)arg1;
- (double)totalTime;

@end
