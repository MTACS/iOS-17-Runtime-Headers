
@interface SBAudioRecordingManager : NSObject {
    SBSBackgroundActivityAssertion * _backgroundActivityAssertion;
    SBApplication * _nowRecordingApplication;
}

@property (nonatomic, retain) SBSBackgroundActivityAssertion *backgroundActivityAssertion;
@property (nonatomic, readonly) SBApplication *nowRecordingApplication;

- (void).cxx_destruct;
- (bool)_callProviderAttributionExistsForAttribution:(id)arg1 callDescriptors:(id)arg2;
- (void)_coverSheetDidPresent:(id)arg1;
- (int)_pidForAttribution:(id)arg1;
- (void)_removeBackgroundActivityAssertion;
- (double)_verificationDelayForApplication:(id)arg1;
- (void)_verifyBackgroundAudioActivityForApplication:(id)arg1 withDelay:(bool)arg2;
- (id)backgroundActivityAssertion;
- (void)dealloc;
- (id)init;
- (id)nowRecordingApplication;
- (void)setBackgroundActivityAssertion:(id)arg1;
- (void)setNowRecordingAppForActiveAudioRecordingAttributions:(id)arg1 callDescriptors:(id)arg2;
- (void)verifyBackgroundAudioActivityForApplication:(id)arg1;

@end
