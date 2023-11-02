
@interface HMDDataStream : NSObject <HMFLogging, HMFTimerDelegate> {
    bool  _active;
    HMFTimer * _connectionTimer;
    HMDDataStreamControlProtocol * _controlProtocol;
    <HMDDataStreamDelegate> * _delegate;
    bool  _firstMessageReceived;
    HMFTimer * _helloMessageResponseTimer;
    NSString * _logIdentifier;
    unsigned long long  _nextRequestIdentifier;
    NSMutableArray * _pendingEvents;
    NSMutableSet * _pendingRequests;
    NSMapTable * _protocols;
    HAPSecuritySessionEncryption * _sessionEncryption;
    <HMDDataStreamTransport> * _transport;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) HMFTimer *connectionTimer;
@property (nonatomic, retain) HMDDataStreamControlProtocol *controlProtocol;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDDataStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool firstMessageReceived;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMFTimer *helloMessageResponseTimer;
@property (readonly, copy) NSString *logIdentifier;
@property (nonatomic) unsigned long long nextRequestIdentifier;
@property (nonatomic, readonly) NSMutableArray *pendingEvents;
@property (nonatomic, readonly) NSMutableSet *pendingRequests;
@property (nonatomic, retain) NSMapTable *protocols;
@property (nonatomic, retain) HAPSecuritySessionEncryption *sessionEncryption;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HMDDataStreamTransport> *transport;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addProtocol:(id)arg1 name:(id)arg2;
- (void)close;
- (void)connect;
- (id)connectionTimer;
- (id)controlProtocol;
- (id)delegate;
- (bool)firstMessageReceived;
- (id)helloMessageResponseTimer;
- (id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4;
- (id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4 connectionTimer:(id)arg5 helloMessageResponseTimer:(id)arg6;
- (bool)isActive;
- (id)logIdentifier;
- (unsigned long long)nextRequestIdentifier;
- (id)pendingEvents;
- (id)pendingRequests;
- (id)protocolDelegateHandle;
- (void)protocolDidUpdateActiveStatus:(id)arg1;
- (id)protocolWithName:(id)arg1;
- (id)protocols;
- (void)sendEventForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(id /* block */)arg4;
- (void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 identifier:(unsigned long long)arg3 payload:(id)arg4 completion:(id /* block */)arg5;
- (void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(id /* block */)arg4;
- (void)sendResponseForRequestHeader:(id)arg1 payload:(id)arg2 status:(unsigned short)arg3 completion:(id /* block */)arg4;
- (id)sessionEncryption;
- (void)setActive:(bool)arg1;
- (void)setConnectionTimer:(id)arg1;
- (void)setControlProtocol:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstMessageReceived:(bool)arg1;
- (void)setHelloMessageResponseTimer:(id)arg1;
- (void)setNextRequestIdentifier:(unsigned long long)arg1;
- (void)setProtocols:(id)arg1;
- (void)setSessionEncryption:(id)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;
- (void)setTransport:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)transport;
- (void)transport:(id)arg1 didFailWithError:(id)arg2;
- (void)transport:(id)arg1 didReceiveRawFrame:(id)arg2;
- (void)transportDidClose:(id)arg1;
- (void)transportDidOpen:(id)arg1;
- (id)workQueue;

@end
