
@interface HMFWiFiManagerDataSource : HMFObject <HMFWiFiManagerDataSource> {
    int  _captiveCached;
    NSLock * _captiveCachedLock;
    struct __WiFiNetwork { } * _currentNetwork;
    <HMFWiFiManagerDataSourceDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __SCDynamicStore { } * _scStore;
    struct __WiFiManagerClient { } * _wifiClientReference;
    struct __WiFiDeviceClient { } * _wifiDeviceReference;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isAssertionActive, readonly) bool assertionActive;
@property (readonly) unsigned long long assertionOptions;
@property (getter=isCaptive, nonatomic, readonly) bool captive;
@property (nonatomic) int captiveCached;
@property (nonatomic, retain) NSLock *captiveCachedLock;
@property (nonatomic) struct __WiFiNetwork { }*currentNetwork;
@property (readonly, copy) HMFWifiNetworkAssociation *currentNetworkAssociation;
@property (nonatomic, readonly, copy) NSNumber *currentNetworkRSSI;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMFWiFiManagerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __SCDynamicStore { }*scStore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __WiFiManagerClient { }*wifiClientReference;
@property (nonatomic) struct __WiFiDeviceClient { }*wifiDeviceReference;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (getter=isWoWAsserted, setter=setWoWAsserted:, nonatomic) bool wowAsserted;

+ (id)MACAddressString;

- (void).cxx_destruct;
- (void)_invalidateCaptiveState;
- (void)_registerForCaptiveStateChanges;
- (void)_setCurrentNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)activateWithOptions:(unsigned long long)arg1;
- (unsigned long long)assertionOptions;
- (int)captiveCached;
- (id)captiveCachedLock;
- (struct __WiFiNetwork { }*)currentNetwork;
- (id)currentNetworkAssociation;
- (id)currentNetworkRSSI;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (void)handleWiFiLinkChangedWithEventDictionary:(id)arg1;
- (id)initWithWorkQueue:(id)arg1;
- (bool)isAssertionActive;
- (bool)isCaptive;
- (bool)isWoWAsserted;
- (void)performBlockAfterWoWReassertionDelay:(id /* block */)arg1;
- (struct __SCDynamicStore { }*)scStore;
- (void)setCaptiveCached:(int)arg1;
- (void)setCaptiveCachedLock:(id)arg1;
- (void)setCurrentNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScStore:(struct __SCDynamicStore { }*)arg1;
- (void)setWifiDeviceReference:(struct __WiFiDeviceClient { }*)arg1;
- (void)setWoWAsserted:(bool)arg1;
- (void)startWithWiFiDevice:(struct __WiFiDeviceClient { }*)arg1;
- (struct __WiFiManagerClient { }*)wifiClientReference;
- (struct __WiFiDeviceClient { }*)wifiDeviceReference;
- (id)workQueue;

@end
