
@interface SBDirectToAirPlayController : NSObject <SBAVSystemControllerDirectToAirPlayObserver, SBControlCenterObserver, SBMainDisplaySceneManagerObserver> {
    STAirPlayStatusDomainPublisher * _airPlayStatusDomainPublisher;
    bool  _controlCenterReportsItselfAsPresented;
    AVRoutingSessionDestination * _currentRoutingSessionDestination;
    bool  _currentRoutingSessionEstablishedAutomaticallyFromLikelyDestination;
    _SBDirectToAirPlayPolicyState * _currentState;
    NSMutableSet * _directToAirPlayEligibleBundleIDs;
    NSMutableSet * _directToAirPlayIneligibleBundleIDs;
    NSMutableDictionary * _directToAirPlayPlayingBundleIDsToRouteNames;
    NSMutableDictionary * _directToAirPlayReadyBundleIDsToRouteNames;
    bool  _externalPlaybackIsActive;
    bool  _externalPlaybackIsPlaying;
    AVExternalPlaybackMonitor * _externalPlaybackMonitor;
    NSArray * _likelyExternalPlaybackDestinations;
    MPMediaControlsStatusBarStyleOverridesCoordinator * _mediaControlsCoordinator;
    AVRoutingSessionManager * _routingSessionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_mediaControllerSaysWeHaveAWiredRoute;
+ (bool)directToAirPlayIsAvailable;

- (void).cxx_destruct;
- (void)_acquireDirectToAirPlayStatusBarStyleOverrideForApplicationWithBundleID:(id)arg1 playing:(bool)arg2 completion:(id /* block */)arg3;
- (id)_captureCurrentPolicyState;
- (void)_clearDirectToAirPlayStatusBarAssertion;
- (id)_currentExternalRouteNames;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingBackground:(id)arg1;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingForeground:(id)arg1;
- (void)_evaluatePolicyForDirectToAirplayAlert;
- (id)_externalRouteNamesForDestination:(id)arg1;
- (void)_main_evaluatePolicyForDirectToAirplayAlert;
- (void)_rollBannerActionForReadyBundleID:(id)arg1 sceneHandle:(id)arg2;
- (void)_updateRouteNamesForPlayingAndReadyApps;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)currentExternalDestinationDidChange:(id)arg1;
- (void)dealloc;
- (void)externalAirPlayVideoActiveDidChange:(id)arg1;
- (void)externalAirPlayVideoPlayingDidChange:(id)arg1;
- (void)externalDisplayChanged:(id)arg1;
- (id)init;
- (void)likelyExternalDestinationsDidChange:(id)arg1;
- (void)lockStateChanged:(id)arg1;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;

@end
