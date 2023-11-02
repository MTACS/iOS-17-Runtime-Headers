
@protocol AMSMetricsFlushStrategy

@required

- (bool)cancel;
- (bool)isCancelled;
- (AMSPromise *)performFlush;

@end
