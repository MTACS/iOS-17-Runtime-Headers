
@interface VCTelephonyInterface : NSObject <CoreTelephonyClientDataDelegate> {
    struct __CTServerConnection { } * _connection;
    CoreTelephonyClient * _coreTelephonyClient;
    CTXPCServiceSubscriptionContext * _ctSubscriptionContext;
    long long  _ctSubscriptionSlot;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    long long  _subscriptionSlot;
}

@property (readonly, copy) NSString *debugDescription;
@property <VCTelephonyInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)ctDirectionForTelephonyLinkDirection:(long long)arg1;
+ (long long)ctSubscriptionSlotForSubscriptionSlot:(long long)arg1;
+ (long long)telephonyLinkDirectionForCtDirection:(int)arg1;

- (void)anbrActivationState:(id)arg1 enabled:(bool)arg2;
- (void)anbrBitrateRecommendation:(id)arg1 bitrate:(id)arg2 direction:(int)arg3;
- (void)dealloc;
- (id)delegate;
- (void)getAnbrActivationStateWithCompletionHandler:(id /* block */)arg1;
- (bool)getCarrierBundleValue:(id*)arg1 forKey:(id)arg2;
- (unsigned int)getSampleRateFromAudioCodecInfo:(id)arg1;
- (void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2;
- (void)handleVocoderNotificationWithInfo:(id)arg1;
- (id)init;
- (id)initWithTelephonySubscriptionSlot:(long long)arg1;
- (void)notifyCodecModeChangeEventToCT:(struct _VCAudioCodecModeChangeEvent { int x1; int x2; int x3; unsigned int x4; struct EVSRFParams { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5; })arg1;
- (void)queryAnbrBitrateRecommendation:(unsigned int)arg1 direction:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)registerForNotifications;
- (void)setDelegate:(id)arg1;
- (void)setupVCMediaStreamRateAdaptationConfig:(struct tagVCMediaStreamRateAdaptationConfig { long long x1; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; } x_2_1_1; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; int x_2_2_4; } x_2_1_2; } x2; }*)arg1;
- (id)translateVocoderTypeToCoreAudioType:(id)arg1;
- (void)unregisterForNotifications;
- (unsigned int)validateCarrierBundleConfigParameters:(id)arg1 forKey:(id)arg2 defaultValue:(unsigned int)arg3 minValue:(unsigned int)arg4 maxValue:(unsigned int)arg5;

@end
