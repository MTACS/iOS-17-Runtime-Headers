
@interface _UIFallbackPresentationViewController : UIApplicationRotationFollowingController {
    bool  _hasDismissCompletionHandler;
    bool  _hasPreservedKeyboardInputViews;
    id /* block */  _presentationPreparationBlock;
    _UIFallbackPresentationWindow * _presentationWindow;
    UIWindow * _rotationDecider;
}

@property (nonatomic) bool hasDismissCompletionHandler;
@property (nonatomic) bool hasPreservedKeyboardInputViews;
@property (nonatomic, copy) id /* block */ presentationPreparationBlock;
@property (nonatomic, retain) UIWindow *rotationDecider;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(id /* block */)arg3;
- (void)_preparePresentationControllerForPresenting:(id)arg1;
- (void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(bool)arg3;
- (void)_preserveInputViewsAnimated:(bool)arg1;
- (void)_restoreInputViewsAnimated:(bool)arg1;
- (bool)hasDismissCompletionHandler;
- (bool)hasPreservedKeyboardInputViews;
- (id /* block */)presentationPreparationBlock;
- (id)rotationDecider;
- (void)setHasDismissCompletionHandler:(bool)arg1;
- (void)setHasPreservedKeyboardInputViews:(bool)arg1;
- (void)setPresentationPreparationBlock:(id /* block */)arg1;
- (void)setRotationDecider:(id)arg1;
- (void)viewDidLoad;

@end
