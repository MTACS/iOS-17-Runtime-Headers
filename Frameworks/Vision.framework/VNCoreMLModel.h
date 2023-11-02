
@interface VNCoreMLModel : NSObject <VNSequencedRequestSupporting> {
    MLObjectBoundingBoxOutputDescription * _boundingBoxOutputDescription;
    NSDictionary * _detectionPrintInputDescriptions;
    VNRequestSpecifier * _detectionPrintRequestSpecifier;
    <MLFeatureProvider> * _featureProvider;
    unsigned int  _inputImageFormat;
    unsigned long long  _inputImageHeight;
    NSString * _inputImageKey;
    unsigned long long  _inputImageWidth;
    NSString * _inputScenePrintKey;
    long long  _inputScenePrintMLMultiArrayDataType;
    MLModel * _model;
    int  _modelType;
    VNOperationPoints * _operationPoints;
    NSString * _predictedFeatureKey;
    NSString * _predictedProbabilitiesKey;
    VNRequestSpecifier * _scenePrintRequestSpecifier;
    NSString * _uuidStringForCacheIdentifier;
}

@property (readonly) MLObjectBoundingBoxOutputDescription *boundingBoxOutputDescription;
@property (nonatomic, readonly, copy) <NSObject><NSCopying> *cachingIdentifier;
@property (readonly, copy) NSDictionary *detectionPrintInputDescriptions;
@property (readonly) VNRequestSpecifier *detectionPrintRequestSpecifier;
@property (nonatomic, retain) <MLFeatureProvider> *featureProvider;
@property (nonatomic, copy) NSString *inputImageFeatureName;
@property (readonly) unsigned int inputImageFormat;
@property (readonly) unsigned long long inputImageHeight;
@property (retain) NSString *inputImageKey;
@property (readonly) unsigned long long inputImageWidth;
@property (retain) NSString *inputScenePrintKey;
@property (readonly) long long inputScenePrintMLMultiArrayDataType;
@property (retain) MLModel *model;
@property int modelType;
@property (readonly) VNOperationPoints *operationPoints;
@property (retain) NSString *predictedFeatureKey;
@property (readonly) NSString *predictedProbabilitiesKey;
@property (readonly) VNRequestSpecifier *scenePrintRequestSpecifier;
@property (readonly, copy) NSArray *supportedComputeDevices;

+ (id)modelForMLModel:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)boundingBoxOutputDescription;
- (id)cachingIdentifier;
- (id)detectionPrintInputDescriptions;
- (id)detectionPrintRequestSpecifier;
- (id)featureProvider;
- (id)inputImageFeatureName;
- (unsigned int)inputImageFormat;
- (unsigned long long)inputImageHeight;
- (id)inputImageKey;
- (unsigned long long)inputImageWidth;
- (id)inputScenePrintKey;
- (long long)inputScenePrintMLMultiArrayDataType;
- (id)model;
- (int)modelType;
- (id)operationPoints;
- (id)predictWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictedFeatureKey;
- (id)predictedProbabilitiesKey;
- (id)scenePrintRequestSpecifier;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setFeatureProvider:(id)arg1;
- (void)setInputImageFeatureName:(id)arg1;
- (void)setInputImageKey:(id)arg1;
- (void)setInputScenePrintKey:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelType:(int)arg1;
- (void)setPredictedFeatureKey:(id)arg1;
- (id)supportedComputeDevices;
- (bool)wantsSequencedRequestObservationsRecording;

@end
