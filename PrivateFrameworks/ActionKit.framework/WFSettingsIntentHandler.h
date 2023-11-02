
@interface WFSettingsIntentHandler : NSObject <WFSetAirplaneModeIntentHandling, WFSetAlwaysOnDisplayIntentHandling, WFSetAnnounceNotificationsIntentHandling, WFSetAppearanceIntentHandling, WFSetBluetoothIntentHandling, WFSetBrightnessIntentHandling, WFSetCellularDataIntentHandling, WFSetFlashlightIntentHandling, WFSetLowPowerModeIntentHandling, WFSetNightShiftIntentHandling, WFSetOrientationLockIntentHandling, WFSetPersonalHotspotIntentHandling, WFSetSilenceUnknownCallersIntentHandling, WFSetStageManagerIntentHandling, WFSetTrueToneIntentHandling, WFSetWiFiIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)createSettingsClientForIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleSetAirplaneMode:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetAlwaysOnDisplay:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetAnnounceNotifications:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetAppearance:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetBluetooth:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetBrightness:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetCellularData:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetFlashlight:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetLowPowerMode:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetNightShift:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetOrientationLock:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetPersonalHotspot:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetSilenceUnknownCallers:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetStageManager:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetTrueTone:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetWiFi:(id)arg1 completion:(id /* block */)arg2;
- (void)performSettingIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveOperationForSetAirplaneMode:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveOperationForSetAlwaysOnDisplay:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveOperationForSetAppearance:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveOperationForSetBluetooth:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveOperationForSetCellularData:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveOperationForSetFlashlight:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveOperationForSetLowPowerMode:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveOperationForSetWiFi:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveStateForSetAirplaneMode:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveStateForSetAlwaysOnDisplay:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveStateForSetBluetooth:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveStateForSetCellularData:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveStateForSetFlashlight:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveStateForSetLowPowerMode:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveStateForSetWiFi:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveStyleForSetAppearance:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveValueForSetBrightness:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveValueForSetFlashlight:(id)arg1 withCompletion:(id /* block */)arg2;

@end
