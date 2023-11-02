
@interface _PSSharingContactRankerModel : NSObject {
    bool  __PSSharingContactRankerMLModelInUse;
    double  __PSSharingContactRankerMLModelScoreThreshold;
    _PSSharingContactFeatureExtraction * _feaExtractionHandle;
    _CDInteractionStore * _interactionStore;
    _CDInteractionCache * _messageInteractionCache;
    _CDInteractionCache * _shareInteractionCache;
    _PSSharingContactRankerMLModel * _sharingContactRankerMLModel;
}

@property (nonatomic) bool _PSSharingContactRankerMLModelInUse;
@property (nonatomic) double _PSSharingContactRankerMLModelScoreThreshold;
@property (retain) _PSSharingContactFeatureExtraction *feaExtractionHandle;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (nonatomic, retain) _CDInteractionCache *messageInteractionCache;
@property (nonatomic, retain) _CDInteractionCache *shareInteractionCache;
@property (retain) _PSSharingContactRankerMLModel *sharingContactRankerMLModel;

- (void).cxx_destruct;
- (bool)_PSSharingContactRankerMLModelInUse;
- (double)_PSSharingContactRankerMLModelScoreThreshold;
- (id)feaExtractionHandle;
- (id)initWithInteractionStore:(id)arg1 messageInteractionCache:(id)arg2 shareInteractionCache:(id)arg3;
- (id)interactionStore;
- (void)loadMLModel;
- (id)messageInteractionCache;
- (void)setFeaExtractionHandle:(id)arg1;
- (void)setMessageInteractionCache:(id)arg1;
- (void)setShareInteractionCache:(id)arg1;
- (void)setSharingContactRankerMLModel:(id)arg1;
- (void)set_PSSharingContactRankerMLModelInUse:(bool)arg1;
- (void)set_PSSharingContactRankerMLModelScoreThreshold:(double)arg1;
- (id)shareInteractionCache;
- (id)sharingContactRankerMLModel;
- (id)suggestionProxiesWithPredictionContext:(id)arg1 supportedBundleIDs:(id)arg2 behaviorRulesConsideringInTheContext:(id)arg3 interactionModelSuggestions:(id)arg4 ruleRankingMLModelScores:(id)arg5;
- (void)updateModelProperties:(id)arg1;

@end
