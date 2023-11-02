
@protocol _HMNetworkConnection <NSObject>

@required

- (void)cancel;
- (NSObject<OS_nw_connection> *)nwConnection;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)receiveMessageWithCompletion:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_dispatch_data> *, NSObject<OS_nw_content_context> *, bool, NSObject<OS_nw_error> *, void*
- (void)sendData:(void *)arg1 context:(void *)arg2 isComplete:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSObject<OS_dispatch_data> *, NSObject<OS_nw_content_context> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_nw_error> *, void*
- (void)setPathChangedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_HMNetworkPath> *, void*
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setStateChangedHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSObject<OS_nw_error> *, void*
- (void)setViabilityChangedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)start;

@end
