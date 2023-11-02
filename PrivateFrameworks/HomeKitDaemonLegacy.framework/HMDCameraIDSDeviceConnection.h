
@interface HMDCameraIDSDeviceConnection : HMFObject <HMDCameraRemoteStreamProtocol, HMDIDSServiceDelegate, HMFLogging, HMFTimerDelegate> {
    NSObject<OS_dispatch_queue> * _highPriorityQueue;
    id /* block */  _idsDeviceConnectionFactory;
    <HMDIDSService> * _idsProxyStreamService;
    HMFTimer * _keepAliveByteReceiveTimeoutTimer;
    HMFTimer * _keepAliveByteSendTimer;
    IDSDeviceConnection * _keepAliveConnection;
    unsigned char  _keepAliveCounter;
    NSObject<OS_dispatch_source> * _keepAliveSocketReceiveSource;
    HMDCameraStreamSessionID * _sessionID;
    IDSDeviceConnection * _watchAudioConnection;
    IDSDeviceConnection * _watchVideoConnection;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ idsDeviceConnectionFactory;
@property (nonatomic, readonly) <HMDIDSService> *idsProxyStreamService;
@property (retain) IDSDeviceConnection *keepAliveConnection;
@property (nonatomic, readonly) HMDCameraStreamSessionID *sessionID;
@property (readonly) Class superclass;
@property (retain) IDSDeviceConnection *watchAudioConnection;
@property (retain) IDSDeviceConnection *watchVideoConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callSessionEndedWithError:(id)arg1;
- (void)_createStreamSocketWithDevice:(id)arg1;
- (void)_socketOpenedWithError:(id)arg1;
- (void)dealloc;
- (id /* block */)idsDeviceConnectionFactory;
- (id)idsProxyStreamService;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 idsProxyStreamService:(id)arg3;
- (id)keepAliveConnection;
- (id)logIdentifier;
- (id)sessionID;
- (void)setIdsDeviceConnectionFactory:(id /* block */)arg1;
- (void)setKeepAliveConnection:(id)arg1;
- (void)setWatchAudioConnection:(id)arg1;
- (void)setWatchVideoConnection:(id)arg1;
- (void)startKeepAlive;
- (void)timerDidFire:(id)arg1;
- (id)watchAudioConnection;
- (id)watchVideoConnection;
- (id)workQueue;

@end
