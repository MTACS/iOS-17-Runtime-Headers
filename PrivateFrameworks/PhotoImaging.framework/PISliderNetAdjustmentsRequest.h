
@interface PISliderNetAdjustmentsRequest : PISliderNetBaseRequest {
    NSData * _contentFeatureVectorData;
    double  _similarityGatingThreshold;
    NSData * _styleFeatureVectorData;
}

@property (nonatomic, retain) NSData *contentFeatureVectorData;
@property (nonatomic) double similarityGatingThreshold;
@property (nonatomic, retain) NSData *styleFeatureVectorData;

- (void).cxx_destruct;
- (id)contentFeatureVectorData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)setContentFeatureVectorData:(id)arg1;
- (void)setSimilarityGatingThreshold:(double)arg1;
- (void)setStyleFeatureVectorData:(id)arg1;
- (double)similarityGatingThreshold;
- (id)styleFeatureVectorData;
- (void)submit:(id /* block */)arg1;

@end
