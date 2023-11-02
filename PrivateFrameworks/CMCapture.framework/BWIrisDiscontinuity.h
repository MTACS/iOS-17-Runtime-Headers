
@interface BWIrisDiscontinuity : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _discontinuityTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    bool  _generateIFrames;
    bool  _haveSeenNonPositiveDisplacement;
    bool  _minDisplacementIFrameRequested;
    bool  _onlyRetime;
    NSArray * _recipe;
    int  _recipeIdentifier;
    long long  _recipeMaxDisplacement;
    long long  _recipeMinDisplacement;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetFrameDuration;
    NSArray * _timeSkews;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } targetFrameDuration;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (bool)containsVideoBufferTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)dealloc;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 targetFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 onlyRetime:(bool)arg4 generateIFrames:(bool)arg5 timeSkews:(id)arg6;
- (void)resetWithNewTimeSkews:(id)arg1;
- (bool)shouldKeepBufferWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forceKeepingBuffer:(bool)arg2 nextAdjustedTimeInOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 discontinuityFrameAttributesOut:(struct { bool x1; bool x2; long long x3; int x4; }*)arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
