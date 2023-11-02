
@interface _SBUISystemApertureElementSourceAnimationContext : NSObject {
    bool  _canSkipRemoteSceneResizeActions;
    NSMutableArray * _pendingCoordinatedAnimations;
    NSMutableSet * _sceneResizeActions;
}

@property (nonatomic, readonly) bool canSkipRemoteSceneResizeActions;
@property (nonatomic, readonly) bool hasPendingCoordinatedAnimations;
@property (nonatomic, readonly) bool hasTransientLocalResizeAction;

- (void).cxx_destruct;
- (void)addPendingAnimation:(id /* block */)arg1;
- (void)addSceneResizeAction:(id)arg1;
- (bool)canSkipRemoteSceneResizeActions;
- (void)disableSkippingSceneResizeActions;
- (bool)hasPendingCoordinatedAnimations;
- (bool)hasTransientLocalResizeAction;
- (void)noteIsExpectingRemoteSceneResizeAction;
- (void)performPendingCoordinatedAnimations;
- (void)removeSceneResizeAction:(id)arg1;

@end
