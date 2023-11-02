
@interface __NSURLSessionWebSocketTask : __NSCFLocalSessionTask {
    long long  _closeCode;
    NSData * _closeReason;
    NSMutableArray * _delegateWork;
    NSMutableArray * _highPriorityPendingWork;
    long long  _maximumMessageSize;
    NSMutableArray * _pendingReceiveWork;
    NSMutableArray * _pendingSendWork;
    int  _pingSeed;
    NSString * _protocolPicked;
    bool  _readInProgress;
    NSError * _webSocketError;
    bool  _webSocketHandshakeCompleted;
    NSObject<OS_nw_protocol_options> * _wsOptions;
}

@property (readonly) long long closeCode;
@property (readonly, copy) NSData *closeReason;
@property long long maximumMessageSize;

- (void).cxx_destruct;
- (void)_onqueue_cancel;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_onqueue_resume;
- (void)_sendCloseCode:(long long)arg1 reason:(id)arg2;
- (void)cancel;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (long long)closeCode;
- (id)closeReason;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)dealloc;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (bool)isKindOfClass:(Class)arg1;
- (long long)maximumMessageSize;
- (void)receiveMessageWithCompletionHandler:(id /* block */)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendPingWithPongReceiveHandler:(id /* block */)arg1;
- (void)setMaximumMessageSize:(long long)arg1;

@end
