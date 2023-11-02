
@interface PreKeywordSilenceConfig : NSObject {
    void lookbackFrames;
    void minSilenceInLookbackFrames;
    void silenceProbability;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long lookbackFrames;
@property (nonatomic) long long minSilenceInLookbackFrames;
@property (nonatomic) float silenceProbability;

- (id)description;
- (id)init;
- (long long)lookbackFrames;
- (long long)minSilenceInLookbackFrames;
- (void)setLookbackFrames:(long long)arg1;
- (void)setMinSilenceInLookbackFrames:(long long)arg1;
- (void)setSilenceProbability:(float)arg1;
- (float)silenceProbability;

@end
