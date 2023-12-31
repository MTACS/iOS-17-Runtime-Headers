
@protocol PXRunNode <NSObject>

@required

- (void)cancel;
- (<PXRunNodeDelegate> *)delegate;
- (NSArray *)dependencies;
- (bool)isCanceled;
- (bool)isComplete;
- (bool)isRunning;
- (bool)isWaiting;
- (void)setDelegate:(id <PXRunNodeDelegate>)arg1;
- (unsigned long long)state;

@end
