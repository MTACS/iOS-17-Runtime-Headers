
@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging> {
    HMDActiveSiriSessionInfo * _activeSessionInfo;
    NSObject<OS_xpc_object> * _boostMessage;
    NSNumber * _deviceType;
    NSString * _identifier;
    bool  _isActivationPending;
    HMMLogEventDispatcher * _logEventDispatcher;
    NSObject<OS_os_log> * _logger;
    HMDSiriRemoteInputServer * _server;
    HMDSiriStreamStartEvent * _streamStartMetric;
}

@property (nonatomic, retain) HMDActiveSiriSessionInfo *activeSessionInfo;
@property (nonatomic, retain) NSObject<OS_xpc_object> *boostMessage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isActivationPending;
@property (nonatomic, readonly) HMMLogEventDispatcher *logEventDispatcher;
@property (nonatomic) HMDSiriRemoteInputServer *server;
@property (nonatomic, retain) HMDSiriStreamStartEvent *streamStartMetric;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)siriSessionForUI;

- (void).cxx_destruct;
- (id)_createArgsDictionaryWithError:(id)arg1;
- (bool)_startStream;
- (bool)activateAfterHubInitiation;
- (bool)activateWithAccessory:(id)arg1 metadata:(id)arg2;
- (id)activeSessionInfo;
- (id)activeSessionToken;
- (void)activeSiriSession:(id)arg1 didCreateAudioFrame:(id)arg2 sequenceNumber:(id)arg3 gain:(id)arg4;
- (void)activeSiriSession:(id)arg1 didReceiveButtonUpWithDuration:(id)arg2;
- (void)activeSiriSession:(id)arg1 didReceiveFirstPassMetadata:(id)arg2;
- (void)activeSiriSessionDidStop:(id)arg1;
- (void)beginTrackingStreamStartMetricWithActivationType:(unsigned long long)arg1;
- (id)boostMessage;
- (void)deactivate;
- (id)deviceType;
- (void)handleResetStream;
- (void)handleStartStream;
- (void)handleStopStream;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 deviceType:(id)arg2;
- (id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2 deviceType:(id)arg3;
- (void)invalidate;
- (bool)isActivationPending;
- (id)logEventDispatcher;
- (void)maybeSubmitStreamStartMetricWithError:(id)arg1;
- (void)publish;
- (void)sendMsg:(const char *)arg1 args:(id)arg2;
- (id)server;
- (void)setActiveBulkSendSession:(id)arg1;
- (void)setActiveSessionInfo:(id)arg1;
- (void)setBoostMessage:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setIsActivationPending:(bool)arg1;
- (void)setServer:(id)arg1;
- (void)setStreamStartMetric:(id)arg1;
- (void)stopStream;
- (id)streamStartMetric;

@end
