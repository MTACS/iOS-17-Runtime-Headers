
@interface FPFetchDefaultContainerOperation : FPActionOperation {
    NSString * _domainIdentifier;
    id /* block */  _fetchCompletionBlock;
    LSApplicationRecord * _requestedRecord;
}

@property (nonatomic, copy) id /* block */ fetchCompletionBlock;

- (void).cxx_destruct;
- (void)actionMain;
- (id /* block */)fetchCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initForApplicationRecord:(id)arg1 providerDomain:(id)arg2;
- (void)setFetchCompletionBlock:(id /* block */)arg1;

@end
