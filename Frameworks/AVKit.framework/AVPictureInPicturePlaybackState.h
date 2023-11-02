
@interface AVPictureInPicturePlaybackState : NSObject <NSCopying> {
    double  _initializationTimestamp;
    double  _initializedElapsedTime;
    bool  _paused;
    double  _timelineDuration;
    double  _timelineRate;
}

@property (nonatomic, readonly) double currentElapsedTime;
@property (nonatomic, readonly) double initializationTimestamp;
@property (nonatomic, readonly) double initializedElapsedTime;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (nonatomic, readonly) double timelineDuration;
@property (nonatomic, readonly) double timelineRate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentElapsedTime;
- (id)initWithElapsedTime:(double)arg1 timelineDuration:(double)arg2 timelineRate:(double)arg3 paused:(bool)arg4;
- (double)initializationTimestamp;
- (double)initializedElapsedTime;
- (bool)isEqual:(id)arg1;
- (bool)isPaused;
- (double)timelineDuration;
- (double)timelineRate;

@end
