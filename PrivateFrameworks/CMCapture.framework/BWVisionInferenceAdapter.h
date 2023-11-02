
@interface BWVisionInferenceAdapter : NSObject {
    VNProcessingDevice * _applicationProcessingDevice;
    VNProcessingDevice * _graphicsProcessingDevice;
    VNProcessingDevice * _neuralProcessingDevice;
}

@property (nonatomic, readonly) VNProcessingDevice *applicationProcessingDevice;
@property (nonatomic, readonly) VNProcessingDevice *espressoBasedRequestProcessingDevice;
@property (nonatomic, readonly) VNProcessingDevice *graphicsProcessingDevice;
@property (nonatomic, readonly) VNProcessingDevice *neuralProcessingDevice;

+ (void)initialize;

- (id)applicationProcessingDevice;
- (void)dealloc;
- (id)espressoBasedRequestProcessingDevice;
- (id)graphicsProcessingDevice;
- (id)inferenceProviderForType:(int)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int*)arg5;
- (id)init;
- (id)neuralProcessingDevice;

@end
