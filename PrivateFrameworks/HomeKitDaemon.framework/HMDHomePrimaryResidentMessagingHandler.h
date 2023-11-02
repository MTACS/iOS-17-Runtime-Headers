
@interface HMDHomePrimaryResidentMessagingHandler : NSObject <HMDRemoteHomeMessageHandling, HMDResidentDeviceManagerDiscoveryRequester, HMFLogging, HMFTimerManagerDelegate> {
    NSError * _cancelError;
    HMFFuture * _discoveryFuture;
    NSUUID * _homeUUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logIdentifier;
    HMFMessageDispatcher * _messageDispatcher;
    NSNotificationCenter * _notificationCenter;
    NSMapTable * _pendingMessages;
    <HMDResidentDeviceManager> * _residentDeviceManager;
    <HMFTimerManager> * _timerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_discoverPrimaryResident;
- (void)_processPendingMessagesWithPrimaryResidentDevice:(id)arg1;
- (id /* block */)_responseHandlerForRequestMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 toPrimaryResidentDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handlePrimaryResidentUpdated:(id)arg1;
- (void)handleResidentUpdated:(id)arg1;
- (id)homeUUID;
- (id)initWithMessageDispatcher:(id)arg1 homeUUID:(id)arg2 residentDeviceManager:(id)arg3;
- (id)initWithMessageDispatcher:(id)arg1 homeUUID:(id)arg2 residentDeviceManager:(id)arg3 dataSource:(id)arg4;
- (id)logIdentifier;
- (void)residentDeviceManager:(id)arg1 didCompleteDiscoveryWithPrimaryResidentDevice:(id)arg2 error:(id)arg3;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)timerManager:(id)arg1 didFireForTimerContext:(id)arg2;

@end
