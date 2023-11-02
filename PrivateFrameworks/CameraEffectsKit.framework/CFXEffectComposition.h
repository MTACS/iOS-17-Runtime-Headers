
@interface CFXEffectComposition : NSObject {
    NSMutableArray * _animojis;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    NSMutableArray * _filters;
    NSMutableArray * _overlays;
}

@property (nonatomic, retain) NSMutableArray *animojis;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *effects;
@property (nonatomic, retain) NSMutableArray *filters;
@property (nonatomic, readonly) bool hasFaceTrackedOverlays;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) NSArray *jtEffects;
@property (nonatomic, retain) NSMutableArray *overlays;
@property (nonatomic, readonly) bool requiresFaceTracking;

- (void).cxx_destruct;
- (id)CFX_effectsForJettyType:(int)arg1;
- (void)addEffect:(id)arg1 completion:(id /* block */)arg2;
- (id)animojis;
- (id)concurrentQueue;
- (unsigned long long)count;
- (id)effects;
- (id)filters;
- (bool)hasEffectOfType:(id)arg1;
- (bool)hasFaceTrackedOverlays;
- (unsigned long long)indexOfEffect:(id)arg1;
- (id)init;
- (void)insertEffectAtIndex:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEmpty;
- (id)jtEffects;
- (id)jtEffectsForType:(int)arg1;
- (id)overlays;
- (void)removeAllEffects:(id /* block */)arg1;
- (void)removeAllEffectsOfType:(id)arg1 completion:(id /* block */)arg2;
- (void)removeAllOverlayEffects:(id /* block */)arg1;
- (void)removeEffect:(id)arg1 completion:(id /* block */)arg2;
- (bool)requiresFaceTracking;
- (void)setAnimojis:(id)arg1;
- (void)setConcurrentQueue:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setOverlays:(id)arg1;

@end
