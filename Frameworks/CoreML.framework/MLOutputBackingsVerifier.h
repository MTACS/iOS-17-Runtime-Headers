
@interface MLOutputBackingsVerifier : NSObject {
    NSDictionary * _outputDescriptions;
}

@property (nonatomic, readonly) NSDictionary *outputDescriptions;

- (void).cxx_destruct;
- (bool)_verifyMultiArrayOutputBacking:(id)arg1 forFeature:(id)arg2 error:(id*)arg3;
- (bool)_verifyOutputBacking:(id)arg1 forFeature:(id)arg2 error:(id*)arg3;
- (bool)_verifyPixelBufferOutputBacking:(struct __CVBuffer { }*)arg1 forFeature:(id)arg2 error:(id*)arg3;
- (id)initWithOutputDescriptions:(id)arg1;
- (id)outputDescriptions;
- (bool)verifyOutputBackings:(id)arg1 predictionUsesBatch:(bool)arg2 error:(id*)arg3;

@end
