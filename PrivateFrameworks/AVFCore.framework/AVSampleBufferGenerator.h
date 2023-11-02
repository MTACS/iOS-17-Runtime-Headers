
@interface AVSampleBufferGenerator : NSObject {
    AVSampleBufferGeneratorInternal * _generator;
}

+ (void)initialize;
+ (void)notifyOfDataReadyForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 completionHandler:(id /* block */)arg2;

- (struct OpaqueFigSampleGenerator { }*)_figSampleGenerator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct opaqueCMSampleBuffer { }*)createSampleBufferForRequest:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)createSampleBufferForRequest:(id)arg1 addingToBatch:(id)arg2 error:(id*)arg3;
- (struct opaqueCMSampleBuffer { }*)createSampleBufferForRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1 timebase:(struct OpaqueCMTimebase { }*)arg2;
- (id)makeBatch;

@end
