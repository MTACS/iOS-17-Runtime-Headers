
@interface CATBlockCancellable : NSObject <CATCancelable> {
    id /* block */  _cancellationBlock;
}

@property (nonatomic, copy) id /* block */ cancellationBlock;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)cancellationBlock;
- (id)init;
- (id)initWithCancellables:(id)arg1;
- (id)initWithCancellationBlock:(id /* block */)arg1;
- (void)setCancellationBlock:(id /* block */)arg1;

@end
