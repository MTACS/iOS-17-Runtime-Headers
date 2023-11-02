
@interface MPMusicPlayerControllerNowPlayingTimeSnapshot : NSObject <NSSecureCoding> {
    double  _duration;
    double  _elapsedTime;
    bool  _live;
    float  _rate;
    long long  _state;
    double  _timestamp;
}

@property (nonatomic, readonly) double currentTime;
@property (getter=isLive, nonatomic, readonly) bool live;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) long long state;

+ (id)liveSnapshotWithRate:(float)arg1 state:(long long)arg2;
+ (id)snapshotWithElapsedTime:(double)arg1 duration:(double)arg2 rate:(float)arg3 atTimestamp:(double)arg4 state:(long long)arg5;
+ (bool)supportsSecureCoding;

- (id)_init;
- (double)currentTime;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLive;
- (float)rate;
- (long long)state;

@end
