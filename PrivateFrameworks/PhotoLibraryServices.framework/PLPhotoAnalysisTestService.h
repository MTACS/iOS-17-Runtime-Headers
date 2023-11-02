
@interface PLPhotoAnalysisTestService : NSObject {
    _Atomic unsigned long long  _operationID;
    <PLPhotoAnalysisServiceProvider> * _serviceProvider;
}

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithServiceProvider:(id)arg1;
- (unsigned long long)performAsyncLongOperationWithReply:(id /* block */)arg1;
- (id)performGetString;

@end
