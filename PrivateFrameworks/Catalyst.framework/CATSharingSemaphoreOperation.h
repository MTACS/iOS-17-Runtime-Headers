
@interface CATSharingSemaphoreOperation : CATOperation

- (void)cancel;
- (bool)isAsynchronous;
- (void)signal;

@end
