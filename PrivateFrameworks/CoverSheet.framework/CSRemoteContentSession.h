
@interface CSRemoteContentSession : NSObject <CSRemoteContentHostDelegate, CSRemoteContentViewControllerDelegate> {
    bool  _activated;
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    CSCoverSheetViewControllerBase<CSRemoteContentViewControllerProtocol> * _containerViewController;
    SBSRemoteContentDefinition * _definition;
    <CSRemoteContentSessionHostDelegate> * _hostDelegate;
    CSRemoteContentHostViewController * _hostViewController;
    <CSRemoteContentSessionPreferencesProvider> * _preferencesProvider;
    bool  _presented;
    CSDashBoardRemoteContentSettings * _remoteContentSettings;
    NSString * _sessionID;
    bool  _valid;
    bool  _waitingForContentFrame;
    bool  _waitingForPreferences;
}

@property (nonatomic, readonly) <SBFAuthenticationStatusProvider> *authenticationStatusProvider;
@property (nonatomic, retain) CSCoverSheetViewControllerBase<CSRemoteContentViewControllerProtocol> *containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) SBSRemoteContentDefinition *definition;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CSRemoteContentSessionHostDelegate> *hostDelegate;
@property (nonatomic, retain) CSRemoteContentHostViewController *hostViewController;
@property (nonatomic) <CSRemoteContentSessionPreferencesProvider> *preferencesProvider;
@property (nonatomic, retain) CSDashBoardRemoteContentSettings *remoteContentSettings;
@property (nonatomic, readonly, copy) NSString *sessionID;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)_activateHostViewControllerWithPreferences:(id)arg1;
- (void)_activateRemoteViewController:(id)arg1 remoteError:(id)arg2;
- (id)_errorWithCode:(long long)arg1;
- (bool)_invalidateForReason:(long long)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_invalidateWithError:(id)arg1;
- (void)_invalidateWithErrorCode:(long long)arg1;
- (void)_reactivate;
- (bool)_remoteContentFrameIsValid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_remoteContentViewControllerForPreferences:(id)arg1;
- (void)_requestRemoteViewControllerWithConnectionHandler:(id /* block */)arg1;
- (void)activate;
- (id)authenticationStatusProvider;
- (id)containerViewController;
- (void)dealloc;
- (id)definition;
- (void)didChangeRemoteHostContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didChangeRemotePreferences:(id)arg1;
- (void)forceDisconnect;
- (id)hostDelegate;
- (id)hostViewController;
- (id)initWithDefinition:(id)arg1 authenticationStatusProvider:(id)arg2;
- (bool)isValid;
- (id)preferencesProvider;
- (bool)prefersInlineForPreferences:(id)arg1;
- (double)remoteContentComplicationHeightInset;
- (void)remoteContentHostViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (id)remoteContentSettings;
- (bool)remoteContentViewController:(id)arg1 requestsDismissalForType:(long long)arg2 completion:(id /* block */)arg3;
- (id)sessionID;
- (void)setContainerViewController:(id)arg1;
- (void)setHostDelegate:(id)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setPreferencesProvider:(id)arg1;
- (void)setRemoteContentSettings:(id)arg1;

@end
