
@interface CoreIDVShared.IdentityLivenessConfig : NSObject <NSSecureCoding> {
    void enableIDMatching;
    void enablePrintReplay;
    void faceOutOfBoundFrames;
    void gestureCompletionDelay;
    void gestureDetectedSuccessDuration;
    void gestureSequence;
    void lastGestureExtraFrameDuration;
    void maxRetakeCount;
    void minRequiredGestureCount;
    void requiresGoodLux;
    void sessionTimeout;
    void timeToAlert;
    void timeToAlertAccessible;
    void timeToSkipAccessible;
    void timeToSkipOption;
    void tutorialResumeDelay;
    void tutorialVideoDelay;
    void tutorialVideoDuration;
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
