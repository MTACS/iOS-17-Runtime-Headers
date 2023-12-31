
@protocol GCDAsyncSocketDelegate

@optional

- (NSObject<OS_dispatch_queue> *)newSocketQueueForConnectionFromAddress:(NSData *)arg1 onSocket:(_DT_GCDAsyncSocket *)arg2;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didAcceptNewSocket:(_DT_GCDAsyncSocket *)arg2;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didReadData:(NSData *)arg2 withTag:(long long)arg3;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(void *)arg1 didReceiveTrust:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: _DT_GCDAsyncSocket *, struct __SecTrust { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(_DT_GCDAsyncSocket *)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (double)socket:(_DT_GCDAsyncSocket *)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (double)socket:(_DT_GCDAsyncSocket *)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)socketDidCloseReadStream:(_DT_GCDAsyncSocket *)arg1;
- (void)socketDidDisconnect:(_DT_GCDAsyncSocket *)arg1 withError:(NSError *)arg2;
- (void)socketDidSecure:(_DT_GCDAsyncSocket *)arg1;

@end
