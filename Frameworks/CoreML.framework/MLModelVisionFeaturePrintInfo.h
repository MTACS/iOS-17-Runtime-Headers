
@interface MLModelVisionFeaturePrintInfo : NSObject {
    id  _featureExtractorParameters;
    MLModel * _postVisionFeaturePrintModel;
    unsigned long long  _version;
}

@property (nonatomic, retain) id featureExtractorParameters;
@property (nonatomic, retain) MLModel *postVisionFeaturePrintModel;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (id)featureExtractorParameters;
- (id)postVisionFeaturePrintModel;
- (void)setFeatureExtractorParameters:(id)arg1;
- (void)setPostVisionFeaturePrintModel:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
