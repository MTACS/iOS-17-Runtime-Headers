
@interface CMContinuityCaptureRemoteCompositeDevice : NSObject <CMContinuityCaptureCompositeDeviceDelegate, CMContinuityCaptureEventQueueActionDelegate, ContinuityCaptureTaskDelegate> {
    NSMutableDictionary * _captureDeviceByEntityType;
    NSMutableDictionary * _cmControlByName;
    long long  _currentTransport;
    CMContinuityCaptureEventQueue * _eventQueue;
    unsigned int  _legacyConnectionResetDelay;
    _Atomic bool  _observingActiveStreamState;
    _Atomic bool  _observingAudioSessionState;
    _Atomic bool  _observingTimeSyncState;
    _Atomic bool  _observingVideoSessionState;
    NSMutableArray * _pendingEventToBePostedQueue;
    NSMutableSet * _pendingSidebandStreamIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _remoteClientDisconnectNotifiedByEntityType;
    <ContinuityCaptureDeviceServer> * _server;
    _Atomic bool  _sessionInvalidated;
    long long  _state;
    AVCaptureVideoPreviewLayer * _videoPreviewLayer;
}

@property (readonly, retain) NSArray *continuityCaptureDevices;
@property (readonly, retain) NSArray *controls;
@property (readonly) NSDate *currentSessionActivationStartTime;
@property (readonly) unsigned long long currentSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain) CMContinuityCaptureEventQueue *eventQueue;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long lastSessionID;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain) <ContinuityCaptureDeviceServer> *server;
@property (readonly) long long state;
@property (readonly) Class superclass;

+ (void)setWombatMode:(bool)arg1;

- (void).cxx_destruct;
- (id)_aggregateEventPairInAnyState:(id)arg1 entryEventName:(id)arg2 exitEventName:(id)arg3;
- (bool)_avcaptureDeviceSupportsDockKit;
- (void)_invalidate;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)_postEvent:(id)arg1 entity:(long long)arg2 data:(id)arg3;
- (void)_startStream:(id)arg1 option:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_stopStream:(long long)arg1 option:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)captureStillImage:(id)arg1 entity:(long long)arg2 completion:(id /* block */)arg3;
- (void)connectionInterrupted:(id)arg1 forDevice:(id)arg2;
- (id)continuityCaptureDevices;
- (id)controlWithName:(id)arg1;
- (id)controls;
- (id)currentSessionActivationStartTime;
- (unsigned long long)currentSessionID;
- (id)debugInfo;
- (id)description;
- (void)device:(id)arg1 updatedValueForControl:(id)arg2;
- (void)didCaptureStillImage:(id)arg1 entity:(long long)arg2;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { }*)arg1 entity:(long long)arg2 completion:(id /* block */)arg3;
- (void)enqueueReactionEffect:(id)arg1 entity:(long long)arg2;
- (id)eventQueue;
- (void)handleAVCNegotiation:(long long)arg1 data:(id)arg2;
- (void)handleSynchronizeAudioClockCompletion;
- (id)initWithTransportServer:(id)arg1 videoPreviewLayer:(id)arg2;
- (void)invalidate;
- (unsigned long long)lastSessionID;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)postAggregatedCachedEventsIfApplicable;
- (void)postEvent:(id)arg1 entity:(long long)arg2 data:(id)arg3;
- (bool)postEventAction:(unsigned long long)arg1 args:(id)arg2;
- (void)postEventOnAllEntities:(id)arg1 data:(id)arg2;
- (id)queue;
- (id)server;
- (void)setValueForControl:(id)arg1 completion:(id /* block */)arg2;
- (bool)setupCaptureDevices;
- (void)setupControls;
- (void)startStream:(id)arg1 option:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (long long)state;
- (void)stopStream:(long long)arg1 option:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)synchronizeAudioClockWithSampleTime:(unsigned long long)arg1 networkTime:(unsigned long long)arg2 clockGrandMasterIdentifier:(unsigned long long)arg3;
- (void)terminateCompleteForDevice:(id)arg1;
- (void)updateStreamConnectStatus;
- (void)updateSystemState;

@end
