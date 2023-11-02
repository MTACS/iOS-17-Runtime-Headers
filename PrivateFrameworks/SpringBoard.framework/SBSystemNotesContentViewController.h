
@interface SBSystemNotesContentViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBPIPSceneContentProviding, SBSceneHandleActionConsuming, SBSystemPointerInteractionDelegate, SBTransientUITapToDismissParticipant, SBWorkspaceApplicationSceneTransitionContextDelegate> {
    TRAArbiter * _arbiter;
    SBApplicationBlurContentView * _blurView;
    SBSSystemNotesPresentationConfiguration * _currentConfiguration;
    <SBSystemNotesContentViewControllerDelegate> * _delegate;
    bool  _haveBeenForeground;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastKnownSceneFrame;
    SBWindowScene * _lastKnownWindowScene;
    SBSystemNotesInteractionSettings * _notesInteractionSettings;
    SBNubView * _nubView;
    NSString * _pendingAnalyticsString;
    SBSystemNotesPlaceholderContentProvider * _placeholderProvider;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSceneContentSize;
    SBSystemNotesContentPresentationContext * _presentationContext;
    SBDeviceApplicationSceneViewController * _sceneViewController;
    SBSceneViewStatusBarAssertion * _statusBarAssertion;
    SBSystemPointerInteractionManager * _systemPointerInteractionManager;
    BSAbsoluteMachTimer * _thumbnailCooldownTimer;
    bool  _thumbnailCooldownTimerFired;
    UITapGestureRecognizer * _thumbnailTapGestureRecognizer;
    UIView * _thumbnailView;
    TRAParticipant * _traitsParticipant;
    SBTraitsSceneParticipantDelegate * _traitsParticipantDelegate;
    SBTransientUIInteractionManager * _transientUIInteractionManager;
    SBMainWorkspace * _workspace;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) SBSSystemNotesPresentationConfiguration *currentConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSystemNotesContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long presentationMode;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireTraitsParticipantOnWindowSceneIfNecessary:(id)arg1;
- (void)_handleThumbnailTapGesture:(id)arg1;
- (bool)_hitTestTouch:(id)arg1 gestureRecognizer:(id)arg2;
- (id)_imageFromUserActivity:(id)arg1 presentationMode:(long long)arg2;
- (void)_invalidateTraitsParticipant;
- (id)_sbWindowSceneForSceneHandle:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneFrame;
- (unsigned long long)_sendActionForUpdatedConfiguration:(id)arg1 sendCreateIfNecessary:(bool)arg2;
- (void)_setBlurred:(bool)arg1;
- (void)_setPreferredSceneContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_thumbnailViewForUserActivity:(id)arg1;
- (bool)_updateForegroundStatus:(bool)arg1;
- (void)_updateSceneFrameWithCompletion:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2;
- (id)bundleIdentifier;
- (void)containerViewController:(id)arg1 didSettleOnStashState:(bool)arg2;
- (bool)containerViewController:(id)arg1 shouldHandleStashingForTransitionContext:(id)arg2;
- (void)containerViewControllerDidEndInteraction:(id)arg1 targetWindowScene:(id)arg2;
- (void)containerViewControllerDidEndSizeChange:(id)arg1;
- (void)containerViewControllerWillBeginSizeChange:(id)arg1 behavior:(int)arg2;
- (id)contentView;
- (id)currentConfiguration;
- (void)dealloc;
- (id)delegate;
- (id)initWithSceneHandle:(id)arg1 workspace:(id)arg2 transientUIInteractionManager:(id)arg3 notesInteractionSettings:(id)arg4 presentationContext:(id)arg5;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pointerInteractionHitTestInsetsForView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)presentationMode;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (id)sceneHandle;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (bool)sceneHandle:(id)arg1 didReceiveAction:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPresentationMode:(long long)arg1;
- (bool)shouldAutorotate;
- (bool)shouldBeginPointerInteractionRequest:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 forView:(id)arg3;
- (id)styleForRegion:(id)arg1 forView:(id)arg2;
- (bool)transientUIHandledTouch:(id)arg1 withSystemGestureRecognizer:(id)arg2;
- (unsigned long long)updateConfiguration:(id)arg1 sendCreateActionIfNecessary:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
