
@interface GEOClientRankingModel : NSObject {
    NSArray * _features;
}

@property (nonatomic, readonly) NSArray *features;

- (void).cxx_destruct;
- (id)features;
- (id)init;
- (id)initWithFeatures:(id)arg1;
- (id)initWithGEOPDClientRankingFeatureMetadata:(id)arg1;

@end
