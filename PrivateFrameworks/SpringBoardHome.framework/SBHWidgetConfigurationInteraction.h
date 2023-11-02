
@interface SBHWidgetConfigurationInteraction : NSObject <SBHIconViewConfigurationInteraction, SBHViewControllerTransitionDelegate, SBHWidgetConfigurationAnimationContext, WFWidgetConfigurationViewControllerDelegate> {
    UIView * _backgroundTintView;
    MTMaterialView * _backgroundView;
    INIntent * _configuration;
    WFWidgetConfigurationOptions * _configurationOptions;
    WFWidgetConfigurationViewController * _configurationViewController;
    <SBLeafIconDataSource> * _configuredDataSource;
    UIView * _containerView;
    UIViewController * _containerViewController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBoundingRect;
    <SBHIconViewConfigurationInteractionDelegate> * _delegate;
    UIView * _homeScreenContentView;
    SBIconView * _referenceView;
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
    SBIconView * _sourceView;
    UITapGestureRecognizer * _tapToPresentGesture;
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
    UIView * _touchBlockingView;
    SBHViewControllerTransition * _transition;
    CHSWidgetDescriptor * _widgetDescriptor;
    SBHWidgetSettings * _widgetSettings;
}

@property (nonatomic, retain) UIView *backgroundTintView;
@property (nonatomic, retain) MTMaterialView *backgroundView;
@property (nonatomic, copy) INIntent *configuration;
@property (nonatomic, readonly) WFWidgetConfigurationOptions *configurationOptions;
@property (nonatomic, retain) WFWidgetConfigurationViewController *configurationViewController;
@property (nonatomic, readonly) <SBLeafIconDataSource> *configuredDataSource;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UIViewController *containerViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBoundingRect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHIconViewConfigurationInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *homeScreenContentView;
@property (nonatomic, retain) SBIconView *referenceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceContentFrame;
@property (nonatomic, retain) SBIconView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapToPresentGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetContentFrame;
@property (nonatomic, readonly) UIView *targetView;
@property (nonatomic, retain) UIView *touchBlockingView;
@property (nonatomic, retain) SBHViewControllerTransition *transition;
@property (nonatomic, readonly, copy) CHSWidgetDescriptor *widgetDescriptor;
@property (nonatomic, readonly) SBHWidgetSettings *widgetSettings;

- (void).cxx_destruct;
- (void)_endConfigurationImmediately:(bool)arg1;
- (void)_handleTapToDismiss:(id)arg1;
- (void)_handleTapToPresent:(id)arg1;
- (void)_setUpMatchMoveAnimationForBackgroundView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetContentFrame;
- (id)animatorForTransition:(id)arg1;
- (id)backgroundTintView;
- (id)backgroundView;
- (void)beginConfiguration;
- (id)configuration;
- (id)configurationOptions;
- (id)configurationViewController;
- (id)configuredDataSource;
- (id)containerView;
- (id)containerViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundingRect;
- (id)delegate;
- (void)endConfiguration;
- (void)endConfigurationImmediately;
- (id)homeScreenContentView;
- (id)initWithWidgetDescriptor:(id)arg1 gridSizeClass:(unsigned long long)arg2 intent:(id)arg3 configuredDataSource:(id)arg4;
- (void)popConfiguration;
- (void)prepareTransition:(id)arg1;
- (id)referenceView;
- (void)setBackgroundTintView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationViewController:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setContainerViewController:(id)arg1;
- (void)setContentBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeScreenContentView:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)setSourceContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setTapToPresentGesture:(id)arg1;
- (void)setTargetContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTouchBlockingView:(id)arg1;
- (void)setTransition:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentFrame;
- (id)sourceView;
- (id)tapToPresentGesture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetContentFrame;
- (id)targetView;
- (id)touchBlockingView;
- (id)transition;
- (void)transitionDidProgressToEndState:(id)arg1;
- (void)transitionDidReturnToBeginningState:(id)arg1;
- (void)transitionWillProgressToEndState:(id)arg1;
- (void)transitionWillReturnToBeginningState:(id)arg1;
- (void)widgetConfigurationViewController:(id)arg1 didFinishWithIntent:(id)arg2;
- (void)widgetConfigurationViewControllerPreferredCardSizeDidChange:(id)arg1;
- (id)widgetDescriptor;
- (id)widgetSettings;

@end
