
@interface CMContinuityCaptureRapportServer : CMContinuityCaptureRapportTransportBase <ContinuityCaptureDeviceServer> {
    long long  _clientDeviceModel;
    CMContinuityCaptureRemoteCompositeDevice * _compositeDevice;
    unsigned long long  _currentSessionID;
    long long  _currentTransport;
    <ContinuityCaptureTaskDelegate> * _delegate;
    CMContinuityCaptureTransportRapportDevice * _device;
    NSString * _peerAddress;
    NSMutableDictionary * _pendingActivateStreamsByIdentifier;
    CMContinuityCaptureConfiguration * _preStartConfiguration;
    NSObject<OS_dispatch_queue> * _queue;
    RPRemoteDisplaySession * _rpDisplaySession;
    NSDate * _sessionActivationStartTime;
    CMContinuityCaptureTimeSyncClock * _timeSyncClock;
    NSObject<OS_voucher> * _voucher;
}

@property (readonly) long long clientDeviceModel;
@property (readonly, retain) CMContinuityCaptureRemoteCompositeDevice *compositeDevice;
@property unsigned long long currentSessionID;
@property (readonly) long long currentTransport;
@property (readonly, copy) NSString *debugDescription;
@property <ContinuityCaptureTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) RPRemoteDisplaySession *displaySession;
@property (readonly) unsigned long long hash;
@property (readonly, retain) <ContinuityCaptureTransportDevice> *localDevice;
@property (readonly) CMContinuityCaptureConfiguration *preStartConfiguration;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain) NSDate *sessionActivationStartTime;
@property (readonly) Class superclass;
@property (readonly, retain) CMContinuityCaptureTimeSyncClock *timeSyncClock;

+ (id)rapportDeviceForSession:(id)arg1;

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (long long)clientDeviceModel;
- (id)compositeDevice;
- (void)createStreamWithIdentifier:(id)arg1 isMediaStream:(bool)arg2 completion:(id /* block */)arg3;
- (unsigned long long)currentSessionID;
- (long long)currentTransport;
- (id)delegate;
- (id)displaySession;
- (id)initWithRapportDisplaySession:(id)arg1 queue:(id)arg2 voucher:(id)arg3 incomingStreamRequestHandler:(id /* block */)arg4;
- (void)invalidateCurrentSession:(id /* block */)arg1;
- (id)localDevice;
- (void)parseAndNotifySessionStartInfo:(id)arg1 transportInfo:(id)arg2;
- (id)preStartConfiguration;
- (id)queue;
- (void)relayTerminationComplete;
- (void)resetDisplaySession:(id)arg1;
- (id)sessionActivationStartTime;
- (void)setCurrentSessionID:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupRemoteDisplaySession:(id)arg1;
- (id)timeSyncClock;

@end
