
@interface ANRapportConnection : NSObject <ANRapportConnectionProvider> {
    NSArray * _activeDevices;
    NSMutableDictionary * _clients;
    RPCompanionLinkClient * _companionLinkClient;
    <ANRapportConnectionDelegate> * _delegate;
    NSMapTable * _deviceDelegatesToQueues;
    bool  _isTimerSuspended;
    NSDate * _lastScanStartTimestamp;
    NSObject<OS_dispatch_queue> * _rapportQueue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (retain) NSArray *activeDevices;
@property (retain) NSMutableDictionary *clients;
@property (nonatomic, retain) RPCompanionLinkClient *companionLinkClient;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANRapportConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMapTable *deviceDelegatesToQueues;
@property (nonatomic, readonly) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTimerSuspended;
@property (retain) NSDate *lastScanStartTimestamp;
@property (nonatomic, readonly) RPCompanionLinkDevice *localDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *rapportQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_decrementMessageCountForCompanionLinkClient:(id)arg1;
- (void)_executeBlockForDelegates:(id /* block */)arg1;
- (void)_handleLinkInvalidation;
- (void)_handleTimerExpired;
- (void)_incrementMessageCountForCompanionLinkClient:(id)arg1;
- (void)_linkForDevice:(id)arg1 handler:(id /* block */)arg2;
- (bool)_needsScan;
- (void)_notifyDeviceDelegatesConnectionDidFindDevice:(id)arg1;
- (void)_notifyDeviceDelegatesConnectionDidLoseDevice:(id)arg1;
- (void)_registerHandlers;
- (void)_registerHomeLocationStatusRequestHandler;
- (void)_registerMessageRequestHandler;
- (double)_remainingScanTimeInterval;
- (void)_sendDailyRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)_sendHomeLocationStatusRequestToDevice:(id)arg1 handler:(id /* block */)arg2;
- (void)_sendMessage:(id)arg1 linkClient:(id)arg2 handler:(id /* block */)arg3;
- (void)_setupLink:(id /* block */)arg1;
- (void)_simulateDeliveryFailureForMessage:(id)arg1;
- (void)_startTimer;
- (void)_tearDownLink;
- (void)_updateDevices;
- (id)activateLinkWithOptions:(unsigned long long)arg1;
- (void)activateLinkWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)activeDevices;
- (void)addDeviceDelegate:(id)arg1 queue:(id)arg2;
- (id)clients;
- (id)companionLinkClient;
- (void)deactivateLinkWithOptions:(unsigned long long)arg1;
- (id)delegate;
- (id)deviceDelegatesToQueues;
- (id)devices;
- (id)init;
- (bool)isTimerSuspended;
- (id)lastScanStartTimestamp;
- (id)localDevice;
- (id)rapportQueue;
- (void)registerDailyRequest:(id /* block */)arg1;
- (void)sendDailyRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)sendHomeLocationStatusRequestToDevice:(id)arg1 handler:(id /* block */)arg2;
- (id)sendMessage:(id)arg1 device:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)setActiveDevices:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setCompanionLinkClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsTimerSuspended:(bool)arg1;
- (void)setLastScanStartTimestamp:(id)arg1;
- (void)setRapportQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
