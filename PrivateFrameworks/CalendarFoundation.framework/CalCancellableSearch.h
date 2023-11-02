
@interface CalCancellableSearch : NSObject {
    id /* block */  _cancellationBlock;
}

@property (nonatomic, copy) id /* block */ cancellationBlock;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)cancellationBlock;
- (id)initWithCancellationBlock:(id /* block */)arg1;
- (void)setCancellationBlock:(id /* block */)arg1;

@end
