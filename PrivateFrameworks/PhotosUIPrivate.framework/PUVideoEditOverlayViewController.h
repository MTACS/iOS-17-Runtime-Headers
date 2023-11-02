
@interface PUVideoEditOverlayViewController : UIViewController <PXSubjectTrackingViewDelegate> {
    bool  _disabledForCinematographyScriptLoad;
    NUMediaView * _mediaView;
    <PUVideoEditOverlayViewControllerDelegate> * _overlayControllerDelegate;
    CALayer * _safeAreaMask;
    PXUISubjectTrackingView * _trackingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabledForCinematographyScriptLoad;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) NUMediaView *mediaView;
@property (nonatomic) <PUVideoEditOverlayViewControllerDelegate> *overlayControllerDelegate;
@property (nonatomic, retain) CALayer *safeAreaMask;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXUISubjectTrackingView *trackingView;

- (void).cxx_destruct;
- (void)_setState:(long long)arg1 forView:(id)arg2 animated:(bool)arg3;
- (id)composition;
- (id)compositionController;
- (bool)disabledForCinematographyScriptLoad;
- (void)enableUIForCinematographyScriptLoad:(bool)arg1;
- (void)frameTimeDidChange;
- (id)initWithMediaView:(id)arg1 cineController:(id)arg2;
- (void)interactionBegan;
- (bool)isHidden;
- (void)loadView;
- (id)localizedStringForCinematicTrackingBadgeMessage:(long long)arg1;
- (id)mediaView;
- (id)newFocusStatusBadge;
- (id)newTrackingViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 initialState:(long long)arg2;
- (void)objectTrackingFinishedWithSuccess:(bool)arg1;
- (void)objectTrackingStartedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)overlayControllerDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForFocusStateBadge:(id)arg1;
- (void)renderDidChange:(bool)arg1;
- (id)safeAreaMask;
- (void)scriptDidUpdate;
- (void)setDisabledForCinematographyScriptLoad:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setMediaView:(id)arg1;
- (void)setMessage:(id)arg1 forFocusStateBadge:(id)arg2;
- (void)setNeedsUpdateTrackingFrame;
- (void)setOverlayControllerDelegate:(id)arg1;
- (void)setSafeAreaMask:(id)arg1;
- (void)setTrackingInProgressTextForFocusStateBadge:(id)arg1;
- (void)setTrackingView:(id)arg1;
- (void)showTrackingInformationalString:(id)arg1;
- (void)subjectFocusStateDidChange:(long long)arg1 forBadge:(id)arg2 focusedDisparity:(double)arg3;
- (void)subjectTrackingStateDidChange:(long long)arg1 forView:(id)arg2 animated:(bool)arg3;
- (void)trackedObjectWasUpdatedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 shouldStop:(bool*)arg2;
- (id)trackingView;
- (void)trackingWasEdited;
- (void)trackingWasEditedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })unadjustedTimeForPlayerTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)viewDidLayoutSubviews;

@end
