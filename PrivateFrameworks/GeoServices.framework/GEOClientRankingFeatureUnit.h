
@interface GEOClientRankingFeatureUnit : NSObject {
    GEOClientRankingModelFeatureTypeIdentifier * _feature;
    long long  _featureType;
    GEOClientRankingModelFeatureFunction * _function;
    GEOClientRankingModelFeatureSourceIdentifier * _source;
}

@property (nonatomic, readonly) GEOClientRankingModelFeatureTypeIdentifier *feature;
@property (nonatomic, readonly) long long featureType;
@property (nonatomic, readonly) GEOClientRankingModelFeatureFunction *function;
@property (nonatomic, readonly) GEOClientRankingModelFeatureSourceIdentifier *source;

- (void).cxx_destruct;
- (id)feature;
- (long long)featureType;
- (id)function;
- (id)initWithFeatureType:(id)arg1 function:(id)arg2;
- (id)initWithSource:(id)arg1 function:(id)arg2;
- (id)source;

@end
