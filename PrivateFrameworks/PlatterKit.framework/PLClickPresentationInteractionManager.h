
@interface PLClickPresentationInteractionManager : NSObject <UIGestureRecognizerDelegate, _UIClickPresentationInteractionDelegate> {
    _UIClickPresentation * _clickPresentation;
    _UIClickPresentationInteraction * _clickPresentationInteraction;
    struct { 
        unsigned int delegateImplementsContainerView : 1; 
        unsigned int delegateImplementsTransitioningDelegate : 1; 
        unsigned int delegateImplementsShouldBeginInteraction : 1; 
        unsigned int delegateImplementsShouldFinishInteraction : 1; 
        unsigned int delegateImplementsWillBeginUserInteraction : 1; 
        unsigned int delegateImplementsDidEndUserInteraction : 1; 
        unsigned int delegateImplementsWillDismissPresentedContent : 1; 
        unsigned int delegateImplementsDeclinedDismissingPresentedContent : 1; 
        unsigned int delegateImplementsShouldAllowLongPressGesture : 1; 
        unsigned int delegateShouldFinishInteraction : 1; 
    }  _clickPresentationInteractionManagerDelegateFlags;
    <PLClickPresentationInteractionManagerDelegate> * _delegate;
    bool  _didInteractionInitiateWithHint;
    bool  _didPresent;
    id /* block */  _dismissalCompletion;
    id /* block */  _presentationCompletion;
    UIViewController<PLClickPresentationInteractionPresentable> * _presentedViewController;
    UIViewController<PLClickPresentationInteractionPresenting> * _presentingViewController;
    bool  _willPresent;
}

@property (getter=hasCommittedToPresentation, nonatomic, readonly) bool committedToPresentation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLClickPresentationInteractionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (setter=_setDidInteractionInitiateWithHint:, nonatomic) bool didInteractionInitiateWithHint;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController<PLClickPresentationInteractionPresentable> *presentedViewController;
@property (readonly) Class superclass;
@property (getter=_willPresent, setter=_setWillPresent:, nonatomic) bool willPresent;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_clickInteractionDidEnd;
- (void)_clickPresentationTransitionDidDismiss:(bool)arg1;
- (void)_clickPresentationTransitionDidPresent:(bool)arg1;
- (id)_delegateContainerView;
- (void)_delegateDeclinedDismissingPresentedContentWithTrigger:(long long)arg1;
- (void)_delegateDidEndUserInteraction;
- (id)_delegatePresentedViewController;
- (bool)_delegateShouldAllowLongPressGesture;
- (bool)_delegateShouldBeginInteractionWithTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_delegateShouldFinishInteractionThatReachedForceThreshold:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)_delegateTransitioningDelegate;
- (void)_delegateWillBeginUserInteraction;
- (void)_delegateWillDismissPresentedContentWithTrigger:(long long)arg1;
- (bool)_dismissIfPossibleWithTrigger:(long long)arg1;
- (id)_presentedViewController;
- (void)_setDidInteractionInitiateWithHint:(bool)arg1;
- (void)_setPresentingViewControllerHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_setWillPresent:(bool)arg1;
- (bool)_willPresent;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(bool)arg2;
- (bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (id)delegate;
- (bool)didInteractionInitiateWithHint;
- (bool)dismissIfPossible:(id /* block */)arg1;
- (id)gestureRecognizerForExclusionRelationship;
- (bool)hasCommittedToPresentation;
- (id)initWithPresentingViewController:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;
- (bool)presentIfPossible:(id /* block */)arg1;
- (id)presentedViewController;
- (void)resetForInitialInteraction;
- (void)setDelegate:(id)arg1;

@end
