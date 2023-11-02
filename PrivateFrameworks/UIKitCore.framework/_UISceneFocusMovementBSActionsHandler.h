
@interface _UISceneFocusMovementBSActionsHandler : NSObject <_UISceneBSActionHandler> {
    NSMutableDictionary * _pendingFocusMovementActions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_focusSystemSceneComponentDidPerformInitialSetupNotification:(id)arg1;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (id)init;

@end
