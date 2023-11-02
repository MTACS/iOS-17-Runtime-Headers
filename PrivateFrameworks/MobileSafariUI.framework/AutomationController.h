
@interface AutomationController : _SFAutomationController <_WKAutomationDelegate, _WKAutomationSessionDelegate> {
    NSMapTable * _activeDialogs;
    _WKAutomationSession * _automationSession;
    bool  _automationSessionRequestedFirstWebView;
    bool  _closingAutomationTabsForSessionTeardown;
    UIAutonomousSingleAppModeSession * _guidedAccessSession;
    _WKAutomationSessionConfiguration * _provisionalSessionConfiguration;
    SFClient * _sharingClient;
}

@property (nonatomic, readonly) _WKAutomationSession *automationSession;
@property (nonatomic, readonly) bool canCreateNewAutomationTabs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_automationSession:(id)arg1 acceptCurrentJavaScriptDialogForWebView:(id)arg2;
- (long long)_automationSession:(id)arg1 currentPresentationForWebView:(id)arg2;
- (void)_automationSession:(id)arg1 dismissCurrentJavaScriptDialogForWebView:(id)arg2;
- (bool)_automationSession:(id)arg1 isShowingJavaScriptDialogForWebView:(id)arg2;
- (id)_automationSession:(id)arg1 messageOfCurrentJavaScriptDialogForWebView:(id)arg2;
- (void)_automationSession:(id)arg1 requestNewWebViewWithOptions:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_automationSession:(id)arg1 requestSwitchToWebView:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_automationSession:(id)arg1 setUserInput:(id)arg2 forCurrentJavaScriptDialogForWebView:(id)arg3;
- (long long)_automationSession:(id)arg1 typeOfCurrentJavaScriptDialogForWebView:(id)arg2;
- (void)_automationSessionDidDisconnectFromRemote:(id)arg1;
- (id)_browserControllerForAutomation;
- (void)_developerPreferencesChanged;
- (void)_processPool:(id)arg1 didRequestAutomationSessionWithIdentifier:(id)arg2 configuration:(id)arg3;
- (bool)_processPoolAllowsRemoteAutomation:(id)arg1;
- (void)_processPoolDidRequestInspectorDebuggablesToWakeUp:(id)arg1;
- (bool)_uninstallAutomationSession;
- (void)_uninstallGuidedAccessSession;
- (id)automationSession;
- (bool)canCreateNewAutomationTabs;
- (void)createAutomationSessionWithIdentifier:(id)arg1;
- (void)createAutomationSessionWithIdentifier:(id)arg1 configuration:(id)arg2 retryBehavior:(long long)arg3;
- (void)dealloc;
- (id)init;
- (id)processPool;
- (void)tabDocument:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)tabDocument:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)tabDocument:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)terminateSession;
- (void)updatePreferencesForAutomation:(id)arg1;

@end
