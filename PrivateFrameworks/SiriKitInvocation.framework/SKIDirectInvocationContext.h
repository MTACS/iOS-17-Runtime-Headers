
@interface SKIDirectInvocationContext : NSObject {
    bool  _eyesFree;
    NSString * _inputOrigin;
    NSString * _interactionType;
    NSString * _responseMode;
    bool  _textToSpeechEnabled;
    bool  _voiceTriggerEnabled;
}

@property (getter=isEyesFree, nonatomic) bool eyesFree;
@property (nonatomic, copy) NSString *inputOrigin;
@property (nonatomic, copy) NSString *interactionType;
@property (nonatomic, copy) NSString *responseMode;
@property (getter=isTextToSpeechEnabled, nonatomic) bool textToSpeechEnabled;
@property (getter=isVoiceTriggerEnabled, nonatomic) bool voiceTriggerEnabled;

+ (id)contextForAnnounceNotifications;
+ (id)contextForCarPlayDirectAction;

- (void).cxx_destruct;
- (id)init;
- (id)inputOrigin;
- (id)interactionType;
- (bool)isEyesFree;
- (bool)isTextToSpeechEnabled;
- (bool)isVoiceTriggerEnabled;
- (id)responseMode;
- (void)setEyesFree:(bool)arg1;
- (void)setInputOrigin:(id)arg1;
- (void)setInteractionType:(id)arg1;
- (void)setResponseMode:(id)arg1;
- (void)setTextToSpeechEnabled:(bool)arg1;
- (void)setVoiceTriggerEnabled:(bool)arg1;

@end
