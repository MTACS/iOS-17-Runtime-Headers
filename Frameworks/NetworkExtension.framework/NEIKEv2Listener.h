
@interface NEIKEv2Listener : NSObject <NEIKEv2ConfigurationDelegate, NEIKEv2TransportDelegate> {
    bool  _cancelled;
    <NEIKEv2ListenerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NEIKEv2IKESAConfiguration * _ikeConfig;
    NSString * _kernelSASessionName;
    NSObject<OS_nw_listener> * _listener;
    NSObject<OS_dispatch_queue> * _listenerQueue;
    <NEIKEv2PacketDelegate> * _packetDelegate;
    NEIPSecSASession * _saSession;
    NSMutableArray * _sessionsBeforeAuth;
    NEIKEv2Transport * _transport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *listenerQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithListenerIKEConfig:(id)arg1 kernelSASessionName:(id)arg2 listenerUDPPort:(id)arg3 listenerInterface:(id)arg4 listenerQueue:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7;
- (id)initWithListenerIKEConfig:(id)arg1 kernelSASessionName:(id)arg2 listenerUDPPort:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)initWithListenerIKEConfig:(id)arg1 kernelSASessionName:(id)arg2 listenerUDPPort:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 includeP2P:(bool)arg7;
- (id)initWithListenerIKEConfig:(id)arg1 kernelSASessionName:(id)arg2 packetDelegate:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 listenerUDPPort:(id)arg3 listenerInterface:(id)arg4 listenerQueue:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7;
- (id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 listenerUDPPort:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 packetDelegate:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)listenerQueue;
- (void)receivePacket:(id)arg1;
- (void)reportError:(int)arg1;
- (void)requestConfigurationForSession:(id)arg1 sessionConfig:(id)arg2 childConfig:(id)arg3 validateAuthBlock:(id /* block */)arg4 responseBlock:(id /* block */)arg5;
- (void)sessionFailedBeforeRequestingConfiguration:(id)arg1;

@end
