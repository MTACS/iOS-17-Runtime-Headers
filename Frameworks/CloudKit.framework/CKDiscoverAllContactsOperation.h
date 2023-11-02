
@interface CKDiscoverAllContactsOperation : CKOperation {
    id /* block */  _discoverAllContactsCompletionBlock;
}

@property (nonatomic, copy) id /* block */ discoverAllContactsCompletionBlock;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (id /* block */)discoverAllContactsCompletionBlock;
- (void)setDiscoverAllContactsCompletionBlock:(id /* block */)arg1;

@end
