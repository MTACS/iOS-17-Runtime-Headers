
@interface SBReachabilityManager : NSObject <SBFZStackParticipantDelegate, SBSystemGestureRecognizerDelegate> {
    long long  _animationsInFlight;
    SBScreenEdgePanGestureRecognizer * _dismissEdgeGestureRecognizer;
    UIPanGestureRecognizer * _dismissPanGestureRecognizer;
    UITapGestureRecognizer * _dismissTapGestureRecognizer;
    double  _effectiveReachabilityYOffset;
    NSHashTable * _ignoredWindows;
    UITransform * _inverseReachabilityTransform;
    NSHashTable * _observers;
    unsigned long long  _reachabilityExtensionGenerationCount;
    SBReachabilityGestureRecognizer * _reachabilityGestureRecognizer;
    bool  _reachabilityModeActive;
    bool  _reachabilityModeEnabled;
    UITransform * _reachabilityTransform;
    SBReachabilityWindow * _reachabilityWindow;
    NSMutableSet * _temporaryDisabledReasons;
    NSMutableSet * _temporaryEnabledReasons;
    SBWindowScene * _windowScene;
    SBFZStackParticipant * _zStackParticipant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBScreenEdgePanGestureRecognizer *dismissEdgeGestureRecognizer;
@property (nonatomic, readonly) UIPanGestureRecognizer *dismissPanGestureRecognizer;
@property (nonatomic, readonly) double effectiveReachabilityYOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool reachabilityEnabled;
@property (nonatomic, readonly) SBReachabilityGestureRecognizer *reachabilityGestureRecognizer;
@property (nonatomic, readonly) bool reachabilityModeActive;
@property (nonatomic, readonly) double reachabilityYOffset;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBWindowScene *windowScene;

+ (bool)reachabilitySupported;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activateReachability:(id)arg1;
- (void)_handleSignificantTimeChanged;
- (void)_modifyDefaultPresentationContextHostTransformForWindow:(id)arg1 fromTransform:(id)arg2 toTransform:(id)arg3;
- (void)_notifyObserversDidEndReachabilityAnimation;
- (void)_notifyObserversReachabilityModeActive:(bool)arg1;
- (void)_notifyObserversReachabilityYOffsetDidChange;
- (void)_notifyObserversWillBeginReachabilityAnimation;
- (void)_panToDeactivateReachability:(id)arg1;
- (void)_pingKeepAliveWithDuration:(double)arg1 interactedBeforePing:(bool)arg2 initialKeepAliveTime:(double)arg3;
- (id)_sceneForWindow:(id)arg1;
- (void)_screenDidDim;
- (void)_setKeepAliveTimer;
- (void)_setupGestureRecognizers;
- (void)_setupReachabilityWindowIfNecessary;
- (void)_tapToDeactivateReachability:(id)arg1;
- (void)_tearDownReachabilityWindow;
- (void)_toggleReachabilityMode;
- (void)_transitionWithTransformer:(id)arg1 fromTransform:(id)arg2 toTransform:(id)arg3;
- (void)_updateReachabilityModeActive:(bool)arg1;
- (void)_updateReachabilityModeActive:(bool)arg1 animated:(bool)arg2;
- (void)_updateReachabilityWindowForYOffset:(double)arg1 mode:(long long)arg2 completion:(id /* block */)arg3;
- (void)addObserver:(id)arg1;
- (bool)canActivateReachability;
- (void)deactivateReachability;
- (void)dealloc;
- (id)dismissEdgeGestureRecognizer;
- (id)dismissPanGestureRecognizer;
- (double)effectiveReachabilityYOffset;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)ignoreWindowForReachability:(id)arg1;
- (id)ignoredWindows;
- (id)init;
- (bool)reachabilityEnabled;
- (id)reachabilityGestureRecognizer;
- (bool)reachabilityModeActive;
- (double)reachabilityYOffset;
- (void)removeObserver:(id)arg1;
- (void)setReachabilityEnabled:(bool)arg1;
- (void)setReachabilityTemporarilyDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setReachabilityTemporarilyEnabled:(bool)arg1 forReason:(id)arg2;
- (void)setWindowScene:(id)arg1;
- (void)toggleReachability;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (id)windowScene;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
