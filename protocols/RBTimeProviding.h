
@protocol RBTimeProviding <NSObject>

@required

- (double)currentTime;
- (void)executeAfter:(void *)arg1 onQueue:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: double, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<RBTimeProvidingEvent> *)executeWithCancellingAfter:(void *)arg1 onQueue:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: double, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (double)startTimeForProcess:(RBProcess *)arg1;

@end
