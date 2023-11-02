
@protocol SBSceneHostingDisplayControllerPolicy <NSObject>

@required

- (SBDisplayAssertionPreferences *)assertionPreferencesForDisplay:(SBSceneHostingDisplayController *)arg1 displayConfiguration:(FBSDisplayConfiguration *)arg2;
- (void)connectToDisplayController:(SBSceneHostingDisplayController *)arg1 displayConfiguration:(FBSDisplayConfiguration *)arg2;
- (unsigned long long)displayAssertionDeactivationReasons:(FBSDisplayIdentity *)arg1;
- (unsigned long long)displayAssertionPriorityLevel:(FBSDisplayIdentity *)arg1;
- (void)displayController:(SBSceneHostingDisplayController *)arg1 didBeginTransaction:(BSTransaction *)arg2 sceneManager:(SBSceneManager *)arg3 displayConfiguration:(FBSDisplayConfiguration *)arg4 deactivationReasons:(unsigned long long)arg5;
- (void)displayController:(void *)arg1 updatePresentationWithSceneManager:(void *)arg2 displayConfiguration:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SBSceneHostingDisplayController *, SBSceneManager *, FBSDisplayConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)displayControllerDidDisconnect:(SBSceneHostingDisplayController *)arg1 sceneManager:(SBSceneManager *)arg2;
- (void)displayControllerWillDisconnect:(SBSceneHostingDisplayController *)arg1 sceneManager:(SBSceneManager *)arg2;
- (SBSceneHostingDisplayPreferences *)displayPreferencesForDisplayController:(SBSceneHostingDisplayController *)arg1;

@optional

- (void)displayController:(SBSceneHostingDisplayController *)arg1 didGainControlOfDisplayWithSceneManager:(SBSceneManager *)arg2;
- (void)displayController:(SBSceneHostingDisplayController *)arg1 sceneManager:(SBSceneManager *)arg2 didLoseControlOfDisplayWithDeactivationReasons:(unsigned long long)arg3;
- (void)displayController:(SBSceneHostingDisplayController *)arg1 sceneManager:(SBSceneManager *)arg2 didReceiveNewDeactivationReasons:(unsigned long long)arg3;

@end
