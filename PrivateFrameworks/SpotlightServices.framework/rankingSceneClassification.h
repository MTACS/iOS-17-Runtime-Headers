
@interface rankingSceneClassification : NSObject {
    NSArray * _boundingBox;
    double  _confidence;
    bool  _exactSceneMatch;
    NSNumber * _identifier;
    SSTokenizedString * _label;
    double  _matchedBoundingBoxScore;
    double  _matchedConfidenceScore;
    double  _matchedSceneLabelRatio;
    double  _matchedSceneSynonymsRatio;
    SSSodiumRanker * _rankerReference;
    int  _sceneMatchedType;
    NSDictionary * _sceneReferenceDictionary;
    NSArray * _synonyms;
    NSArray * _synonymsIndexes;
    unsigned long long  _totalLabels;
    unsigned long long  _totalSynonyms;
}

@property (nonatomic, retain) NSArray *boundingBox;
@property (readonly) double boundingBoxRatio;
@property double confidence;
@property bool exactSceneMatch;
@property (nonatomic, retain) NSNumber *identifier;
@property (nonatomic, retain) SSTokenizedString *label;
@property double matchedBoundingBoxScore;
@property double matchedConfidenceScore;
@property double matchedSceneLabelRatio;
@property double matchedSceneSynonymsRatio;
@property (nonatomic, retain) SSSodiumRanker *rankerReference;
@property int sceneMatchedType;
@property (nonatomic) NSDictionary *sceneReferenceDictionary;
@property (nonatomic, retain) NSArray *synonyms;
@property (nonatomic, retain) NSArray *synonymsIndexes;
@property unsigned long long totalLabels;
@property unsigned long long totalSynonyms;

- (void).cxx_destruct;
- (id)boundingBox;
- (double)boundingBoxRatio;
- (double)confidence;
- (id)convertToLabelIndexWithSynonymCount:(id)arg1 synonymsIndex:(id)arg2;
- (bool)exactSceneMatch;
- (id)identifier;
- (id)label;
- (void)matchScoreFromMatchInfo:(id)arg1;
- (void)matchScoreWhenLabelMatched:(id)arg1;
- (void)matchScoreWhenSynonymsMatched:(id)arg1;
- (double)matchedBoundingBoxScore;
- (double)matchedConfidenceScore;
- (double)matchedSceneLabelRatio;
- (double)matchedSceneSynonymsRatio;
- (id)rankerReference;
- (int)sceneMatchedType;
- (id)sceneReferenceDictionary;
- (void)setBoundingBox:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setExactSceneMatch:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMatchedBoundingBoxScore:(double)arg1;
- (void)setMatchedConfidenceScore:(double)arg1;
- (void)setMatchedSceneLabelRatio:(double)arg1;
- (void)setMatchedSceneSynonymsRatio:(double)arg1;
- (void)setRankerReference:(id)arg1;
- (void)setSceneMatchedType:(int)arg1;
- (void)setSceneReferenceDictionary:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (void)setSynonymsIndexes:(id)arg1;
- (void)setTotalLabels:(unsigned long long)arg1;
- (void)setTotalSynonyms:(unsigned long long)arg1;
- (id)synonyms;
- (id)synonymsIndexes;
- (unsigned long long)totalLabels;
- (unsigned long long)totalSynonyms;
- (void)updateBoundingBoxOfDetector;

@end
