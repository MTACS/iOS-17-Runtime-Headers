
@interface _PSSharingContactFeatureExtraction : NSObject {
    BMBehaviorRetriever * _behaviorRetriever;
    NSMutableDictionary * _constantFeatures;
    bool  _constantFeaturesReady;
    _CDInteractionStore * _interactionStore;
    NSDictionary * _metadata;
    _PSContactFillerNormalizationConstants * _normConstants;
    CAPContactFillerUserEvent * _userEvent;
}

@property (nonatomic, readonly) BMBehaviorRetriever *behaviorRetriever;
@property (nonatomic, retain) NSMutableDictionary *constantFeatures;
@property (nonatomic) bool constantFeaturesReady;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) _PSContactFillerNormalizationConstants *normConstants;
@property (nonatomic, retain) CAPContactFillerUserEvent *userEvent;

- (void).cxx_destruct;
- (id)behaviorRetriever;
- (id)constantFeatures;
- (bool)constantFeaturesReady;
- (void)extractConstantFeaturesInto:(id)arg1;
- (void)extractFeaturesInto:(id)arg1 withPredictionContext:(id)arg2 forContactId:(id)arg3 forInteraction:(id)arg4 behaviorRulesConsideringInTheContext:(id)arg5 ruleRankingMLModelScores:(id)arg6 interactionModelScores:(id)arg7;
- (id)initWithMetadata:(id)arg1 interactionStore:(id)arg2;
- (id)interactionStore;
- (id)metadata;
- (id)normConstants;
- (void)setConstantFeatures:(id)arg1;
- (void)setConstantFeaturesReady:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNormConstants:(id)arg1;
- (void)setUserEvent:(id)arg1;
- (void)transferConstantFeatures:(id)arg1 to:(id)arg2;
- (id)userEvent;

@end
