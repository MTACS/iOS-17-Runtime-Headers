
@interface DTTapRemote : DTTap {
    DTXChannel * _channel;
    DTXConnection * _connection;
    bool  _connectionEnabled;
    DTTapMessageHandler * _messageHandler;
    NSObject<OS_dispatch_queue> * _unprocessedMessageQueue;
}

@property (nonatomic, readonly, retain) DTTapMessageHandler *messageHandler;

- (void).cxx_destruct;
- (id)_fetchDataForReason:(unsigned long long)arg1;
- (void)_pause;
- (void)_start;
- (void)_stop;
- (void)_unpause;
- (id)initWithConfig:(id)arg1 memoHandler:(id)arg2 messageHandler:(id)arg3 connection:(id)arg4;
- (id)messageHandler;
- (void)messageReceived:(id)arg1;

@end
