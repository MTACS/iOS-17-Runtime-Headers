
@interface PLPhotoAnalysisExecutiveService : NSObject {
    _Atomic unsigned long long  _operationID;
    <PLPhotoAnalysisServiceProvider> * _serviceProvider;
}

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithServiceProvider:(id)arg1;
- (void)performOnDemandTaskWithName:(id)arg1 reply:(id /* block */)arg2;
- (void)requestActivityStatusWithReply:(id /* block */)arg1;
- (void)requestAnalysisStatusWithReply:(id /* block */)arg1;

@end
