
@interface _UIClickPresentation : NSObject {
    <_UIClickPresentationTransition> * _appearanceTransition;
    UIView * _customContainerView;
    UIView * _customViewForTouchContinuation;
    <_UIClickPresentationTransition> * _disappearanceTransition;
    UIPresentationController * _presentationController;
    UIViewController * _viewController;
}

@property (nonatomic, retain) <_UIClickPresentationTransition> *appearanceTransition;
@property (nonatomic, retain) UIView *customContainerView;
@property (nonatomic, retain) UIView *customViewForTouchContinuation;
@property (nonatomic, retain) <_UIClickPresentationTransition> *disappearanceTransition;
@property (nonatomic, readonly) UIPresentationController *presentationController;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)_presentsSelf;
- (id)appearanceTransition;
- (id)customContainerView;
- (id)customViewForTouchContinuation;
- (id)disappearanceTransition;
- (id)initWithPresentedViewController:(id)arg1 presentationController:(id)arg2;
- (id)presentationController;
- (void)setAppearanceTransition:(id)arg1;
- (void)setCustomContainerView:(id)arg1;
- (void)setCustomViewForTouchContinuation:(id)arg1;
- (void)setDisappearanceTransition:(id)arg1;
- (id)viewController;

@end
