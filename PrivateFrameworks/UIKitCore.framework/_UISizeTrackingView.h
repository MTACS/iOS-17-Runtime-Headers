
@interface _UISizeTrackingView : UIView <_UIRemoteViewFocusProxy, _UIScrollToTopView, _UIViewBoundingPathChangeObserver> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _formerTextEffectsContentFrame;
    long long  _interfaceOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
    bool  _observingTextEffectsWindowRotation;
    _UIRemoteViewController * _remoteViewController;
    struct { 
        unsigned int hasIntrinsicContentSize : 1; 
        unsigned int observingBoundingPathChanges : 1; 
        unsigned int needsRemoteViewServiceBoundingPathUpdate : 1; 
        unsigned int remoteViewServiceBoundingPathUpdateScheduled : 1; 
    }  _sizeTrackingViewFlags;
    id  _textEffectsOperatorProxy;
    id  _viewControllerOperatorProxy;
    UIView * _viewForRemoteTextEffectsWindowMatchAnimation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

+ (bool)_supportsInvalidatingFocusCache;
+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;

- (void).cxx_destruct;
- (id)_boundingPathForRemoteViewService;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForRemoteViewService;
- (bool)_canSendViewServiceActualBoundingPath;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)_clearNeedsRemoteViewServiceBoundingPathUpdate;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_fencingEffectsAreVisible;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (long long)_interfaceOrientationForScene:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_needsTextEffectsUpdateToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prepareForWindowDealloc;
- (void)_prepareForWindowHostingSceneRemoval;
- (double)_remoteViewServiceGeometryValueFromValue:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_remoteViewServiceInsetsFromInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })_remoteViewServiceSizeFromSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
- (void)_setNeedsRemoteViewServiceBoundingPathUpdate;
- (struct CGSize { double x1; double x2; })_sizeForRemoteViewService;
- (struct CGSize { double x1; double x2; })_sizeFromRemoteViewServiceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_textEffectsWindowDidRotate:(id)arg1;
- (void)_updateSceneGeometries:(id)arg1;
- (void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2;
- (void)_updateTextEffectsGeometries:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTextEffectsGeometries:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textEffectsWindow:(id)arg2;
- (void)_updateTextEffectsGeometriesImmediately;
- (void)_updateTextEffectsWindowHostedViewSize;
- (void)_updateTextEffectsWindowSafeAreaInsets;
- (void)_viewDidMoveFromScreen:(id)arg1 toScreen:(id)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (bool)canBecomeFocused;
- (void)dealloc;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isScrollEnabled;
- (id)nextResponder;
- (id)remoteViewController;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
