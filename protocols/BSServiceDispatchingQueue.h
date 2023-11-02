
@protocol BSServiceDispatchingQueue <NSObject>

@required

- (void)assertBarrierOnQueue;
- (NSObject<OS_dispatch_queue> *)backingQueueIfExists;
- (void)performAsync:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performAsync:(void *)arg1 withHandoff:(void *)arg2; // needs 2 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, NSObject<OS_xpc_object> *

@end
