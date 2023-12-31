
@protocol DTTapMemoHandlerDelegate <NSObject>

@required

- (void)sendDataMemo:(DTTapDataMemo *)arg1 toBulkReceiver:(id <DTTapBulkDataReceiver>)arg2;
- (void)sendDataMemo:(DTTapDataMemo *)arg1 toClientUsingConfig:(DTTapConfig *)arg2;
- (void)sendHeartbeatMemo:(DTTapHeartbeatMemo *)arg1 toClientUsingConfig:(DTTapConfig *)arg2;

@optional

- (NSDictionary *)peekAtMemo:(DTTapDataMemo *)arg1;

@end
