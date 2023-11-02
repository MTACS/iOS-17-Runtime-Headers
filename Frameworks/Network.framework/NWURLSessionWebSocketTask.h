
@interface NWURLSessionWebSocketTask : NWURLSessionTask {
    long long  _closeCode;
    NSData * _closeReason;
    long long  _maximumMessageSize;
    NSError * _pendingError;
    NSMutableArray * _pendingReceiveCompletionHandlers;
    NSMutableArray * _pendingWork;
    unsigned short  _pingSeed;
    bool  _receiving;
    NSURLResponse * _storedResponse;
    NWConcrete_nw_connection * _upgradedConnection;
}

@property (nonatomic, readonly) long long closeCode;
@property (nonatomic, readonly, copy) NSData *closeReason;
@property (nonatomic) long long maximumMessageSize;

- (void).cxx_destruct;
- (void)_sendCloseCode:(long long)arg1 reason:(id)arg2;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (long long)closeCode;
- (id)closeReason;
- (void)completeTaskWithError:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (long long)maximumMessageSize;
- (void)receiveMessageWithCompletionHandler:(id /* block */)arg1;
- (id)response;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendPingWithPongReceiveHandler:(id /* block */)arg1;
- (void)setMaximumMessageSize:(long long)arg1;
- (void)startNextLoad:(bool)arg1;

@end
