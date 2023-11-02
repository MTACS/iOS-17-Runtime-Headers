
@interface CMLKeywordPIRClient : CMLPIRClient

+ (id)new;

- (id)asyncResponseDataByKeyword:(id)arg1 error:(id*)arg2;
- (id)asyncResponseDataByKeywords:(id)arg1 error:(id*)arg2;
- (id)constructPIRBatchRequestWithKeywords:(id)arg1 error:(id*)arg2;
- (id)constructPIRRequestWithKeyword:(id)arg1 error:(id*)arg2;
- (id)dataByKeyword:(id)arg1 error:(id*)arg2;
- (id)dataByKeywords:(id)arg1 error:(id*)arg2;
- (id)dataByStringKeyword:(id)arg1 error:(id*)arg2;
- (id)dataByStringKeywords:(id)arg1 error:(id*)arg2;
- (id)decryptPIRBatchResponse:(id)arg1 keywords:(id)arg2 error:(id*)arg3;
- (id)decryptPIRResponse:(id)arg1 keyword:(id)arg2 error:(id*)arg3;
- (id)init;
- (void)requestDataByKeyword:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestDataByKeywords:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestDataByStringKeyword:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestDataByStringKeywords:(id)arg1 completionHandler:(id /* block */)arg2;

@end
