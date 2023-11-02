
@interface CBSUtilities : NSObject

+ (bool)_currentProcessHasEntitlement:(id)arg1;
+ (void)connectToSSID:(id)arg1 completion:(id /* block */)arg2;
+ (void)connectToSSID:(id)arg1 password:(id)arg2 completion:(id /* block */)arg3;
+ (void)connectedNetwork:(id /* block */)arg1;
+ (void)currentLocaleIdentifier:(id /* block */)arg1;
+ (void)diagnosticsRunning:(id /* block */)arg1;
+ (void)dimDisplay;
+ (void)disableNetworkReconnect;
+ (void)displayDimmed:(id /* block */)arg1;
+ (void)enableNetworkReconnect;
+ (void)exitCheckerBoard;
+ (void)hideSceneStatusBar;
+ (bool)isCheckerBoardActive;
+ (void)launchDiagnostics;
+ (void)launchDiagnosticsApp;
+ (void)networkReconnectEnabled:(id /* block */)arg1;
+ (void)networkScanWithCompletion:(id /* block */)arg1;
+ (id)proxyServer;
+ (bool)rebootToCheckerBoard;
+ (void)sceneStatusBarStyle:(long long)arg1;
+ (void)setLocaleIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)showSceneStatusBar;
+ (void)undimDisplay;

@end
