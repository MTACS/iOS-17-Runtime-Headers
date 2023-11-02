
@interface _PSBehaviorRuleFeatureExtraction : NSObject {
    BMBehaviorRetriever * _behaviorRetriever;
    NSMutableDictionary * _constantFeatures;
    bool  _constantFeaturesReady;
    NSMutableDictionary * _contextFeatures;
    bool  _contextFeaturesReady;
    _CDInteractionStore * _interactionStore;
    NSDictionary * _metadata;
}

@property (nonatomic, readonly) BMBehaviorRetriever *behaviorRetriever;
@property (nonatomic, retain) NSMutableDictionary *constantFeatures;
@property (nonatomic) bool constantFeaturesReady;
@property (nonatomic, retain) NSMutableDictionary *contextFeatures;
@property (nonatomic) bool contextFeaturesReady;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (readonly) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)behaviorRetriever;
- (int)bucketedValue:(int)arg1;
- (id)constantFeatures;
- (bool)constantFeaturesReady;
- (id)contextFeatures;
- (bool)contextFeaturesReady;
- (void)extractConstantFeaturesForMLModelIntoFeatures:(id)arg1;
- (void)extractContextMatchFeatures:(id)arg1 features:(id)arg2;
- (void)extractFeaturesGivenRule:(id)arg1 contextItems:(id)arg2 features:(id)arg3;
- (id)initWithMetadata:(id)arg1;
- (id)interactionStore;
- (id)metadata;
- (void)precalculateConstantFeatures;
- (void)setConstantFeatures:(id)arg1;
- (void)setConstantFeaturesReady:(bool)arg1;
- (void)setContextFeatures:(id)arg1;
- (void)setContextFeaturesReady:(bool)arg1;
- (void)transferFeaturesFrom:(id)arg1 toFeatures:(id)arg2;

@end
