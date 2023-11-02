
@interface WLServerConnection : NSObject <WLConnection> {
    NSMutableSet * _connections;
    <WLServerConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    int  _sockfd;
}

@property (nonatomic) <WLServerConnectionDelegate> *delegate;

- (void).cxx_destruct;
- (void)_accept:(int)arg1;
- (bool)_isTerminated:(const char *)arg1 length:(long long)arg2;
- (int)_listen:(int)arg1;
- (void)_read:(int)arg1;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)listen:(int)arg1;
- (void)setDelegate:(id)arg1;

@end
