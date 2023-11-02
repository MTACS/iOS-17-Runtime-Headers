
@protocol AFVoiceIdScoreCardMutating <NSObject>

@required

- (void)setConfidentScoreThreshold:(NSNumber *)arg1;
- (void)setDeltaScoreThreshold:(NSNumber *)arg1;
- (void)setHighScoreThreshold:(NSNumber *)arg1;
- (void)setLowScoreThreshold:(NSNumber *)arg1;
- (void)setSpIdAssetVersion:(NSString *)arg1;
- (void)setSpIdAudioProcessedDuration:(NSNumber *)arg1;
- (void)setSpIdKnownUserScores:(NSDictionary *)arg1;
- (void)setSpIdScoreThresholdingType:(NSString *)arg1;
- (void)setSpIdUnknownUserScore:(NSNumber *)arg1;
- (void)setSpIdUserScoresVersion:(NSNumber *)arg1;
- (void)setUserClassified:(NSString *)arg1;
- (void)setUserIdentityClassification:(long long)arg1;

@end
