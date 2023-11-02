
@interface AFVoiceIdScoreCard : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSNumber * _confidentScoreThreshold;
    NSNumber * _deltaScoreThreshold;
    NSNumber * _highScoreThreshold;
    NSNumber * _lowScoreThreshold;
    NSString * _spIdAssetVersion;
    NSNumber * _spIdAudioProcessedDuration;
    NSDictionary * _spIdKnownUserScores;
    NSString * _spIdScoreThresholdingType;
    NSNumber * _spIdUnknownUserScore;
    NSNumber * _spIdUserScoresVersion;
    NSString * _userClassified;
    long long  _userIdentityClassification;
}

@property (nonatomic, readonly, copy) NSNumber *confidentScoreThreshold;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSNumber *deltaScoreThreshold;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *highScoreThreshold;
@property (nonatomic, readonly, copy) NSNumber *lowScoreThreshold;
@property (nonatomic, readonly, copy) NSString *spIdAssetVersion;
@property (nonatomic, readonly, copy) NSNumber *spIdAudioProcessedDuration;
@property (nonatomic, readonly, copy) NSDictionary *spIdKnownUserScores;
@property (nonatomic, readonly, copy) NSString *spIdScoreThresholdingType;
@property (nonatomic, readonly, copy) NSNumber *spIdUnknownUserScore;
@property (nonatomic, readonly, copy) NSNumber *spIdUserScoresVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *userClassified;
@property (nonatomic, readonly) long long userIdentityClassification;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)confidentScoreThreshold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltaScoreThreshold;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)highScoreThreshold;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSpIdAudioProcessedDuration:(id)arg1 spIdUnknownUserScore:(id)arg2 spIdKnownUserScores:(id)arg3 spIdUserScoresVersion:(id)arg4 spIdScoreThresholdingType:(id)arg5 spIdAssetVersion:(id)arg6 userClassified:(id)arg7 userIdentityClassification:(long long)arg8;
- (id)initWithSpIdAudioProcessedDuration:(id)arg1 spIdUnknownUserScore:(id)arg2 spIdKnownUserScores:(id)arg3 spIdUserScoresVersion:(id)arg4 spIdScoreThresholdingType:(id)arg5 spIdAssetVersion:(id)arg6 userClassified:(id)arg7 userIdentityClassification:(long long)arg8 lowScoreThreshold:(id)arg9 highScoreThreshold:(id)arg10 confidentScoreThreshold:(id)arg11 deltaScoreThreshold:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)lowScoreThreshold;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)spIdAssetVersion;
- (id)spIdAudioProcessedDuration;
- (id)spIdKnownUserScores;
- (id)spIdScoreThresholdingType;
- (id)spIdUnknownUserScore;
- (id)spIdUserScoresVersion;
- (id)userClassified;
- (long long)userIdentityClassification;

@end
