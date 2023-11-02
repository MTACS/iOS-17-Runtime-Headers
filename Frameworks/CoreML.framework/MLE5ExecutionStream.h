
@interface MLE5ExecutionStream : NSObject {
    NSArray * _operations;
    bool  _preparedForAsyncSubmission;
    struct e5rt_execution_stream { } * _streamHandle;
}

@property (nonatomic, copy) NSArray *operations;
@property (nonatomic) bool preparedForAsyncSubmission;
@property (nonatomic) struct e5rt_execution_stream { }*streamHandle;
@property (nonatomic, readonly) unsigned long long streamId;

- (void).cxx_destruct;
- (bool)_executeStream:(struct e5rt_execution_stream { }*)arg1 error:(id*)arg2;
- (bool)_prepareAndEncodeOperationsWithOptions:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)executeWithOptions:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)operations;
- (bool)prepareAndEncodeOperationsForAsyncSubmission:(id)arg1 error:(id*)arg2;
- (bool)preparedForAsyncSubmission;
- (void)reset;
- (void)setOperations:(id)arg1;
- (void)setPreparedForAsyncSubmission:(bool)arg1;
- (void)setStreamHandle:(struct e5rt_execution_stream { }*)arg1;
- (struct e5rt_execution_stream { }*)streamHandle;
- (unsigned long long)streamId;
- (void)submitWithCompletionHandler:(id /* block */)arg1;

@end
