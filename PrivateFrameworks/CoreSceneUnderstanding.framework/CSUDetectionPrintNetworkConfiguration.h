
@interface CSUDetectionPrintNetworkConfiguration : NSObject {
    NSString * _espressoNetworkPath;
    int  _executionEngine;
    NSString * _inputImageTensorName;
    CSUPixelBufferDescriptor * _inputPixelBufferDescriptor;
    NSDictionary * _outputTapPointFeatures;
    long long  _revision;
}

@property (nonatomic, readonly, copy) NSString *espressoNetworkPath;
@property int executionEngine;
@property (nonatomic, readonly, copy) NSString *inputImageTensorName;
@property (nonatomic, readonly) CSUPixelBufferDescriptor *inputPixelBufferDescriptor;
@property (nonatomic, readonly) NSDictionary *outputTapPointFeatures;
@property (nonatomic, readonly) long long revision;

+ (long long)_resolvedRevision:(long long)arg1;
+ (id)availableRevisions;
+ (id)detectionPrintConfigurationForRevision:(long long)arg1 error:(id*)arg2;
+ (id)validateAndInitDetectionPrintForRevision:(long long)arg1 forNetworkPath:(id)arg2 withInputImageTensorName:(id)arg3 withInputImageWidth:(unsigned long long)arg4 withInputImageHeight:(unsigned long long)arg5 withInputImageBytesPerRow:(unsigned long long)arg6 withInputFeaturesDict:(id)arg7 error:(id*)arg8;

- (void).cxx_destruct;
- (id)espressoNetworkPath;
- (int)executionEngine;
- (id)initWithConfigurationForRevision:(long long)arg1 espressoNetworkPath:(id)arg2 inputImageTensorName:(id)arg3 imageWidth:(unsigned long long)arg4 imageHeight:(unsigned long long)arg5 imageBytesPerRow:(unsigned long long)arg6 featuresDict:(id)arg7;
- (id)inputImageTensorName;
- (id)inputPixelBufferDescriptor;
- (id)outputTapPointFeatures;
- (long long)revision;
- (void)setExecutionEngine:(int)arg1;

@end
