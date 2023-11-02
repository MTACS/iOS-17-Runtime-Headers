
@interface WidgetRenderer.WidgetSceneConnection : NSObject <_UISceneSettingsDiffAction> {
    void _contentTransparencyDidChangeSubscriber;
    void _descriptorDidChangeSubscription;
    void _invalidated;
    void _needsVCRebuild;
    void contentViewController;
    void debugOverlayViewController;
    void delegate;
    void hasBeenActive;
    void logIdentifier;
    void rootViewController;
    void scene;
    void sceneSettingsDiffInspector;
    void transaction;
    void window;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)dealloc;
- (id)description;
- (id)init;

@end
