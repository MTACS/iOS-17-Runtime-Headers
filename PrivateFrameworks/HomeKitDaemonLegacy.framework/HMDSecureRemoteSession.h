
@interface HMDSecureRemoteSession : HMFMessageTransport <HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDSecureRemoteSession, HMDSecureRemoteStreamDelegate, HMFLogging, HMFTimerDelegate> {
    HMDAccountRegistry * _accountRegistry;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableArray * _clientStreams;
    <HMDSecureRemoteSessionDataSource> * _dataSource;
    HMDDevice * _device;
    HMDRemoteDeviceMonitor * _deviceMonitor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _maximumRemoteStreams;
    NSMutableArray * _pendingMessages;
    bool  _reachable;
    NSMutableArray * _serverStreams;
    long long  _state;
}

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly, copy) NSArray *clientStreams;
@property (nonatomic, readonly) <HMDSecureRemoteSessionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMFMessageTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (nonatomic, readonly) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumRemoteStreams;
@property (nonatomic, readonly, copy) NSArray *pendingMessages;
@property (getter=isReachable, nonatomic) bool reachable;
@property (nonatomic, readonly, copy) NSArray *serverStreams;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

+ (bool)isSecureRemoteSessionMessage:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_clientStreamForMessage:(id)arg1;
- (id)_clientStreamWithIdentiifer:(id)arg1;
- (void)_closeClientStream:(id)arg1 error:(id)arg2;
- (void)_closeServerStream:(id)arg1 error:(id)arg2;
- (void)_closeWithError:(id)arg1;
- (id)_dequeMessage;
- (void)_handleSecureClientMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;
- (void)_handleSecureServerMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;
- (void)_handleStreamInvalidationMessage:(id)arg1;
- (void)_openClientStreamWithCompletionHandler:(id /* block */)arg1;
- (void)_openServerStreamWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queueMessage:(id)arg1;
- (id)_serverStreamWithIdentifier:(id)arg1;
- (id)accountRegistry;
- (id)clientQueue;
- (id)clientStreams;
- (void)close;
- (id)dataSource;
- (void)dealloc;
- (id)device;
- (id)deviceMonitor;
- (id)dumpState;
- (void)handleDeviceIsNotReachable:(id)arg1;
- (void)handleDeviceIsReachable:(id)arg1;
- (id)init;
- (id)initWithDevice:(id)arg1 deviceMonitor:(id)arg2 accountRegistry:(id)arg3;
- (id)initWithDevice:(id)arg1 deviceMonitor:(id)arg2 accountRegistry:(id)arg3 dataSource:(id)arg4;
- (bool)isReachable;
- (id)logIdentifier;
- (unsigned long long)maximumRemoteStreams;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)pendingMessages;
- (void)receivedSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3;
- (void)secureRemoteStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)secureRemoteStream:(id)arg1 receivedRequestToSendMessage:(id)arg2;
- (void)secureRemoteStreamIsIdle:(id)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serverStreams;
- (void)setMaximumRemoteStreams:(unsigned long long)arg1;
- (void)setReachable:(bool)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)timerDidFire:(id)arg1;

@end
