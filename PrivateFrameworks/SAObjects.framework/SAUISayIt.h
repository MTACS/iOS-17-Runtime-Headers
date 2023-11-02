
@interface SAUISayIt : SABaseClientBoundCommand <AFAceCommandClientFeedbackEnumerating, SRUIFUUFRSayable>

@property (nonatomic, retain) SAUIAudioData *audioData;
@property (nonatomic, copy) NSString *audioDataUrl;
@property (nonatomic) bool canUseServerTTS;
@property (nonatomic, retain) <SAAceSerializable> *context;
@property (nonatomic, copy) NSString *dialogIdentifier;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSNumber *listenAfterSpeaking;
@property (nonatomic, retain) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) bool repeatable;
@property (setter=siriui_setIgnoresMuteSwitch:, nonatomic) bool siriui_ignoresMuteSwitch;
@property (setter=sruif_setIgnoresMuteSwitch:, nonatomic) bool sruif_ignoresMuteSwitch;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)sayIt;
+ (id)sayItWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioData;
- (id)audioDataUrl;
- (bool)canUseServerTTS;
- (id)context;
- (id)dialogIdentifier;
- (id)encodedClassName;
- (id)gender;
- (id)groupIdentifier;
- (id)languageCode;
- (id)listenAfterSpeaking;
- (id)listenAfterSpeakingBehavior;
- (id)message;
- (bool)repeatable;
- (bool)requiresResponse;
- (void)setAudioData:(id)arg1;
- (void)setAudioDataUrl:(id)arg1;
- (void)setCanUseServerTTS:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDialogIdentifier:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setListenAfterSpeaking:(id)arg1;
- (void)setListenAfterSpeakingBehavior:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRepeatable:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)_af_enumerateClientFeedbackDetails:(id /* block */)arg1;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (void)_siriui_applyUserInfoDictionary:(id)arg1;
- (bool)siriui_ignoresMuteSwitch;
- (void)siriui_setIgnoresMuteSwitch:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (id)sruif__uufrSaid;
- (bool)sruif_ignoresMuteSwitch;
- (void)sruif_setIgnoresMuteSwitch:(bool)arg1;
- (long long)sruif_usefulUserResultType;

@end
