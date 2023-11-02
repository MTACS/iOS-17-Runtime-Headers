
@interface WFRecordingStatusManager : NSObject {
    SBSStatusBarStyleOverridesAssertion * _assertion;
}

@property (nonatomic, retain) SBSStatusBarStyleOverridesAssertion *assertion;
@property (getter=isRecording, nonatomic) bool recording;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)acquireAssertion;
- (id)assertion;
- (void)invalidateAssertion;
- (bool)isRecording;
- (void)setAssertion:(id)arg1;
- (void)setRecording:(bool)arg1;

@end
