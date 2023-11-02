
@interface GKAsyncSocket : NSObject

@property (nonatomic, copy) id /* block */ connectedHandler;
@property (nonatomic, copy) id /* block */ receiveDataHandler;
@property (nonatomic, retain) id socketName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetQueue;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id /* block */)connectedHandler;
- (void)invalidate;
- (id /* block */)receiveDataHandler;
- (void)sendData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setConnectedHandler:(id /* block */)arg1;
- (void)setReceiveDataHandler:(id /* block */)arg1;
- (void)setSocketName:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (id)socketName;
- (id)syncQueue;
- (id)targetQueue;
- (void)tcpAttachSocketDescriptor:(int)arg1;
- (void)tcpConnectSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2;

@end
