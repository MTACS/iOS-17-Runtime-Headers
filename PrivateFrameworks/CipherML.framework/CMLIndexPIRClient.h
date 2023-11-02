
@interface CMLIndexPIRClient : CMLPIRClient

+ (id)new;

- (id)constructPIRBatchRequestWithIndices:(id)arg1 error:(id*)arg2;
- (id)constructPIRRequestWithIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)dataByIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)dataByIndices:(id)arg1 error:(id*)arg2;
- (id)decryptPIRBatchResponse:(id)arg1 indices:(id)arg2 error:(id*)arg3;
- (id)decryptPIRResponse:(id)arg1 index:(unsigned long long)arg2 error:(id*)arg3;
- (id)init;
- (void)requestDataByIndex:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)requestDataByIndices:(id)arg1 completionHandler:(id /* block */)arg2;

@end
