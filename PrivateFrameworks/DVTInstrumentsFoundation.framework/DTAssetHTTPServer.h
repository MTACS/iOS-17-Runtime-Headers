
@interface DTAssetHTTPServer : NSObject <GCDAsyncSocketDelegate> {
    NSSet * _allowedResources;
    DTXChannel * _channel;
    _DT_GCDAsyncSocket * _socket;
    NSObject<OS_dispatch_queue> * _socketDelegateQueue;
}

@property (nonatomic, retain) NSSet *allowedResources;
@property (retain) DTXChannel *channel;
@property (readonly) unsigned long long port;
@property (retain) _DT_GCDAsyncSocket *socket;
@property (retain) NSObject<OS_dispatch_queue> *socketDelegateQueue;

- (void).cxx_destruct;
- (id)allowedResources;
- (id)channel;
- (unsigned long long)port;
- (void)setAllowedResources:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setSocket:(id)arg1;
- (void)setSocketDelegateQueue:(id)arg1;
- (id)socket;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (id)socketDelegateQueue;
- (bool)startListeningWithError:(id*)arg1;
- (void)stopListening;

@end
