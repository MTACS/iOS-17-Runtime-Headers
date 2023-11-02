
@protocol _UIImageViewSymbolAnimationPresetClient <NSObject>

@required

- (void)animationPresetManager:(void *)arg1 didActivateEffect:(void *)arg2 options:(void *)arg3 animated:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: _UIImageViewSymbolAnimationPresetManager *, NSSymbolEffect *, NSSymbolEffectOptions *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISymbolEffectCompletionContext *, void*
- (void)animationPresetManager:(_UIImageViewSymbolAnimationPresetManager *)arg1 didDiscardPendingContentTransition:(_UIImageViewPendingSymbolContentTransition *)arg2;
- (void)animationPresetManager:(void *)arg1 didRemoveEffect:(void *)arg2 options:(void *)arg3 animated:(void *)arg4 completion:(void *)arg5 wasActive:(void *)arg6; // needs 6 arg types, found 11: _UIImageViewSymbolAnimationPresetManager *, NSSymbolEffect *, NSSymbolEffectOptions *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISymbolEffectCompletionContext *, void*, bool
- (void)animationPresetManager:(void *)arg1 didSetHiddenness:(void *)arg2 usingEffect:(void *)arg3 options:(void *)arg4 animated:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: _UIImageViewSymbolAnimationPresetManager *, bool, NSSymbolEffect *, NSSymbolEffectOptions *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISymbolEffectCompletionContext *, void*
- (void)animationPresetManager:(void *)arg1 didSetScale:(void *)arg2 usingEffect:(void *)arg3 options:(void *)arg4 animated:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: _UIImageViewSymbolAnimationPresetManager *, int, NSSymbolEffect *, NSSymbolEffectOptions *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISymbolEffectCompletionContext *, void*

@end
