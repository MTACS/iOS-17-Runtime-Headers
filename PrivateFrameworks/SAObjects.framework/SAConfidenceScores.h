
@interface SAConfidenceScores : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *assetVersion;
@property (nonatomic, copy) NSString *classifiedUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lowScoreThreshold;
@property (nonatomic) long long processedAudioDurationMilliseconds;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSArray *scores;
@property (nonatomic, copy) NSNumber *scoringSchemeVersion;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *thresholdType;
@property (nonatomic, copy) NSString *userIdentityClassification;

+ (id)confidenceScores;
+ (id)confidenceScoresWithDictionary:(id)arg1 context:(id)arg2;

- (id)assetVersion;
- (id)classifiedUser;
- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)lowScoreThreshold;
- (long long)processedAudioDurationMilliseconds;
- (bool)requiresResponse;
- (id)scores;
- (id)scoringSchemeVersion;
- (void)setAssetVersion:(id)arg1;
- (void)setClassifiedUser:(id)arg1;
- (void)setLowScoreThreshold:(long long)arg1;
- (void)setProcessedAudioDurationMilliseconds:(long long)arg1;
- (void)setScores:(id)arg1;
- (void)setScoringSchemeVersion:(id)arg1;
- (void)setThresholdType:(id)arg1;
- (void)setUserIdentityClassification:(id)arg1;
- (id)thresholdType;
- (id)userIdentityClassification;

@end
