
@interface WBSRetryableCKAcceptSharesOperation : WBSRetryableCKOperation {
    id /* block */  _acceptSharesCompletionBlock;
    id /* block */  _perShareCompletionBlock;
    NSArray * _shareMetadatas;
}

@property (nonatomic, copy) id /* block */ acceptSharesCompletionBlock;
@property (nonatomic, copy) id /* block */ perShareCompletionBlock;
@property (nonatomic, copy) NSArray *shareMetadatas;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)arg1;
- (id /* block */)acceptSharesCompletionBlock;
- (id /* block */)perShareCompletionBlock;
- (void)setAcceptSharesCompletionBlock:(id /* block */)arg1;
- (void)setPerShareCompletionBlock:(id /* block */)arg1;
- (void)setShareMetadatas:(id)arg1;
- (id)shareMetadatas;

@end
