
@interface SMTRequestContextData : NSObject <NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  approximatePreviousTTSInterval;
    void audioDestination;
    void audioSource;
    void bargeInModes;
    void deviceRestrictions;
    void isEyesFree;
    void isSystemApertureEnabled;
    void isTextToSpeechEnabled;
    void isTriggerlessFollowup;
    void isVoiceTriggerEnabled;
    void responseMode;
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
- (bool)isEqual:(id)arg1;

@end
