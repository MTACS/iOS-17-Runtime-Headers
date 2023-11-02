
@interface HMFWiFiManager : HMFObject <HMFLogging, HMFWiFiManagerDataSourceDelegate> {
    HMFMACAddress * _MACAddress;
    NSHashTable * _activeAssertions;
    <HMFWiFiManagerDataSource> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _savedNetworkSSID;
    bool  _shouldAssertWoW;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) HMFMACAddress *MACAddress;
@property (getter=isActive, readonly) bool active;
@property (getter=isCaptive, readonly) bool captive;
@property (readonly, copy) HMFWifiNetworkAssociation *currentNetworkAssociation;
@property (nonatomic, readonly, copy) NSNumber *currentNetworkRSSI;
@property (readonly, copy) NSString *currentNetworkSSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)MACAddress;
- (id)beginActiveAssertionWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (id)currentNetworkAssociation;
- (void)currentNetworkDidChangeForDataSource:(id)arg1;
- (id)currentNetworkRSSI;
- (id)currentNetworkSSID;
- (void)dataSource:(id)arg1 didChangeLinkAvailability:(bool)arg2;
- (void)dataSource:(id)arg1 didChangeWoWState:(bool)arg2;
- (void)endActiveAssertion:(id)arg1;
- (id)init;
- (id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2;
- (bool)isActive;
- (bool)isCaptive;
- (void)releaseWoWAssertion;
- (void)takeWoWAssertion;

@end
