
@interface _UISceneSnapshotBSActionsHandler : NSObject <_UISceneBSActionHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsAsyncSnapshot;
@property (nonatomic, readonly) bool wantsOwnAssertion;

- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (bool)wantsAsyncSnapshot;
- (bool)wantsOwnAssertion;

@end
