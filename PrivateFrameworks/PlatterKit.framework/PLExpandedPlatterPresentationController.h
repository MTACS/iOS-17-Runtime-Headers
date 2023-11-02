
@interface PLExpandedPlatterPresentationController : UIPresentationController <PLViewControllerAnimatorObserving> {
    <UIViewControllerTransitionCoordinator> * _activeTransitionCoordinator;
    struct CGPoint { 
        double x; 
        double y; 
    }  _additionalContentTranslation;
    double  _additionalHomeAffordanceSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _childPreferredContentSize;
    bool  _didPlayDismissHaptic;
    _UIStatesFeedbackGenerator * _dismissFeedbackBehavior;
    UILabel * _dismissLabel;
    UIView * _dismissLabelContainerView;
    struct { 
        unsigned int didPerformPresentedExpandedPlatterCheck : 1; 
        unsigned int didSetSourceViewInitialPresentationFrame : 1; 
        unsigned int didSetSourceViewFinalPresentationFrame : 1; 
        unsigned int didSetSourceViewFinalDismissalFrame : 1; 
    }  _expandedPlatterPresentationControllerHelperFlags;
    UINotificationFeedbackGenerator * _homeAffordanceFeedbackGenerator;
    UIPanGestureRecognizer * _homeAffordancePanGesture;
    MTLumaDodgePillView * _homeAffordanceView;
    bool  _homeAffordanceVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    <PLKeyboardHomeAffordanceAssertion> * _keyboardHomeAffordance;
    bool  _listenToKeyboardEvents;
    <PLExpandedPlatterPresentationControllerDelegate> * _presentationControllerDelegate;
    UIView<PLExpandedPlatter> * _presentedExpandedPlatter;
    UIView * _sourceView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewFinalDismissalFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewFinalPresentationFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewInitialPresentationFrame;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _sourceViewInitialTransform;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } additionalContentTranslation;
@property (nonatomic) double additionalHomeAffordanceSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPanGestureRecognizer *homeAffordancePanGesture;
@property (getter=isHomeAffordanceVisible, nonatomic) bool homeAffordanceVisible;
@property (getter=_keyboardFrame, setter=_setKeyboardFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (getter=_keyboardHomeAffordance, setter=_setKeyboardHomeAffordance:, nonatomic, retain) <PLKeyboardHomeAffordanceAssertion> *keyboardHomeAffordance;
@property (nonatomic) <PLExpandedPlatterPresentationControllerDelegate> *presentationControllerDelegate;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })_sizeOfExpandedPlatter:(id)arg1 withPreferredContentSize:(struct CGSize { double x1; double x2; })arg2 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (struct CGSize { double x1; double x2; })_sizeOfViewWithPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 inUseableContainerViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })useableContainerViewBoundsForExpandedPlatter:(id)arg1 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (bool)_actuateFeedbackForDismissalIfNecessary;
- (void)_actuateFeedbackForDismissalInvalidationIfNecessary;
- (id)_clickPresentationInteractionManager;
- (void)_configureDismissFeedbackIfNecessary;
- (void)_configureDismissLabelIfNecessary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetWithPresentedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })_contentOffsetForPresentedExpandedPlatterView:(id)arg1;
- (void)_dismissExpandedPlatterWithTrigger:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dismissLabelContainerViewFrameForPresentedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_fireHomeGesture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPresentedViewInContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_handleBackgroundTap:(id)arg1;
- (void)_handleHomeAffordancePan:(id)arg1;
- (bool)_isKeyboardHomeAffordanceVisible;
- (bool)_isLocalHomeAffordanceVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keyboardFrame;
- (id)_keyboardHomeAffordance;
- (void)_popDismissLabel;
- (id)_presentedExpandedPlatter;
- (void)_setHomeAffordanceVisible:(bool)arg1;
- (void)_setKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setKeyboardHomeAffordance:(id)arg1;
- (void)_setKeyboardHomeAffordanceVisible:(bool)arg1;
- (void)_setLocalHomeAffordanceVisible:(bool)arg1;
- (void)_settleHomeAffordance;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldMakePresentedViewControllerFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceViewFinalDismissalFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceViewFinalPresentationFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceViewInitialPresentationFrame;
- (struct CGPoint { double x1; double x2; })additionalContentTranslation;
- (double)additionalHomeAffordanceSpacing;
- (void)completeDismissal;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalDismissalFrameOfPresentingViewInContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalPresentationFrameOfPresentingViewInContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (id)homeAffordancePanGesture;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameOfPresentedViewInContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationFrameOfPresentingViewInContainerView;
- (bool)isHomeAffordanceVisible;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)presentationControllerDelegate;
- (void)presentationTransitionWillBegin;
- (void)setAdditionalContentTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAdditionalHomeAffordanceSpacing:(double)arg1;
- (void)setHomeAffordancePanGesture:(id)arg1;
- (void)setHomeAffordanceVisible:(bool)arg1;
- (void)setPresentationControllerDelegate:(id)arg1;
- (void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
