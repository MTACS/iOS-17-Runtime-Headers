
@interface MRULongPressGestureRecognizer : UILongPressGestureRecognizer {
    NSMutableArray * _cancellationHandlers;
}

@property (nonatomic, retain) NSMutableArray *cancellationHandlers;

- (void).cxx_destruct;
- (void)addCancellationHandler:(id /* block */)arg1;
- (id)cancellationHandlers;
- (void)setCancellationHandlers:(id)arg1;
- (void)setState:(long long)arg1;

@end
