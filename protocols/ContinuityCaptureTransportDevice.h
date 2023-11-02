
@protocol ContinuityCaptureTransportDevice <ContinuityCaptureTaskDelegate>

@required

- (bool)active;
- (NSArray *)activeStreams;
- (bool)allFeaturesSupported;
- (bool)canDeferTermination;
- (bool)canReconnect;
- (CMContinuityCaptureCapabilities *)capabilities;
- (NSUUID *)deviceIdentifier;
- (unsigned long long)deviceMajorVersion;
- (unsigned long long)deviceMinorVersion;
- (NSString *)deviceModel;
- (long long)deviceModelType;
- (NSString *)deviceName;
- (unsigned long long)deviceStatus;
- (bool)guest;
- (bool)hasStreamIntent;
- (bool)isPlacementStepSkipped;
- (bool)legacyReconnectRecovery;
- (CMContinuityCaptureMagicStateMonitor *)magicStateMonitor;
- (bool)nearby;
- (void)notifyDeviceStateChange;
- (void)postEvent:(NSString *)arg1 entity:(long long)arg2 data:(NSDictionary *)arg3 forTransport:(long long)arg4;
- (void)preLaunchShieldUIForTransport:(long long)arg1 data:(NSData *)arg2;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)relaySkipPlacementStepForTranport:(long long)arg1;
- (void)relayUserDisconnectForTransport:(long long)arg1 reason:(NSString *)arg2 shieldSessionID:(NSString *)arg3;
- (bool)remote;
- (bool)sessionInterrupted;
- (void)setCapabilities:(CMContinuityCaptureCapabilities *)arg1;
- (void)setDeviceMajorVersion:(unsigned long long)arg1;
- (void)setDeviceMinorVersion:(unsigned long long)arg1;
- (void)setLegacyReconnectRecovery:(bool)arg1;
- (void)setNearby:(bool)arg1;
- (void)setPlacementStepSkipped:(bool)arg1;
- (void)setSessionInterrupted:(bool)arg1;
- (void)setStreamIntent:(bool)arg1;
- (void)setTerminationDeferred:(bool)arg1;
- (void)setUserDisconnected:(bool)arg1;
- (bool)terminationDeferred;
- (void)updateSystemState;
- (bool)usable;
- (bool)userDisconnected;
- (bool)wifiP2pActive;
- (bool)wired;

@end
