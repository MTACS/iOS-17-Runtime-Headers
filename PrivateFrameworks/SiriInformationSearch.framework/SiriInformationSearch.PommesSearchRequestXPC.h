
@interface SiriInformationSearch.PommesSearchRequestXPC : NSObject <NSSecureCoding> {
    void assistantId;
    void audioDestination;
    void audioSource;
    void deviceRestrictions;
    void domain;
    void isEyesFree;
    void isMultiUser;
    void isTextToSpeechEnabled;
    void isTriggerlessFollowup;
    void isVoiceTriggerEnabled;
    void listenAfterSpeaking;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  parseState;
    void requestId;
    void responseMode;
    void utterance;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
