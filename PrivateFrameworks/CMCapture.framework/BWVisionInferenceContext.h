
@interface BWVisionInferenceContext : NSObject {
    VNSequenceRequestHandler * _sequenceRequestHandler;
}

@property (getter=isPrepared, nonatomic, readonly) bool prepared;
@property (nonatomic, readonly) VNSequenceRequestHandler *sequenceRequestHandler;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (bool)isPrepared;
- (int)prepareForInference;
- (id)sequenceRequestHandler;

@end
