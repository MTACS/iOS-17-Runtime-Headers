
@protocol CoreTelephonyClientDataDelegate <NSObject>

@optional

- (void)anbrActivationState:(CTXPCServiceSubscriptionContext *)arg1 enabled:(bool)arg2;
- (void)anbrBitrateRecommendation:(CTXPCServiceSubscriptionContext *)arg1 bitrate:(NSNumber *)arg2 direction:(int)arg3;
- (void)connectionActivationError:(CTXPCServiceSubscriptionContext *)arg1 connection:(int)arg2 error:(int)arg3;
- (void)connectionAvailability:(CTXPCServiceSubscriptionContext *)arg1 availableConnections:(NSArray *)arg2;
- (void)connectionStateChanged:(CTXPCServiceSubscriptionContext *)arg1 connection:(int)arg2 dataConnectionStatusInfo:(CTDataConnectionStatus *)arg3;
- (void)currentDataServiceDescriptorChanged:(CTServiceDescriptor *)arg1;
- (void)currentDataSimChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)dataRoamingSettingsChanged:(CTServiceDescriptor *)arg1 status:(bool)arg2;
- (void)dataSettingsChanged:(CTDataSettings *)arg1;
- (void)dataStatus:(CTXPCServiceSubscriptionContext *)arg1 dataStatusInfo:(CTDataStatus *)arg2;
- (void)internetConnectionActivationError:(int)arg1;
- (void)internetConnectionAvailability:(bool)arg1;
- (void)internetConnectionStateChanged:(CTDataConnectionStatus *)arg1;
- (void)internetDataStatus:(CTDataStatus *)arg1;
- (void)internetDataStatusBasic:(CTDataStatusBasic *)arg1;
- (void)nrSliceAppStateChanged:(NSString *)arg1 status:(bool)arg2 trafficDescriptors:(CTTrafficDescriptorsContainer *)arg3;
- (void)nrSlicedRunningAppStateChanged:(CTSlicedRunningAppInfoContainer *)arg1;
- (void)preferredDataServiceDescriptorChanged:(CTServiceDescriptor *)arg1;
- (void)preferredDataSimChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)regDataModeChanged:(CTXPCServiceSubscriptionContext *)arg1 dataMode:(int)arg2;
- (void)serviceDisconnection:(CTXPCServiceSubscriptionContext *)arg1 status:(CTServiceDisconnectionStatus *)arg2;
- (void)servingNetworkChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)tetheringStatus:(CTTetheringStatus *)arg1;
- (void)tetheringStatus:(CTTetheringStatus *)arg1 connectionType:(int)arg2;

@end
