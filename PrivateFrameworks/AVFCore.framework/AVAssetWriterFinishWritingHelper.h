
@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {
    struct OpaqueFigAssetWriter { } * _figAssetWriter;
    void * _figAssetWriterCallbackContextToken;
    NSArray * _finishWritingOperations;
    NSOperation * _transitionToTerminalStatusOperation;
}

@property (nonatomic, readonly) NSOperation *transitionToTerminalStatusOperation;

- (void)_finishWritingOperationsDidFinish;
- (bool)_isDefunct;
- (void)cancelWriting;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2 figAssetWriterCallbackContextToken:(void*)arg3 figAssetWriter:(struct OpaqueFigAssetWriter { }*)arg4;
- (long long)status;
- (id)transitionToTerminalStatusOperation;

@end
