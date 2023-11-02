
@interface NRWebURLResolutionOperation : FCOperation <NRURLResolutionOperation> {
    <NRBloomFilterInfoService> * _bloomFilterInfoService;
    id /* block */  _resolutionCompletion;
    NSURL * _resultNewsURL;
    NSURL * _webURL;
}

@property (nonatomic, readonly) <NRBloomFilterInfoService> *bloomFilterInfoService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ resolutionCompletion;
@property (nonatomic, copy) NSURL *resultNewsURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *webURL;

- (void).cxx_destruct;
- (id)bloomFilterInfoService;
- (id)init;
- (id)initWithWebURL:(id)arg1 bloomFilterInfoService:(id)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)resolutionCompletion;
- (id)resultNewsURL;
- (void)setResolutionCompletion:(id /* block */)arg1;
- (void)setResultNewsURL:(id)arg1;
- (bool)validateOperation;
- (id)webURL;

@end
