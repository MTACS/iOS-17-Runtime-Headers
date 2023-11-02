
@interface PXStoryAnimation : PXObservable <PXStoryMutableAnimation> {
    bool  _canBePaused;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _elapsedTime;
    NSString * _identifier;
    bool  _isPaused;
    bool  _isStopped;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastElapsedTime;
    double  _pauseDeceleration;
    double  _pausedVelocity;
    double  _resumeAcceleration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    PXUpdater * _updater;
    double  _velocity;
}

@property (nonatomic, readonly) bool canBePaused;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } elapsedTime;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) bool isPaused;
@property (nonatomic) bool isStopped;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } lastElapsedTime;
@property (nonatomic) double pauseDeceleration;
@property (nonatomic) double pausedVelocity;
@property (nonatomic) double resumeAcceleration;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic) double velocity;

- (void).cxx_destruct;
- (void)_invalidateTime;
- (void)_setNeedsUpdate;
- (void)_updateTime;
- (bool)canBePaused;
- (id)description;
- (id)diagnosticDescription;
- (void)didPerformChanges;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })elapsedTime;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isPaused;
- (bool)isStopped;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastElapsedTime;
- (double)pauseDeceleration;
- (double)pausedVelocity;
- (void)performChanges:(id /* block */)arg1;
- (double)resumeAcceleration;
- (void)setElapsedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIsPaused:(bool)arg1;
- (void)setIsStopped:(bool)arg1;
- (void)setLastElapsedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPauseDeceleration:(double)arg1;
- (void)setPausedVelocity:(double)arg1;
- (void)setResumeAcceleration:(double)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVelocity:(double)arg1;
- (id)shortDescription;
- (void)stop;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (void)timeDidChange;
- (id)updater;
- (double)velocity;
- (void)wasStopped;

@end
