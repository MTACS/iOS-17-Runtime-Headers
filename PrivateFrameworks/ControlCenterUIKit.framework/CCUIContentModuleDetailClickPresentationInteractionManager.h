
@interface CCUIContentModuleDetailClickPresentationInteractionManager : NSObject <_UIClickPresentationInteractionDelegate> {
    bool  _authenticated;
    _UIClickPresentationInteraction * _clickPresentationInteraction;
    <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> * _delegate;
    struct { 
        unsigned int delegateProvidesPresentedViewController : 1; 
        unsigned int delegateImplementsInteractionShouldBegin : 1; 
        unsigned int delegateRequiresAuthentication : 1; 
        unsigned int delegateImplementsInteractionEnded : 1; 
    }  _delegateFlags;
    CCUIContentModuleDetailTransitioningDelegate * _detailTransitioningDelegate;
    UIPresentationController * _presentationController;
    UIViewController * _presentingViewController;
    UIView * _viewForInteraction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *viewForInteraction;

- (void).cxx_destruct;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(bool)arg2;
- (bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (id)delegate;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;
- (id)presentingViewController;
- (void)setDelegate:(id)arg1;
- (void)setViewForInteraction:(id)arg1;
- (id)viewForInteraction;

@end
