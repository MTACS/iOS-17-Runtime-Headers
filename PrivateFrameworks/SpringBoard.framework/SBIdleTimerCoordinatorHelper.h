
@interface SBIdleTimerCoordinatorHelper : NSObject {
    NSMapTable * _idleTimerCache;
    <SBIdleTimerProviding> * _sourceProvider;
    <SBIdleTimerCoordinating> * _targetCoordinator;
}

@property (nonatomic, readonly) NSMapTable *idleTimerCache;
@property (nonatomic) <SBIdleTimerProviding> *sourceProvider;
@property (nonatomic) <SBIdleTimerCoordinating> *targetCoordinator;

- (void).cxx_destruct;
- (id)_updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3;
- (id)_updateProviderInfo:(id)arg1 behavior:(id)arg2 reason:(id)arg3;
- (void)bindProvider:(id)arg1 toSourceTimer:(id)arg2 behavior:(id)arg3 forReason:(id)arg4;
- (bool)hasProvider:(id)arg1;
- (id)idleTimerCache;
- (id)idleTimerProxyForProvider:(id)arg1;
- (id)init;
- (id)initWithSourceProvider:(id)arg1;
- (id)proposeIdleTimerBehavior:(id)arg1 fromProvider:(id)arg2 reason:(id)arg3;
- (id)proposeProvider:(id)arg1 byCoordinator:(id)arg2 reason:(id)arg3;
- (void)removeProvider:(id)arg1;
- (void)setSourceProvider:(id)arg1;
- (void)setTargetCoordinator:(id)arg1;
- (id)sourceProvider;
- (id)targetCoordinator;
- (id)updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3;

@end
