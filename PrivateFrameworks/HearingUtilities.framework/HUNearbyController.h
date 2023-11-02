
@interface HUNearbyController : NSObject <IDSServiceDelegate> {
    NSArray * _availableDevices;
    NSMutableDictionary * _discoveryUpdates;
    NSMutableDictionary * _domainQueues;
    bool  _hasPendingNearbyUpdates;
    NSMutableDictionary * _loggingUpdates;
    NSMutableDictionary * _messageUpdates;
    AXDispatchTimer * _nearbyHysteresisTimer;
    NSObject<OS_dispatch_queue> * _nearbyUpdatesQueue;
    NSMutableArray * _registeredDomains;
    IDSService * _service;
    bool  _shouldPublishNearbyUpdates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _syncLock;
}

@property (nonatomic, copy) NSArray *availableDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *discoveryUpdates;
@property (nonatomic, retain) NSMutableDictionary *domainQueues;
@property (nonatomic) bool hasPendingNearbyUpdates;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *loggingUpdates;
@property (nonatomic, retain) NSMutableDictionary *messageUpdates;
@property (nonatomic, retain) AXDispatchTimer *nearbyHysteresisTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *nearbyUpdatesQueue;
@property (nonatomic, retain) NSMutableArray *registeredDomains;
@property (nonatomic, retain) IDSService *service;
@property (nonatomic) bool shouldPublishNearbyUpdates;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)availableDevices;
- (id)descriptionForIDSDevice:(id)arg1;
- (void)discoverNearbyDevicesWithDomain:(id)arg1;
- (id)discoveryUpdates;
- (id)domainQueues;
- (bool)hasPendingNearbyUpdates;
- (id)init;
- (void)logIDSDevices:(id)arg1 withTitle:(id)arg2;
- (void)logMessageWithDomain:(id)arg1 message:(id)arg2;
- (id)loggingUpdates;
- (id)messageUpdates;
- (id)nearbyDeviceWithIdentifier:(id)arg1 justCreated:(bool*)arg2;
- (id)nearbyDevices;
- (void)nearbyDevicesDidUpdateWithNewDevices:(id)arg1 forDomain:(id)arg2;
- (id)nearbyHysteresisTimer;
- (id)nearbyUpdatesQueue;
- (void)registerBlock:(id)arg1 forKey:(id)arg2 withUpdateGroup:(id)arg3 forDomain:(id)arg4 withListener:(id)arg5;
- (void)registerDiscoveryBlock:(id /* block */)arg1 forDomain:(id)arg2 withListener:(id)arg3;
- (void)registerLoggingBlock:(id /* block */)arg1 forDomain:(id)arg2 withListener:(id)arg3;
- (void)registerMessageBlock:(id /* block */)arg1 forDomain:(id)arg2 withListener:(id)arg3;
- (void)registerQueue:(id)arg1 forDomain:(id)arg2;
- (id)registeredDomains;
- (void)sendMessage:(id)arg1 toDevicesWithDomain:(id)arg2 withPriority:(unsigned long long)arg3;
- (void)sendMessage:(id)arg1 withDomain:(id)arg2 toDevices:(id)arg3 withPriority:(unsigned long long)arg4;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)setAvailableDevices:(id)arg1;
- (void)setDiscoveryUpdates:(id)arg1;
- (void)setDomainQueues:(id)arg1;
- (void)setHasPendingNearbyUpdates:(bool)arg1;
- (void)setLoggingUpdates:(id)arg1;
- (void)setMessageUpdates:(id)arg1;
- (void)setNearbyHysteresisTimer:(id)arg1;
- (void)setNearbyUpdatesQueue:(id)arg1;
- (void)setRegisteredDomains:(id)arg1;
- (void)setService:(id)arg1;
- (void)setShouldPublishNearbyUpdates:(bool)arg1;
- (bool)shouldPublishNearbyUpdates;
- (void)start;
- (void)stop;
- (void)stopDiscoveringDevicesWithDomain:(id)arg1;

@end
