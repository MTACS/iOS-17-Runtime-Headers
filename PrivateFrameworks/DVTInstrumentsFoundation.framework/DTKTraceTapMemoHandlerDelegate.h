
@interface DTKTraceTapMemoHandlerDelegate : NSObject <DTTapMemoHandlerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)peekAtMemo:(id)arg1;
- (void)sendDataMemo:(id)arg1 toBulkReceiver:(id)arg2;
- (void)sendDataMemo:(id)arg1 toClientUsingConfig:(id)arg2;
- (void)sendHeartbeatMemo:(id)arg1 toClientUsingConfig:(id)arg2;

@end
