
@interface SBHPeopleWidgetPersonDetailInteraction : NSObject <PPLPeopleEntityViewControllerDelegate, SBHModalInteraction, SBHPeopleWidgetPersonDetailAnimationContext, SBHViewControllerTransitionDelegate, SBIconViewObserver> {
    UIView * _backgroundTintView;
    MTMaterialView * _backgroundView;
    SBHPeopleWidgetPersonDetailInteractionContext * _interactionContext;
    PPLPeopleEntityViewController * _personViewController;
    UIView * _platterView;
    SBHPeopleWidgetPersonDetailInteractionSettings * _settings;
    double  _sourceContentCornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceContentFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetContentFrame;
    UIView * _targetView;
    UIView * _touchBlockingView;
    SBHViewControllerTransition * _transition;
    <SBHModalInteractionDelegate> * modalInteractionDelegate;
}

@property (nonatomic, retain) UIView *backgroundTintView;
@property (nonatomic, retain) MTMaterialView *backgroundView;
@property (nonatomic, readonly) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } homeScreenContentFrame;
@property (nonatomic, readonly) UIView *homeScreenContentView;
@property (nonatomic, readonly, copy) SBHPeopleWidgetPersonDetailInteractionContext *interactionContext;
@property (nonatomic) <SBHModalInteractionDelegate> *modalInteractionDelegate;
@property (nonatomic, retain) PPLPeopleEntityViewController *personViewController;
@property (nonatomic, retain) UIView *platterView;
@property (nonatomic, readonly) SBIconView *referenceView;
@property (nonatomic, readonly) SBHPeopleWidgetPersonDetailInteractionSettings *settings;
@property (nonatomic) double sourceContentCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceContentFrame;
@property (nonatomic, readonly) SBIconView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double targetContentCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetContentFrame;
@property (nonatomic, retain) UIView *targetView;
@property (nonatomic, retain) UIView *touchBlockingView;
@property (nonatomic, retain) SBHViewControllerTransition *transition;

- (void).cxx_destruct;
- (void)_handleTapToDismiss:(id)arg1;
- (void)_setUpMatchMoveAnimationForBackgroundView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetContentFrame;
- (id)animatorForTransition:(id)arg1;
- (id)backgroundTintView;
- (id)backgroundView;
- (void)beginInteractionAnimated:(bool)arg1;
- (id)containerView;
- (void)endInteractionAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })homeScreenContentFrame;
- (id)homeScreenContentView;
- (void)iconViewDidBecomeWindowless:(id)arg1;
- (void)iconViewWasDiscarded:(id)arg1;
- (void)iconViewWasRecycled:(id)arg1;
- (id)initWithInteractionContext:(id)arg1;
- (id)interactionContext;
- (id)modalInteractionDelegate;
- (void)peopleEntityViewControllerDidRequestDismissal:(id)arg1;
- (id)personViewController;
- (id)platterView;
- (void)prepareTransition:(id)arg1;
- (id)referenceView;
- (void)setBackgroundTintView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setModalInteractionDelegate:(id)arg1;
- (void)setPersonViewController:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setSourceContentCornerRadius:(double)arg1;
- (void)setSourceContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetView:(id)arg1;
- (void)setTouchBlockingView:(id)arg1;
- (void)setTransition:(id)arg1;
- (id)settings;
- (double)sourceContentCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentFrame;
- (id)sourceView;
- (double)targetContentCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetContentFrame;
- (id)targetView;
- (id)touchBlockingView;
- (id)transition;
- (void)transitionDidProgressToEndState:(id)arg1;
- (void)transitionDidReturnToBeginningState:(id)arg1;
- (void)transitionWillProgressToEndState:(id)arg1;
- (void)transitionWillReturnToBeginningState:(id)arg1;

@end
