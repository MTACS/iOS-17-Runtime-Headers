
@interface MLAppleImageFeatureExtractorParameters : NSObject {
    id  _featureExtractorParameters;
}

@property (readonly) id featureExtractorParameters;

- (void).cxx_destruct;
- (id)featureExtractorParameters;
- (id)initWithObjectPrintParameters:(id)arg1 error:(id*)arg2;
- (id)initWithScenePrintParameters:(id)arg1 error:(id*)arg2;

@end
