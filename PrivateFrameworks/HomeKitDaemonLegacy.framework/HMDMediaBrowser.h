
@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate> {
    NSMutableSet * _accessoryAdvertisements;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMapTable * _currentBrowseOperations;
    <HMDMediaBrowserDataSource> * _dataSource;
    <HMDMediaBrowserDelegate> * _delegate;
    bool  _discoverAssociatedAccessories;
    bool  _discoverUnassociatedAccessories;
    HMFTimer * _discoveryPollTimer;
    void * _discoverySession;
    void * _discoverySessionCallbackToken;
    HMDHomeManager * _homeManager;
    NSMutableSet * _identifiersOfAssociatedMediaAccessories;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _mediaEndpoints;
    bool  _updateAvailableOutputDevices;
}

@property (readonly, copy) NSArray *accessoryAdvertisements;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHomeManager *homeManager;
@property (readonly) Class superclass;

+ (id)advertisementsFromOutputDevices:(struct __CFArray { }*)arg1;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)accessoryAdvertisements;
- (id)clientQueue;
- (id)currentAccessory;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (void)deregisterAccessories:(id)arg1;
- (id)description;
- (id)dumpDescription;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (id)initWithHomeManager:(id)arg1 dataSource:(id)arg2;
- (void)registerAccessories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (id)shortDescription;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringUnassociatedAccessories;
- (void)timerDidFire:(id)arg1;
- (id)unassociatedAccessoryFromAdvertisementData:(id)arg1;
- (void)updateSessionsForAccessories:(id)arg1;

@end
