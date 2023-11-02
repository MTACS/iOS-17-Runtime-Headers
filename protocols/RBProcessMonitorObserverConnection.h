
@protocol RBProcessMonitorObserverConnection <NSObject>

@required

- (void)sendMessage:(void *)arg1 replyQueue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: RBSXPCMessage *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
