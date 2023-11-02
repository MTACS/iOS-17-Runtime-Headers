
@interface PXDisplayLink : NSObject <PXDisplayLinkProtocol> {
    CADisplayLink * _displayLink;
    unsigned long long  _frameRateRangeType;
    bool  _isHighFrameRateActive;
    NSString * _runloopModes;
    SEL  _selector;
    id  _target;
    double  _updateCycleTargetTimestamp;
    double  _updateCycleTimestamp;
}

@property (nonatomic, readonly) double currentMediaTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) unsigned long long frameRateRangeType;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) bool isHighFrameRateActive;
@property (nonatomic) bool paused;
@property (nonatomic, readonly) long long preferredFramesPerSecond;
@property (nonatomic, readonly) NSString *runloopModes;
@property (nonatomic, readonly) SEL selector;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) double targetTimestamp;
@property (nonatomic, readonly) double timestamp;

+ (bool)highFramerateRequiresReasonAndRange;

- (void).cxx_destruct;
- (void)_addToRunLoop;
- (void)_tick:(id)arg1;
- (void)_updateIsHighFrameRateActive;
- (double)currentMediaTime;
- (void)dealloc;
- (id)description;
- (double)duration;
- (unsigned long long)frameRateRangeType;
- (unsigned int)highFrameRateReason;
- (id)init;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 deferredStart:(bool)arg3;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 deferredStart:(bool)arg3 runloopModes:(id)arg4 preferredFramesPerSecond:(long long)arg5;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 preferredFramesPerSecond:(long long)arg3;
- (void)invalidate;
- (bool)isHighFrameRateActive;
- (bool)paused;
- (long long)preferredFramesPerSecond;
- (id)runloopModes;
- (SEL)selector;
- (void)setFrameRateRangeType:(unsigned long long)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setIsHighFrameRateActive:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (id)target;
- (double)targetTimestamp;
- (double)timestamp;

@end
