
@interface CSSiriLauncher : NSObject

+ (id)sharedLauncher;

- (void)deactivateSiriActivationConnectionWithReason:(long long)arg1 withOptions:(unsigned long long)arg2 withContext:(id)arg3;
- (void)notifyBluetoothDeviceVoiceTrigger:(id)arg1 deviceId:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyBluetoothDeviceVoiceTriggerPrewarm:(id)arg1 deviceId:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyBuiltInVoiceTrigger:(id)arg1 myriadPHash:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyBuiltInVoiceTriggerPrewarm:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyCarPlayVoiceTrigger:(id)arg1 deviceId:(id)arg2 myriadPHash:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyCarPlayVoiceTriggerPrewarm:(id)arg1 deviceId:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyContinuousConversationActivation:(id)arg1 deviceId:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyDarwinVoiceTrigger:(id)arg1 deviceId:(id)arg2 myriadPHash:(id)arg3 myriadLateActivationExpirationTime:(id)arg4 completion:(id /* block */)arg5;
- (void)notifyDarwinVoiceTriggerPrewarmWithCompletion:(id /* block */)arg1;
- (void)notifyRemoraVoiceTrigger:(id)arg1 myriadPHash:(id)arg2 deviceId:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyRemoraVoiceTriggerPrewarm:(id)arg1 deviceId:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyWakeKeywordSpokenBluetoothDevice:(id)arg1 deviceId:(id)arg2;
- (void)notifyWakeKeywordSpokenCarPlay:(id)arg1 deviceId:(id)arg2;
- (void)notifyWakeKeywordSpokenInBuiltInMic:(id)arg1;
- (void)notifyWakeKeywordSpokenRemora:(id)arg1 deviceId:(id)arg2;

@end
