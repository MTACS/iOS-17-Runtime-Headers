
@interface PTPersonReactionSlot : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _activeGestureLastSeenTime;
    unsigned int  _activeGestureType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _latestGestureFirstSeenTime;
    unsigned int  _latestGestureType;
    float  _milliSecondsToStart;
    float  _milliSecondsToStop;
    PTEffectReaction * _reaction;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } activeGestureLastSeenTime;
@property unsigned int activeGestureType;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } latestGestureFirstSeenTime;
@property unsigned int latestGestureType;
@property float milliSecondsToStart;
@property float milliSecondsToStop;
@property (retain) PTEffectReaction *reaction;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeGestureLastSeenTime;
- (unsigned int)activeGestureType;
- (id)initWithStartTime:(float)arg1 stopTime:(float)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })latestGestureFirstSeenTime;
- (unsigned int)latestGestureType;
- (float)milliSecondsToStart;
- (float)milliSecondsToStop;
- (id)reaction;
- (void)setActiveGestureLastSeenTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveGestureType:(unsigned int)arg1;
- (void)setLatestGestureFirstSeenTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLatestGestureType:(unsigned int)arg1;
- (void)setMilliSecondsToStart:(float)arg1;
- (void)setMilliSecondsToStop:(float)arg1;
- (void)setReaction:(id)arg1;

@end
