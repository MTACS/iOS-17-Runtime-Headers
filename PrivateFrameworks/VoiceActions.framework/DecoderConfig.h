
@interface DecoderConfig : NSObject {
    void audioCapture;
    void duringKeywordSilence;
    void postKeywordSilence;
    void preKeywordSilence;
    void useChecker;
}

@property (nonatomic, retain) AudioCaptureConfig *audioCapture;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) DuringKeywordSilenceConfig *duringKeywordSilence;
@property (nonatomic, retain) PostKeywordSilenceConfig *postKeywordSilence;
@property (nonatomic, retain) PreKeywordSilenceConfig *preKeywordSilence;
@property (nonatomic) bool useChecker;

- (void).cxx_destruct;
- (id)audioCapture;
- (id)description;
- (id)duringKeywordSilence;
- (id)init;
- (id)postKeywordSilence;
- (id)preKeywordSilence;
- (void)setAudioCapture:(id)arg1;
- (void)setDuringKeywordSilence:(id)arg1;
- (void)setPostKeywordSilence:(id)arg1;
- (void)setPreKeywordSilence:(id)arg1;
- (void)setUseChecker:(bool)arg1;
- (bool)useChecker;

@end
