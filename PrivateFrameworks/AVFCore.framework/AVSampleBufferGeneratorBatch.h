
@interface AVSampleBufferGeneratorBatch : NSObject {
    id /* block */  _completionHandler;
    bool  _openToRequests;
    AVSampleBufferGenerator * _sampleGenerator;
    struct OpaqueFigSampleGeneratorBatch { } * _sampleGeneratorBatch;
    struct OpaqueFigSimpleMutex { } * _stateMutex;
}

@property (nonatomic, readonly) AVSampleBufferGenerator *_generator;

+ (void)initialize;

- (id /* block */)_completionHandler;
- (id)_generator;
- (void)cancel;
- (struct opaqueCMSampleBuffer { }*)createAndAddSampleBufferForRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithGenerator:(id)arg1;
- (bool)isOpenToRequests;
- (void)makeDataReadyWithCompletionHandler:(id /* block */)arg1;

@end
