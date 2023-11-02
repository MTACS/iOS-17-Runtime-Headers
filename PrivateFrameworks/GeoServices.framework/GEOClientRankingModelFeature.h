
@interface GEOClientRankingModelFeature : NSObject {
    GEOClientRankingModelFeatureIdentifier * _featureIdentifier;
    GEOClientRankingModelFeatureFunction * _function;
}

@property (nonatomic, readonly) GEOClientRankingModelFeatureIdentifier *featureIdentifier;
@property (nonatomic, readonly) GEOClientRankingModelFeatureFunction *function;

- (void).cxx_destruct;
- (id)featureIdentifier;
- (id)function;
- (id)init;
- (id)initWithFeatureIdentifier:(id)arg1 function:(id)arg2;
- (id)initWithGEOPDClientRankingFeatureMetadata:(id)arg1;

@end
