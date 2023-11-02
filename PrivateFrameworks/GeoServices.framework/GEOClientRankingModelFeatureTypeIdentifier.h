
@interface GEOClientRankingModelFeatureTypeIdentifier : GEOClientRankingModelFeatureIdentifier {
    long long  _featureType;
}

@property (nonatomic, readonly) long long featureType;

- (long long)featureIdentifierType;
- (long long)featureType;
- (id)init;
- (id)initWithFeatureType:(long long)arg1;

@end
