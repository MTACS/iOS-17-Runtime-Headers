
@interface NCClickInteractionPresenter : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDelegate> {
    MTMaterialView * _backgroundMaterialView;
    _UIClickInteraction * _clickInteraction;
    UIView * _containerView;
    <NCClickInteractionPresenterDelegate> * _delegate;
    NSString * _groupName;
    bool  _hinting;
    long long  _materialRecipe;
    long long  _overrideUserInterfaceStyle;
    UIView * _portalView;
    bool  _presented;
    NCClickInteractionPresentedControl * _presentedControl;
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
    }  _sourceViewVisibleRect;
    NCTouchEaterGestureRecognizer * _touchEater;
}

@property (getter=_backgroundMaterialView, nonatomic, readonly) MTMaterialView *backgroundMaterialView;
@property (getter=_clickInteraction, nonatomic, readonly) _UIClickInteraction *clickInteraction;
@property (getter=_containerView, nonatomic, readonly) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCClickInteractionPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (getter=_isHinting, setter=_setHinting:, nonatomic) bool hinting;
@property (nonatomic, readonly) long long materialRecipe;
@property (nonatomic) long long overrideUserInterfaceStyle;
@property (getter=_portalView, nonatomic, readonly) UIView *portalView;
@property (getter=isPresented, setter=_setPresented:, nonatomic) bool presented;
@property (getter=_presentedControl, nonatomic, readonly) NCClickInteractionPresentedControl *presentedControl;
@property (nonatomic, readonly) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceViewVisibleRect;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (getter=_touchEater, nonatomic, readonly) NCTouchEaterGestureRecognizer *touchEater;

- (void).cxx_destruct;
- (void)_animatePresentation:(bool)arg1 cancelled:(bool)arg2 completion:(id /* block */)arg3;
- (id)_backgroundMaterialView;
- (id)_clickInteraction;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_configureContainerViewIfNecessary;
- (void)_configurePortalViewIfNecessary;
- (void)_configurePresentedControlIfNecessaryWithTitle:(id)arg1;
- (id)_containerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_finalPresentedViewFrame;
- (double)_frictionForTransitionPresentation:(bool)arg1 cancelled:(bool)arg2;
- (void)_handleEatenTouch:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialPresentedViewFrame;
- (bool)_isHinting;
- (void)_performCancel;
- (void)_performPresentation;
- (id)_portalView;
- (id)_presentedControl;
- (void)_setHinting:(bool)arg1;
- (void)_setPresented:(bool)arg1;
- (void)_setUpBackgroundMaterialView;
- (void)_setUpContainerView;
- (void)_setUpPortalView;
- (void)_setUpPresentationIfNecessary;
- (void)_setUpPresentedControl;
- (void)_setUpSubviews;
- (void)_tearDown;
- (double)_tensionForTransitionPresentation:(bool)arg1 cancelled:(bool)arg2;
- (id)_touchEater;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)clickInteractionDidClickUp:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (bool)clickInteractionShouldBegin:(id)arg1;
- (void)contentSizeCategoryDidChange;
- (id)delegate;
- (bool)dismissModalFullScreenIfNeeded;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)groupName;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (id)initWithTitle:(id)arg1 sourceView:(id)arg2 materialRecipe:(long long)arg3;
- (bool)isPresented;
- (long long)materialRecipe;
- (long long)overrideUserInterfaceStyle;
- (void)presentModalFullScreen;
- (void)setDelegate:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setOverrideUserInterfaceStyle:(long long)arg1;
- (void)setSourceViewVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitle:(id)arg1;
- (id)sourceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceViewVisibleRect;
- (id)title;

@end
