
@interface PXStoryConcreteTransition : PXStoryAnimation <PXStoryEffectTransition, PXStorySegmentTransition, PXStoryTransition> {
    PXGEffect * _auxiliaryEffect;
    NSArray * _clipLayouts;
    id /* block */  _completionHandler;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    PXGEffect * _effect;
    id /* block */  _effectAlphaHandler;
    long long  _event;
    bool  _finished;
    double  _initialClipAlpha;
    BOOL  _kind;
}

@property (nonatomic, readonly) PXGEffect *auxiliaryEffect;
@property (nonatomic, readonly, copy) NSArray *clipLayouts;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) PXGEffect *effect;
@property (nonatomic, copy) id /* block */ effectAlphaHandler;
@property (nonatomic, readonly) long long event;
@property (nonatomic) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double initialClipAlpha;
@property (nonatomic, readonly) BOOL kind;
@property (nonatomic, readonly) double progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_end:(bool)arg1;
- (void)_updateClipAlphaForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)auxiliaryEffect;
- (bool)canBePaused;
- (double)clipAlphaForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)clipLayouts;
- (id /* block */)completionHandler;
- (void)configureEffectForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)description;
- (id)diagnosticDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)effect;
- (id /* block */)effectAlphaHandler;
- (long long)event;
- (bool)finished;
- (id)initWithKind:(BOOL)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 effect:(id)arg3;
- (id)initWithKind:(BOOL)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 effect:(id)arg3 auxiliaryEffect:(id)arg4;
- (id)initWithKind:(BOOL)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 event:(long long)arg3;
- (id)initWithKind:(BOOL)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 event:(long long)arg3 clipLayouts:(id)arg4;
- (double)initialClipAlpha;
- (BOOL)kind;
- (double)progress;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEffectAlphaHandler:(id /* block */)arg1;
- (void)setFinished:(bool)arg1;
- (void)setPrimaryEffectAlpha:(double)arg1 auxiliaryEffectAlpha:(double)arg2;
- (void)timeDidChange;
- (void)wasStopped;

@end
