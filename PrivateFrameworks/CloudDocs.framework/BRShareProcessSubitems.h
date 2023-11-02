
@interface BRShareProcessSubitems : BRShareOperation {
    unsigned long long  _maxSharedSubitemsBeforeFailure;
    id /* block */  _processSubitemsCompletionBlock;
    unsigned long long  _processType;
}

@property (nonatomic) unsigned long long maxSharedSubitemsBeforeFailure;
@property (copy) id /* block */ processSubitemsCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1 processType:(unsigned long long)arg2;
- (void)main;
- (unsigned long long)maxSharedSubitemsBeforeFailure;
- (id /* block */)processSubitemsCompletionBlock;
- (void)setMaxSharedSubitemsBeforeFailure:(unsigned long long)arg1;
- (void)setProcessSubitemsCompletionBlock:(id /* block */)arg1;

@end
