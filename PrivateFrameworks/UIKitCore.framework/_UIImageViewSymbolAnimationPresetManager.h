
@interface _UIImageViewSymbolAnimationPresetManager : NSObject {
    NSSymbolContentTransition * _activeSymbolContentTransition;
    NSMutableArray * _activeSymbolEffects;
    <_UIImageViewSymbolAnimationPresetClient> * _client;
    _UIImageViewPendingSymbolContentTransition * _pendingSymbolContentTransition;
    NSMutableArray * _pendingSymbolEffects;
}

@property (nonatomic) <_UIImageViewSymbolAnimationPresetClient> *client;

+ (id)managerForClient:(id)arg1;

- (void).cxx_destruct;
- (void)_activateActiveSymbolEffectEntry:(id)arg1;
- (void)_removeSymbolEffectsOfType:(id)arg1 options:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4 forAddingNewEffect:(bool)arg5;
- (bool)_symbolEffect:(id)arg1 collidesWithSymbolEffect:(id)arg2 forAddingEffect:(bool)arg3;
- (void)activatePendingSymbolContentTransition:(id)arg1;
- (void)activatePendingSymbolEffects;
- (void)activeSymbolContentTransitionDidComplete:(id)arg1;
- (void)activeSymbolEffectDidComplete:(id)arg1;
- (void)addActiveSymbolEffect:(id)arg1 options:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)addPendingSymbolContentTransition:(id)arg1 fromSymbolImage:(id)arg2 toSymbolImage:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)addPendingSymbolEffect:(id)arg1 options:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)client;
- (void)discardPendingSymbolContentTransitions;
- (bool)hasPendingAnimationsForImage:(id)arg1;
- (id)init;
- (id)pendingSymbolContentTransitionForSettingSymbolImage:(id)arg1;
- (void)removeAllSymbolEffectsWithOptions:(id)arg1 animated:(bool)arg2;
- (void)removeSymbolEffectsOfType:(id)arg1 options:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setClient:(id)arg1;

@end
