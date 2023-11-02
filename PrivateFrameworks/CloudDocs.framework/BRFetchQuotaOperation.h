
@interface BRFetchQuotaOperation : BROperation {
    id /* block */  _fetchQuotaCompletionBlock;
}

@property (copy) id /* block */ fetchQuotaCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)fetchQuotaCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)setFetchQuotaCompletionBlock:(id /* block */)arg1;

@end
