
@interface _AFVoiceIdScoreCardMutation : NSObject <AFVoiceIdScoreCardMutating> {
    AFVoiceIdScoreCard * _base;
    NSNumber * _confidentScoreThreshold;
    NSNumber * _deltaScoreThreshold;
    NSNumber * _highScoreThreshold;
    NSNumber * _lowScoreThreshold;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSpIdAudioProcessedDuration : 1; 
        unsigned int hasSpIdUnknownUserScore : 1; 
        unsigned int hasSpIdKnownUserScores : 1; 
        unsigned int hasSpIdUserScoresVersion : 1; 
        unsigned int hasSpIdScoreThresholdingType : 1; 
        unsigned int hasSpIdAssetVersion : 1; 
        unsigned int hasUserClassified : 1; 
        unsigned int hasUserIdentityClassification : 1; 
        unsigned int hasLowScoreThreshold : 1; 
        unsigned int hasHighScoreThreshold : 1; 
        unsigned int hasConfidentScoreThreshold : 1; 
        unsigned int hasDeltaScoreThreshold : 1; 
    }  _mutationFlags;
    NSString * _spIdAssetVersion;
    NSNumber * _spIdAudioProcessedDuration;
    NSDictionary * _spIdKnownUserScores;
    NSString * _spIdScoreThresholdingType;
    NSNumber * _spIdUnknownUserScore;
    NSNumber * _spIdUserScoresVersion;
    NSString * _userClassified;
    long long  _userIdentityClassification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getConfidentScoreThreshold;
- (id)getDeltaScoreThreshold;
- (id)getHighScoreThreshold;
- (id)getLowScoreThreshold;
- (id)getSpIdAssetVersion;
- (id)getSpIdAudioProcessedDuration;
- (id)getSpIdKnownUserScores;
- (id)getSpIdScoreThresholdingType;
- (id)getSpIdUnknownUserScore;
- (id)getSpIdUserScoresVersion;
- (id)getUserClassified;
- (long long)getUserIdentityClassification;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setConfidentScoreThreshold:(id)arg1;
- (void)setDeltaScoreThreshold:(id)arg1;
- (void)setHighScoreThreshold:(id)arg1;
- (void)setLowScoreThreshold:(id)arg1;
- (void)setSpIdAssetVersion:(id)arg1;
- (void)setSpIdAudioProcessedDuration:(id)arg1;
- (void)setSpIdKnownUserScores:(id)arg1;
- (void)setSpIdScoreThresholdingType:(id)arg1;
- (void)setSpIdUnknownUserScore:(id)arg1;
- (void)setSpIdUserScoresVersion:(id)arg1;
- (void)setUserClassified:(id)arg1;
- (void)setUserIdentityClassification:(long long)arg1;

@end
