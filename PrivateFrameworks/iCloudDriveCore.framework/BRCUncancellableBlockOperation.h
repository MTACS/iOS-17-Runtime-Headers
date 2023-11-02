
@interface BRCUncancellableBlockOperation : NSBlockOperation

- (void)cancel;
- (bool)isCancelled;

@end
