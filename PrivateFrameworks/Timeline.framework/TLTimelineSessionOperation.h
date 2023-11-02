
@interface TLTimelineSessionOperation : NSOperation {
    NSOperationQueue * _operationQueue;
    double  _operationTimeout;
    NSArray * _operations;
    <TLTimelineDataSourceProvider> * _provider;
    double  _providerTimeout;
    id /* block */  _sessionCompletionBlock;
    NSError * _sessionError;
}

@property (copy) id /* block */ completionBlock;
@property (nonatomic, readonly, copy) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) double operationTimeout;
@property (nonatomic, readonly, copy) NSArray *operations;
@property (nonatomic, readonly) <TLTimelineDataSourceProvider> *provider;
@property (nonatomic, readonly) double providerTimeout;
@property (copy) id /* block */ sessionCompletionBlock;
@property (copy) NSError *sessionError;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithProvider:(id)arg1 operations:(id)arg2 providerTimeout:(double)arg3 operationTimeout:(double)arg4;
- (void)main;
- (id)operationQueue;
- (double)operationTimeout;
- (id)operations;
- (id)provider;
- (double)providerTimeout;
- (id /* block */)sessionCompletionBlock;
- (id)sessionError;
- (void)setSessionCompletionBlock:(id /* block */)arg1;
- (void)setSessionError:(id)arg1;

@end
