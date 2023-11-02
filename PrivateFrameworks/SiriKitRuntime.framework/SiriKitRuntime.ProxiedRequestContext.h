
@interface SiriKitRuntime.ProxiedRequestContext : NSObject <NSSecureCoding> {
    void aceId;
    void aceMeCard;
    void aceRemoteExecution;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  bargeInContext;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  inputOrigin;
    void interactionId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  interactionType;
    void isDirectAction;
    void isEyesFree;
    void isMultiUserEnabled;
    void isTextToSpeechEnabled;
    void isVoiceTriggerEnabled;
    void refId;
    void requiresConditionalMultiUserGrounding;
    void resultCandidateId;
    void sessionHandoffContinuityId;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
