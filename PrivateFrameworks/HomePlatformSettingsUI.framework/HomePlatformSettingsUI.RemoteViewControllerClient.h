
@interface HomePlatformSettingsUI.RemoteViewControllerClient : NSObject <_EXHostViewControllerDelegate> {
    void delegate;
    void extensionID;
    void hostingPreparationClock;
    void query;
    void statusInfoViewCtrl;
}

- (void).cxx_destruct;
- (void)hostViewController:(id)arg1 didBeginHosting:(id)arg2;
- (void)hostViewController:(id)arg1 didEndHosting:(id)arg2 error:(id)arg3;
- (void)hostViewController:(id)arg1 didFailToHost:(id)arg2 error:(id)arg3;
- (void)hostViewController:(id)arg1 didPrepareToHost:(id)arg2;
- (id)init;

@end
