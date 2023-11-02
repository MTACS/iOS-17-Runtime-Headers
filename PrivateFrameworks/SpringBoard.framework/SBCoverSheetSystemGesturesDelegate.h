
@interface SBCoverSheetSystemGesturesDelegate : NSObject <SBIndirectPanGestureRecognizerOrientationProviding, SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate> {
    UIGestureRecognizer * _dismissAddendumGestureRecognizer;
    UIGestureRecognizer * _dismissGestureRecognizer;
    CSCoverSheetDismissGestureSettings * _dismissGestureSettings;
    SBIndirectPanGestureRecognizer * _indirectDismissGestureRecognizer;
    SBIndirectPanGestureRecognizer * _indirectPresentGestureRecognizer;
    <SBCoverSheetSystemGestureDelegatePositionProviding> * _positionProvider;
    UIGestureRecognizer * _preemptingGestureRecognizer;
    UIPanGestureRecognizer * _presentGestureRecognizer;
    SBFluidScrunchGestureRecognizer * _scrunchDismissGestureRecognizer;
    int  _syntheticAppearState;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIGestureRecognizer *dismissAddendumGestureRecognizer;
@property (nonatomic) UIGestureRecognizer *dismissGestureRecognizer;
@property (nonatomic, retain) CSCoverSheetDismissGestureSettings *dismissGestureSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBIndirectPanGestureRecognizer *indirectDismissGestureRecognizer;
@property (nonatomic, retain) SBIndirectPanGestureRecognizer *indirectPresentGestureRecognizer;
@property (nonatomic) <SBCoverSheetSystemGestureDelegatePositionProviding> *positionProvider;
@property (nonatomic) UIGestureRecognizer *preemptingGestureRecognizer;
@property (nonatomic, retain) UIPanGestureRecognizer *presentGestureRecognizer;
@property (nonatomic, retain) SBFluidScrunchGestureRecognizer *scrunchDismissGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic) int syntheticAppearState;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)_areAnyGesturesRecognizedInSet:(id)arg1;
- (bool)_canDismissGestureBegin;
- (bool)_canPresentGestureBegin;
- (bool)_isGestureActivelyRecognized:(id)arg1;
- (bool)_isGestureAllowedByTransientOverlaysOrTopmostApp;
- (id)dismissAddendumGestureRecognizer;
- (id)dismissGestureRecognizer;
- (id)dismissGestureSettings;
- (id)dismissGestures;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)indirectDismissGestureRecognizer;
- (long long)indirectPanEffectiveInterfaceOrientation;
- (id)indirectPresentGestureRecognizer;
- (id)initWithViewController:(id)arg1 dismissGestureRecognizer:(id)arg2 dismissAddendumGestureRecognizer:(id)arg3 dismissalPreemptingGestureRecognizer:(id)arg4;
- (bool)isAnyGestureActivelyRecognized;
- (bool)isDismissGestureActive;
- (bool)isDismissGestureAllowedToBegin;
- (bool)isPresentGestureActive;
- (bool)isPresentGestureAllowedToBegin;
- (id)positionProvider;
- (id)preemptingGestureRecognizer;
- (id)presentGestureRecognizer;
- (id)presentGestures;
- (id)scrunchDismissGestureRecognizer;
- (void)setDismissAddendumGestureRecognizer:(id)arg1;
- (void)setDismissGestureRecognizer:(id)arg1;
- (void)setDismissGestureSettings:(id)arg1;
- (void)setIndirectDismissGestureRecognizer:(id)arg1;
- (void)setIndirectPresentGestureRecognizer:(id)arg1;
- (void)setPositionProvider:(id)arg1;
- (void)setPreemptingGestureRecognizer:(id)arg1;
- (void)setPresentGestureRecognizer:(id)arg1;
- (void)setScrunchDismissGestureRecognizer:(id)arg1;
- (void)setSyntheticAppearState:(int)arg1;
- (void)setViewController:(id)arg1;
- (int)syntheticAppearState;
- (id)viewController;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end
