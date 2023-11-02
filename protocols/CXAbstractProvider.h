
@protocol CXAbstractProvider <NSObject>

@required

- (void)invalidate;
- (NSArray *)pendingTransactions;
- (void)setDelegate:(id <CXAbstractProviderDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;

@end
