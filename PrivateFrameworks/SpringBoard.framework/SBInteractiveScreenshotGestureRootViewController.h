
@interface SBInteractiveScreenshotGestureRootViewController : UIViewController <BSInvalidatable> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    UIViewFloatAnimatableProperty * _cancellationCommitProgressAnimatableProperty;
    BSUIOrientationTransformWrapperView * _chromePlaceholderOrientationWrapperView;
    UIStatusBar * _chromePlaceholderStatusBar;
    SSChromePlaceholderViewController * _chromePlaceholderViewController;
    _SBInteractiveScreenshotGestureBackdropView * _contentBackdropView;
    _SBInteractiveScreenshotGestureBackdropView * _contentCapturingView;
    NSMutableArray * _cropLinesAlphaMultiPartAnimations;
    UIViewFloatAnimatableProperty * _cropsProgressPresentationValueAnimatableProperty;
    UIViewFloatAnimatableProperty * _cropsProgressSeparatedValuesAnimatableProperty;
    UIViewFloatAnimatableProperty * _cropsTrackingDiscreteAnimationProgressAnimatableProperty;
    SBInteractiveScreenshotGestureCropsView * _cropsView;
    <SBInteractiveScreenshotGestureRootViewControllerDelegate> * _delegate;
    SSFlashView * _flashView;
    NSMutableArray * _gestureCommitProgressUpdateTimestamps;
    NSMutableArray * _gestureCommitProgressUpdates;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gesturePortraitAnchorPoint;
    bool  _hasCrossedCommitThreshold;
    bool  _hasPreparedInitialLayout;
    UIView * _materialView;
    double  _queue_cropsCornerContentPadding;
    double  _queue_cropsCornerLineWidth;
    double  _queue_displayCornerRadius;
    double  _queue_displayScale;
    long long  _queue_gestureStyle;
    long long  _queue_gestureTouchInterfaceOrientation;
    bool  _queue_hasCommittedScreenshot;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _queue_portraitBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _queue_screenshotContentFrame;
    _SBInteractiveScreenshotGestureReplicatorView * _replicatorView;
    UIView * _screenshotContainerView;
    UIImageView * _screenshotImageView;
    SBInteractiveScreenshotSettings * _settings;
    FBScene * _sourceScene;
    UIView<UIScenePresentation> * _sourceScenePresentationView;
    <UIScenePresenter> * _sourceScenePresenter;
    UIView * _topContentContainerView;
    SBFFluidBehaviorSettings * _trackingCropsAnimationSettings;
    UIViewFloatAnimatableProperty * _transformProgressAnimatableProperty;
    UIViewFloatAnimatableProperty * _translationXAnimatableProperty;
    UIViewFloatAnimatableProperty * _translationYAnimatableProperty;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBInteractiveScreenshotGestureRootViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int flashViewLayerContextID;
@property (nonatomic, readonly) unsigned long long flashViewLayerRenderID;
@property (nonatomic) long long gestureStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addGestureUpdateWithCommitProgress:(double)arg1 timestamp:(double)arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_anchoredTransformForAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 center:(struct CGPoint { double x1; double x2; })arg3 transform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg4;
- (bool)_canShowWhileLocked;
- (void)_cancellationCommitProgressAnimatablePropertyPresentationValueDidChange;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_contentTransformForCommitProgress:(double)arg1 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 additionalContentTranslation:(struct CGPoint { double x1; double x2; })arg3;
- (id)_createFlashViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_createMaterialViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 groupName:(id)arg2 isCaptureOnly:(bool)arg3;
- (id)_createScreenshotImageViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_currentCommitProgressVelocity;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (double)_gestureCommitProgressUpdateVelocityOverTimeInterval:(double)arg1;
- (void)_getContentTranslation:(struct CGPoint { double x1; double x2; }*)arg1 scale:(struct CGPoint { double x1; double x2; }*)arg2 forCommitProgress:(double)arg3 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 additionalContentTranslation:(struct CGPoint { double x1; double x2; })arg5;
- (void)_getDistanceTraveled:(double*)arg1 fullDistance:(double*)arg2 commitProgress:(double*)arg3 forTranslationFromCorner:(struct CGPoint { double x1; double x2; })arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)_injectCommitProgressVelocity:(double)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_inverseContentTransformForCommitProgress:(double)arg1 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 additionalContentTranslation:(struct CGPoint { double x1; double x2; })arg3;
- (bool)_isGestureStyleDisabled:(long long)arg1;
- (bool)_isGestureStyleReducedMotion:(long long)arg1;
- (void)_prepareViewHierarchyForCommittedScreenshot:(bool)arg1 gestureStyle:(long long)arg2;
- (void)_updateContentTransformUsingPresentationValues:(bool)arg1;
- (void)_updateCropLinesMultiPartAnimationForCropsProgress;
- (void)_updateWithUpdateMode:(long long)arg1 commitProgress:(double)arg2 additionalContentTranslation:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (void)_updateWithUpdateMode:(long long)arg1 contentAnimationSettings:(id)arg2 commitProgress:(double)arg3 additionalContentTranslation:(struct CGPoint { double x1; double x2; })arg4 completion:(id /* block */)arg5;
- (void)cancelInteractionWithStyle:(long long)arg1 settlingCompletionHandler:(id /* block */)arg2;
- (void)captureScreenshotWithInterfaceOrientation:(long long)arg1 completion:(id /* block */)arg2;
- (void)commitInteractionWithScreenshotImage:(id)arg1 screenshotInterfaceOrientation:(long long)arg2 settlingCompletionHandler:(id /* block */)arg3 flashCompletionHandler:(id /* block */)arg4;
- (id)delegate;
- (unsigned int)flashViewLayerContextID;
- (unsigned long long)flashViewLayerRenderID;
- (long long)gestureStyle;
- (void)handlePanGestureRecognizerAction:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (void)invalidate;
- (void)removePlaceholderChrome;
- (void)setDelegate:(id)arg1;
- (void)setGestureStyle:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
