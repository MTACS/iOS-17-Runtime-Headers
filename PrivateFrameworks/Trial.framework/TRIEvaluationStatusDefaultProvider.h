
@interface TRIEvaluationStatusDefaultProvider : NSObject <TRIEvaluationStatusProvider> {
    _PASXPCClientHelper * _clientHelper;
}

- (void).cxx_destruct;
- (bool)enumerateActiveBMLTWithError:(id*)arg1 block:(id /* block */)arg2;
- (bool)enumerateActiveEvaluationsForMLRuntimeWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)enumerateStatusOfEvaluationsForMLRuntimeWithCursor:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)init;
- (id)syncProxyWithErrorHandler:(id /* block */)arg1;

@end
