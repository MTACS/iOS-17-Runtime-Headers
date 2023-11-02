
@interface SBLayoutElementViewController : UIViewController <SBAppPlatterDragSourceViewProviding> {
    UIView * _contentContainerView;
    long long  _contentWrapperInterfaceOrientation;
    BSUIOrientationTransformWrapperView * _contentWrapperView;
    FBSDisplayIdentity * _displayIdentity;
    SBSDisplayLayoutElement * _displayLayoutElement;
    <BSInvalidatable> * _displayLayoutElementAssertion;
    bool  _dragging;
    bool  _isTransitioningVisibility;
    bool  _isViewVisible;
    SBLayoutElement * _layoutElement;
    SBLayoutState * _layoutState;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceFrame;
    unsigned long long  _supportedContentInterfaceOrientations;
}

@property (nonatomic, readonly) UIView *_contentContainerView;
@property (nonatomic, readonly) bool _shouldDisplayLayoutElementBecomeActive;
@property (nonatomic) long long contentWrapperInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (getter=isDragging, nonatomic) bool dragging;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBLayoutElement *layoutElement;
@property (nonatomic, readonly) SBLayoutState *layoutState;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceFrame;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedContentInterfaceOrientations;
@property (nonatomic, readonly) bool supportsReuse;

- (void).cxx_destruct;
- (id)_contentContainerView;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;
- (id)_sbWindowScene;
- (bool)_shouldDisplayLayoutElementBecomeActive;
- (void)_updateDisplayLayoutElementVisibility;
- (void)_updateDisplayLayoutElementWithBuilder:(id /* block */)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)containerViewForBlurContentView;
- (long long)contentWrapperInterfaceOrientation;
- (void)dealloc;
- (void)didEndTransitionToVisible:(bool)arg1;
- (id)displayIdentity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayIdentity:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initialCornerRadiusConfiguration;
- (id)initialDiffuseShadowFilters;
- (struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })initialDiffuseShadowParameters;
- (id)initialRimShadowFilters;
- (struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })initialRimShadowParameters;
- (void)invalidate;
- (bool)isDragging;
- (id)layoutElement;
- (id)layoutState;
- (void)loadView;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrame;
- (void)setContentWrapperInterfaceOrientation:(long long)arg1;
- (void)setDragging:(bool)arg1;
- (id)sourceView;
- (unsigned long long)supportedContentInterfaceOrientations;
- (bool)supportsReuse;
- (void)willBeginTransitionToVisible:(bool)arg1;

@end
