
@interface RuntimeConfig : NSObject {
    void audioDebug;
    void batchDecode;
    void duringKeywordSilence;
    void postKeywordSilence;
    void preKeywordSilence;
    void secondPass;
}

@property (nonatomic) bool audioDebug;
@property (nonatomic) bool batchDecode;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool duringKeywordSilence;
@property (nonatomic) bool postKeywordSilence;
@property (nonatomic) bool preKeywordSilence;
@property (nonatomic) bool secondPass;

- (bool)audioDebug;
- (bool)batchDecode;
- (id)description;
- (bool)duringKeywordSilence;
- (id)init;
- (bool)postKeywordSilence;
- (bool)preKeywordSilence;
- (bool)secondPass;
- (void)setAudioDebug:(bool)arg1;
- (void)setBatchDecode:(bool)arg1;
- (void)setDuringKeywordSilence:(bool)arg1;
- (void)setPostKeywordSilence:(bool)arg1;
- (void)setPreKeywordSilence:(bool)arg1;
- (void)setSecondPass:(bool)arg1;

@end
