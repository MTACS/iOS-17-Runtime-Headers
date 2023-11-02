
@interface FSTaskProgressUpdater : NSObject {
    NSProgress * _childProgress;
    NSProgress * _parentProgress;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (retain) NSProgress *childProgress;
@property (retain) NSProgress *parentProgress;
@property (retain) NSObject<OS_dispatch_source> *timerSource;

+ (id)newWithProgress:(id)arg1;

- (void).cxx_destruct;
- (id)childProgress;
- (void)dealloc;
- (void)endPhase:(id)arg1;
- (id)initWithProgress:(id)arg1;
- (id)parentProgress;
- (void)setChildProgress:(id)arg1;
- (void)setParentProgress:(id)arg1;
- (void)setTimerSource:(id)arg1;
- (id)startPhase:(id)arg1 parentUnitCount:(long long)arg2 phaseTotalCount:(long long)arg3 completedCounter:(const unsigned int*)arg4;
- (id)timerSource;

@end
