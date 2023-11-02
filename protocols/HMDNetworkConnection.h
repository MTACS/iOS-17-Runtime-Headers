
@protocol HMDNetworkConnection <NSObject>

@required

- (void)cancel;
- (NSObject<OS_nw_connection> *)nwConnection;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)receiveMessageWithCompletion:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_dispatch_data> *, NSObject<OS_nw_content_context> *, bool, NSError *, void*
- (void)receiveWithMinLength:(void *)arg1 maxLength:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_dispatch_data> *, NSObject<OS_nw_content_context> *, bool, NSError *, void*
- (void)resetTrafficClass:(unsigned long long)arg1;
- (void)sendData:(void *)arg1 context:(void *)arg2 isComplete:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSObject<OS_dispatch_data> *, NSObject<OS_nw_content_context> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setReadCloseHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setStateChangedHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)start;

@end
