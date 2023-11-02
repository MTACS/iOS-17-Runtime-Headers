
@interface GameCenterUI.LocalPlayerAuthenticationPresenter : NSObject <GKLocalPlayerAuthenticationUIPersonality> {
    void isUpdating;
    void localPlayer;
    void onAuthenticatedPlayerDidChange;
    void onUIRequired;
    void onUpdatePhaseChange;
}

- (void).cxx_destruct;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)authenticationShowSignInUIForLocalPlayer:(id)arg1 dismiss:(id /* block */)arg2;
- (id)init;

@end
