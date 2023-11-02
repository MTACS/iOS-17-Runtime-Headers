
@protocol SNConnectionProtocol

@required

- (void)cancelSynchronously:(void *)arg1 isOnConnectionQueue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)getSNConnectionMetrics:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SNConnectionMetrics *, void*
- (void)sendData:(NSObject<OS_dispatch_data> *)arg1;
- (void)setSendPings:(bool)arg1;
- (NSError *)start;

@end
