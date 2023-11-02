
@interface VCPMAMLModel : NSObject {
    NSString * _inputFeatureName;
    unsigned int  _inputPixelFormat;
    long long  _inputSize;
    MLModel * _model;
    NSString * _outputFeatureName;
}

@property (nonatomic, readonly) NSString *inputFeatureName;
@property (nonatomic, readonly) unsigned int inputPixelFormat;
@property (nonatomic, readonly) long long inputSize;
@property (nonatomic, readonly) MLModel *model;
@property (nonatomic, readonly) NSString *outputFeatureName;

+ (id)vcp_sharedModelWithModelName:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithModelName:(id)arg1;
- (id)inputFeatureName;
- (unsigned int)inputPixelFormat;
- (long long)inputSize;
- (id)model;
- (id)outputFeatureName;

@end
