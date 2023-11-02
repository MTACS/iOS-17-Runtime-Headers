
@interface DuringKeywordSilenceConfig : NSObject {
    void minPercentageOfNonSilenceFrames;
    void silenceProbability;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) float minPercentageOfNonSilenceFrames;
@property (nonatomic) float silenceProbability;

- (id)description;
- (id)init;
- (float)minPercentageOfNonSilenceFrames;
- (void)setMinPercentageOfNonSilenceFrames:(float)arg1;
- (void)setSilenceProbability:(float)arg1;
- (float)silenceProbability;

@end
