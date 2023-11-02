
@interface _CATLongRunningTaskOperation : CATTaskOperation

- (void)cancel;
- (bool)isAsynchronous;
- (void)main;

@end
