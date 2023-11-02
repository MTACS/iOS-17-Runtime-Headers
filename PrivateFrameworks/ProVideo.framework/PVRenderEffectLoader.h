
@interface PVRenderEffectLoader : NSObject {
    bool  _flushesOnEffectStackChanges;
    void * _loadedEffects;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _lock;
    float  _unusedEffectTimeout;
}

@property (nonatomic) float unusedEffectTimeout;

- (void)_loadEffects_noLock:(id)arg1;
- (void)_removeTimedOutEffects_noLock;
- (void)_removeUnusedEffects_noLock:(id)arg1;
- (void)ageOutEffects;
- (void)dealloc;
- (id)init;
- (void)loadEffectsForGraphs:(id)arg1 loadContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (void)setUnusedEffectTimeout:(float)arg1;
- (void)unloadEffects;
- (float)unusedEffectTimeout;

@end
