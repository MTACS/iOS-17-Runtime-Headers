
@interface PostKeywordSilenceConfig : NSObject {
    void lookForwardFrames;
    void minSilenceFrameCountAtEndOfKeyword;
    void minSilenceFramesExpected;
    void silenceProbability;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long lookForwardFrames;
@property (nonatomic) long long minSilenceFrameCountAtEndOfKeyword;
@property (nonatomic) long long minSilenceFramesExpected;
@property (nonatomic) float silenceProbability;

- (id)description;
- (id)init;
- (long long)lookForwardFrames;
- (long long)minSilenceFrameCountAtEndOfKeyword;
- (long long)minSilenceFramesExpected;
- (void)setLookForwardFrames:(long long)arg1;
- (void)setMinSilenceFrameCountAtEndOfKeyword:(long long)arg1;
- (void)setMinSilenceFramesExpected:(long long)arg1;
- (void)setSilenceProbability:(float)arg1;
- (float)silenceProbability;

@end
