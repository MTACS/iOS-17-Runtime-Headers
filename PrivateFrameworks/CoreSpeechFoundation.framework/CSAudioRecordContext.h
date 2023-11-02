
@interface CSAudioRecordContext : NSObject <NSCopying> {
    NSDictionary * _activationMetadata;
    bool  _alwaysUseRemoteBuiltInMic;
    NSString * _deviceId;
    bool  _isRequestDuringActiveCall;
    bool  _isRequestFromSpokenNotification;
    bool  _isRequestFromTriggerless;
    long long  _speechEvent;
    NSString * _turnIdentifier;
    long long  _type;
}

@property (nonatomic, retain) NSDictionary *activationMetadata;
@property (nonatomic) bool alwaysUseRemoteBuiltInMic;
@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) bool isRequestDuringActiveCall;
@property (nonatomic) bool isRequestFromSpokenNotification;
@property (nonatomic) bool isRequestFromTriggerless;
@property (nonatomic) long long speechEvent;
@property (nonatomic, retain) NSString *turnIdentifier;
@property (nonatomic) long long type;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

// Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation

+ (long long)audioTypeForContinuousConversation:(long long)arg1;
+ (id)contextForBTLEWithDeviceId:(id)arg1;
+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForContinuousConversation;
+ (id)contextForContinuousConversationWithRecordRoute:(id)arg1 deviceId:(id)arg2;
+ (id)contextForDarwinVoiceTriggerWithDeviceId:(id)arg1;
+ (id)contextForDictation;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)arg1;
+ (id)contextForHomeButton;
+ (id)contextForJarvisWithDeviceId:(id)arg1;
+ (id)contextForOpportuneSpeakerListener;
+ (id)contextForOpportuneSpeakerListenerWithCall;
+ (id)contextForRaiseToSpeak;
+ (id)contextForRemoraButtonTriggerWithDeviceId:(id)arg1;
+ (id)contextForRemoraVoiceTriggerWithDeviceId:(id)arg1;
+ (id)contextForServerInvoke;
+ (id)contextForVoiceTriggerTraining;
+ (id)defaultContext;
+ (id)recordTypeString:(long long)arg1;

- (void).cxx_destruct;
- (id)_createAVVCContextWithType:(long long)arg1 deviceId:(id)arg2;
- (id)activationMetadata;
- (bool)alwaysUseRemoteBuiltInMic;
- (long long)avvcActivationMode:(long long)arg1;
- (id)avvcContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceId;
- (id)initWithAVVCContext:(id)arg1;
- (id)initWithRecordType:(long long)arg1 deviceId:(id)arg2;
- (id)initWithXPCObject:(id)arg1;
- (bool)isAudioRecordTypeSupportedByContinuousConversation;
- (bool)isAudioRecordTypeSupportedByRemora;
- (bool)isBuiltInVoiceTriggered;
- (bool)isContinuousConversation;
- (bool)isContinuousConversationTriggerlessAnnounce;
- (bool)isDarwinVoiceTriggered;
- (bool)isDictation;
- (bool)isEqual:(id)arg1;
- (bool)isGibraltarVoiceTriggered;
- (bool)isHearstDoubleTapTriggered;
- (bool)isHearstVoiceTriggered;
- (bool)isHomePressed;
- (bool)isJarvisVoiceTriggered;
- (bool)isRTSTriggered;
- (bool)isRemoraButtonPress;
- (bool)isRemoraTriggered;
- (bool)isRemoraVoiceTriggered;
- (bool)isRequestDuringActiveCall;
- (bool)isRequestFromSpokenNotification;
- (bool)isRequestFromTriggerless;
- (bool)isServerInvoked;
- (bool)isStarkTriggered;
- (bool)isTVRemote;
- (bool)isTriggeredFromHearst;
- (bool)isTriggerlessAnnounce;
- (bool)isUIButtonPress;
- (bool)isVoiceTriggered;
- (bool)isVoiceTriggeredFromRemoteXPCDevice;
- (bool)isiOSButtonPress;
- (long long)recordTypeFromAVVCActivationMode:(long long)arg1;
- (void)setActivationMetadata:(id)arg1;
- (void)setAlwaysUseRemoteBuiltInMic:(bool)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setIsRequestDuringActiveCall:(bool)arg1;
- (void)setIsRequestFromSpokenNotification:(bool)arg1;
- (void)setIsRequestFromTriggerless:(bool)arg1;
- (void)setSpeechEvent:(long long)arg1;
- (void)setTurnIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)speechEvent;
- (id)turnIdentifier;
- (long long)type;
- (id)xpcObject;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)avvcContextSettings;
- (bool)isPluginContext;
- (bool)shouldUseLocalAudioFileWriter;

// Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition

- (id)avvcContextSettings;

@end
