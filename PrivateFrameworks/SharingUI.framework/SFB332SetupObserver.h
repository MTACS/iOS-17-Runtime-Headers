
@interface SFB332SetupObserver : SFXPCClient {
    <SFB332UIProtocol> * _delegate;
}

@property (nonatomic) <SFB332UIProtocol> *delegate;

- (void).cxx_destruct;
- (void)acquireHUDTransaction;
- (void)activate;
- (id)delegate;
- (void)dismissBTPrompt;
- (void)dismissChargingStatus;
- (void)dismissUIAnimated:(bool)arg1;
- (void)dismissUnlockPrompt;
- (void)enableBluetoothTapped;
- (id)exportedInterface;
- (void)invalidate;
- (id)machServiceName;
- (void)pairTapped;
- (void)releaseHUDTransaction;
- (id)remoteObjectInterface;
- (void)setDelegate:(id)arg1;
- (void)setDeviceType:(unsigned long long)arg1;
- (void)setShouldShowWhatsNew:(bool)arg1;
- (bool)shouldEscapeXpcTryCatch;
- (void)showChargingStatus;
- (void)showEnableBluetoothPill;
- (void)showPairConsentPrompt;
- (void)showPairingFailure;
- (void)showPairingStarted;
- (void)showPairingSuccess;
- (void)showSubsequentPairSuccess;
- (void)showUnlockPrompt;
- (void)updateDeviceInfoWithName:(id)arg1 batteryLevel:(double)arg2 batteryLevelKnown:(bool)arg3 edge:(unsigned long long)arg4 orientation:(unsigned long long)arg5;

@end
