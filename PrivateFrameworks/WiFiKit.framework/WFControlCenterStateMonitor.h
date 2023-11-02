
@interface WFControlCenterStateMonitor : WFWiFiStateMonitor

- (bool)_airplaneModeEnabled;
- (bool)_isCellularOutrankingWiFi;
- (void)_performAction:(long long)arg1;
- (void)_promptCarPlayDisable;
- (void)_promptCellularOutankDisable;
- (void)_promptMISDisable;
- (void)performAction;
- (void)performAction:(id /* block */)arg1;

@end
