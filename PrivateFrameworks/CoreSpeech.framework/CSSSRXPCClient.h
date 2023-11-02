
@interface CSSSRXPCClient : NSObject <CSSSRXPCServiceDelegate> {
    <CSSSRXPCClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remoteObjectProxy;
    NSXPCConnection * _ssrConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (nonatomic) <CSSSRXPCClientDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) id remoteObjectProxy;
@property (nonatomic, retain) NSXPCConnection *ssrConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcConnectionQueue;

- (void).cxx_destruct;
- (void)_createClientConnection;
- (id)_getRemoteServiceProxyObject;
- (void)dealloc;
- (id)delegate;
- (void)didFinishSpeakerRecognition:(id)arg1;
- (void)didReceiveSpeakerRecognitionScoreCard:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)queue;
- (id)remoteObjectProxy;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setSsrConnection:(id)arg1;
- (void)setXpcConnectionQueue:(id)arg1;
- (id)ssrConnection;
- (void)startXPCConnection;
- (id)xpcConnectionQueue;

@end
