
@interface PPUniversalSearchSpotlightIndexScorer : NSObject {
    _PASLazyPurgeableResult * _cachedPortraitTopicScores;
}

- (void).cxx_destruct;
- (double)computeSpotlightIndexScoreFromPortraitExtractions:(id)arg1;
- (double)computeSpotlightIndexTopicScoreComponentFromDocumentTopicVector:(id)arg1;
- (double)computeSpotlightIndexTopicSubscoreFromPortraitExtractions:(id)arg1;
- (id)initWithLocalTopicStore:(id)arg1;
- (id)topicAlgorithmWeights;

@end
