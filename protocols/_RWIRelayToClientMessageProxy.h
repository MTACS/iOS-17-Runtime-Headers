
@protocol _RWIRelayToClientMessageProxy

@optional

- (void)_rpc_applicationConnected:(NSDictionary *)arg1;
- (void)_rpc_applicationDisconnected:(NSDictionary *)arg1;
- (void)_rpc_applicationSentData:(NSDictionary *)arg1;
- (void)_rpc_applicationSentListing:(NSDictionary *)arg1;
- (void)_rpc_applicationUpdated:(NSDictionary *)arg1;
- (void)_rpc_driverConnected:(NSDictionary *)arg1;
- (void)_rpc_driverDisconnected:(NSDictionary *)arg1;
- (void)_rpc_driverUpdated:(NSDictionary *)arg1;
- (void)_rpc_reportAutomaticInspectionCandidate:(NSDictionary *)arg1;
- (void)_rpc_reportConnectedApplicationList:(NSDictionary *)arg1;
- (void)_rpc_reportConnectedDriverList:(NSDictionary *)arg1;
- (void)_rpc_reportCurrentState:(NSDictionary *)arg1;
- (void)_rpc_reportSetup:(NSDictionary *)arg1;
- (void)_rpc_requestDriverStateChange:(NSDictionary *)arg1;

@end
