
@interface STSTestReader : STSReader

- (void)sendDocumentRequest:(id)arg1 timeoutInterval:(double)arg2 responseHandler:(id /* block */)arg3;
- (id)startWithHandoverType:(unsigned long long)arg1 connectionHandler:(id /* block */)arg2 invalidationErrorHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)startWithHandoverType:(unsigned long long)arg1 connectionHandler:(id /* block */)arg2 invalidationHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)startWithHandoverType:(unsigned long long)arg1 tnepStatusHandler:(id /* block */)arg2 connectionHandler:(id /* block */)arg3 invalidationErrorHandler:(id /* block */)arg4 completion:(id /* block */)arg5;

@end
