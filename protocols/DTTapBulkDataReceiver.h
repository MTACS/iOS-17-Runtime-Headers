
@protocol DTTapBulkDataReceiver <NSObject>

@required

- (void)handleBulkData:(NSData *)arg1;
- (void)handleBulkData:(void *)arg1 size:(void *)arg2 destructor:(void *)arg3; // needs 3 arg types, found 7: const void*, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sendFrameMessage:(DTTapMessage *)arg1;
- (void)sendHeartbeatTime:(unsigned long long)arg1;

@end
