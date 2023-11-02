
@interface _UIScreenFocusSystemManager : NSObject <_UIFocusMovementPerformerDelegate, _UIFocusSystemDelegate> {
    bool  _allowsForwardingFocusMovementActions;
    bool  _hasCarPlayFocusMovementBSActionsHandler;
    _UIFocusScrollManager * _scrollManager;
    UIWindowScene * _windowScene;
}

@property (getter=_uiktest_allowsForwardingFocusMovementActions, setter=_uiktest_setAllowsForwardingFocusMovementActions:, nonatomic) bool allowsForwardingFocusMovementActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIFocusScrollManager *scrollManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (id)_focusItemContainerForFocusSystem:(id)arg1;
- (id)_focusMapContainerForFocusSystem:(id)arg1;
- (void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2;
- (bool)_focusSystem:(id)arg1 performFocusMovementWithInfo:(id)arg2;
- (bool)_focusSystem:(id)arg1 shouldRestoreFocusInContext:(id)arg2;
- (bool)_handleFailedFocusMovementRequest:(id)arg1 withPerformer:(id)arg2;
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1;
- (bool)_shouldForwardFocusMovementRequest:(id)arg1;
- (bool)_shouldWaitForFocusMovementActionToEnableFocusSystem:(id)arg1;
- (bool)_uiktest_allowsForwardingFocusMovementActions;
- (void)_uiktest_setAllowsForwardingFocusMovementActions:(bool)arg1;
- (id)initWithScene:(id)arg1 scrollManager:(id)arg2;
- (id)scrollManager;
- (id)windowScene;

@end
