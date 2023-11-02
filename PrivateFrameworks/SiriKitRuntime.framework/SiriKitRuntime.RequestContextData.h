
@interface SiriKitRuntime.RequestContextData : NSObject <NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  approximatePreviousTTSInterval;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  audioDestination;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  audioSource;
    void bargeInModes;
    void currentDeviceAssistantId;
    void didPreviouslyFallbackToServer;
    void endpointInfo;
    void inputOrigin;
    void instanceInfo;
    void isDirectAction;
    void isEyesFree;
    void isInAmbient;
    void isRecognizeMyVoiceEnabled;
    void isSpeechRequest;
    void isSystemApertureEnabled;
    void isTextToSpeechEnabled;
    void isTriggerlessFollowup;
    void isUserOnActivePhoneCall;
    void isVoiceTriggerEnabled;
    void originatingHome;
    void peerInfo;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  positionInSession;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  responseMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  restrictions;
    void voiceAudioSessionId;
    void voiceTriggerEventInfo;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
