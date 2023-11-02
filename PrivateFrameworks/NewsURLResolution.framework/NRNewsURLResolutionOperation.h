
@interface NRNewsURLResolutionOperation : FCOperation <NRURLResolutionOperation> {
    NSURL * _newsURL;
    id /* block */  _resolutionCompletion;
    NSURL * _resultWebURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *newsURL;
@property (nonatomic, copy) id /* block */ resolutionCompletion;
@property (nonatomic, copy) NSURL *resultWebURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithNewsURL:(id)arg1;
- (id)newsURL;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)resolutionCompletion;
- (id)resultWebURL;
- (void)setResolutionCompletion:(id /* block */)arg1;
- (void)setResultWebURL:(id)arg1;
- (bool)validateOperation;

@end
