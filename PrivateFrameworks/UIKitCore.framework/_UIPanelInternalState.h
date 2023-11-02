
@interface _UIPanelInternalState : NSObject <NSCopying> {
    _UIPanelAnimationState * _animationState;
    long long  _collapsedState;
    UIViewController * _collapsedViewController;
    UISlidingBarConfiguration * _configuration;
    <UIPanelControllerDelegate> * _delegate;
    long long  _externallyAnimatingAffectedSides;
    UISlidingBarStateRequest * _externallyAnimatingStateRequest;
    UISlidingBarStateRequest * _interactiveStateRequest;
    double  _keyboardAdjustment;
    UIViewController * _leadingViewController;
    UIViewController * _mainViewController;
    UIViewController * _preservedDetailController;
    UISlidingBarStateRequest * _stateRequest;
    UIViewController * _supplementaryViewController;
    UIViewController * _trailingViewController;
}

@property (nonatomic, retain) _UIPanelAnimationState *animationState;
@property (nonatomic) long long collapsedState;
@property (nonatomic, retain) UIViewController *collapsedViewController;
@property (nonatomic, copy) UISlidingBarConfiguration *configuration;
@property (nonatomic) <UIPanelControllerDelegate> *delegate;
@property (nonatomic) long long externallyAnimatingAffectedSides;
@property (nonatomic, copy) UISlidingBarStateRequest *externallyAnimatingStateRequest;
@property (nonatomic, copy) UISlidingBarStateRequest *interactiveStateRequest;
@property (nonatomic) double keyboardAdjustment;
@property (nonatomic, retain) UIViewController *leadingViewController;
@property (nonatomic, retain) UIViewController *mainViewController;
@property (nonatomic, retain) UIViewController *preservedDetailController;
@property (nonatomic, copy) UISlidingBarStateRequest *stateRequest;
@property (nonatomic, retain) UIViewController *supplementaryViewController;
@property (nonatomic, retain) UIViewController *trailingViewController;

- (void).cxx_destruct;
- (id)_allowedLeadingWidthsForParentWidth:(double)arg1;
- (id)_allowedSupplementaryWidthsForParentWidth:(double)arg1;
- (id)_allowedTrailingWidthsForParentWidth:(double)arg1;
- (id)_allowedWidthsForViewController:(id)arg1 parentWidth:(double)arg2;
- (double)_defaultWidthForViewController:(id)arg1 parentWidth:(double)arg2;
- (id)_stateForInteractiveRequest:(id)arg1 withAffectedSides:(long long)arg2 inPossibleStates:(id)arg3;
- (id)animationState;
- (long long)collapsedState;
- (id)collapsedViewController;
- (id)computePossibleStatesGivenParentView:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)computePossibleStatesGivenParentView:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 forceOverlay:(bool)arg3;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (long long)externallyAnimatingAffectedSides;
- (id)externallyAnimatingStateRequest;
- (id)interactiveStateRequest;
- (double)keyboardAdjustment;
- (id)leadingViewController;
- (id)mainViewController;
- (id)preservedDetailController;
- (void)setAnimationState:(id)arg1;
- (void)setCollapsedState:(long long)arg1;
- (void)setCollapsedViewController:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternallyAnimatingAffectedSides:(long long)arg1;
- (void)setExternallyAnimatingStateRequest:(id)arg1;
- (void)setInteractiveStateRequest:(id)arg1;
- (void)setKeyboardAdjustment:(double)arg1;
- (void)setLeadingViewController:(id)arg1;
- (void)setMainViewController:(id)arg1;
- (void)setPreservedDetailController:(id)arg1;
- (void)setStateRequest:(id)arg1;
- (void)setSupplementaryViewController:(id)arg1;
- (void)setTrailingViewController:(id)arg1;
- (id)stateRequest;
- (id)supplementaryViewController;
- (id)trailingViewController;

@end
