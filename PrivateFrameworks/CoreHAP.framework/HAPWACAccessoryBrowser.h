
@interface HAPWACAccessoryBrowser : HAPAccessoryServerBrowser <HMFLogging, HMFTimerDelegate> {
    <HAPAirPlayAccessoryBrowserDelegate> * _airplayDelegate;
    HMFTimer * _backoffTimer;
    NSString * _browsingIdentifier;
    NSDate * _browsingStartTime;
    CUWiFiScanner * _cuWiFiScanner;
    <HAPWACAccessoryBrowserDelegate> * _delegate;
    id /* block */  _found2Pt4Completion;
    NSMutableSet * _found2Pt4Networks;
    NSMutableSet * _foundUnconfiguredPairedAccessories;
    NSMutableSet * _foundUnconfiguredUnpairedAccessories;
    NSString * _scanning2Pt4SSID;
    unsigned long long  _state;
}

@property (nonatomic) <HAPAirPlayAccessoryBrowserDelegate> *airplayDelegate;
@property (nonatomic, readonly) HMFTimer *backoffTimer;
@property (nonatomic, retain) NSString *browsingIdentifier;
@property (nonatomic, retain) NSDate *browsingStartTime;
@property (nonatomic, retain) CUWiFiScanner *cuWiFiScanner;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HAPWACAccessoryBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ found2Pt4Completion;
@property (nonatomic, retain) NSMutableSet *found2Pt4Networks;
@property (nonatomic, retain) NSMutableSet *foundUnconfiguredPairedAccessories;
@property (nonatomic, retain) NSMutableSet *foundUnconfiguredUnpairedAccessories;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *scanning2Pt4SSID;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addFoundUnconfiguredUnpairedWACDevice:(id)arg1;
- (void)_handleBrowsingBackOffTimerExpiry;
- (void)_handleChangeUnconfiguredPairedWACAccessory:(id)arg1;
- (void)_handleChangeUnconfiguredUnpairedWACAccessory:(id)arg1;
- (void)_handleNewUnconfiguredUnpairedWACDevice:(id)arg1;
- (void)_handleUnconfiguredPairedWACDevice:(id)arg1;
- (void)_initWiFiScannerWithScanner:(id)arg1;
- (id)_removeUnconfiguredWACDevice:(id)arg1;
- (void)_reportFound2Pt4Network:(id)arg1;
- (void)_restartBrowsingWithAllNetworks;
- (void)_startBrowsingForWACAccessories;
- (void)_stopBrowsingForWACAccessories;
- (id)airplayDelegate;
- (id)backoffTimer;
- (id)browsingIdentifier;
- (id)browsingStartTime;
- (id)cuWiFiScanner;
- (id)delegate;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id /* block */)found2Pt4Completion;
- (id)found2Pt4Networks;
- (id)foundUnconfiguredPairedAccessories;
- (id)foundUnconfiguredUnpairedAccessories;
- (void)handleChangeUnconfiguredWACDevice:(id)arg1;
- (void)handleFoundAPDevice:(id)arg1;
- (void)handleFoundUnconfiguredPairedWACDevice:(id)arg1;
- (void)handleFoundUnconfiguredUnpairedWACDevice:(id)arg1;
- (void)handleRemovedUnconfiguredWACDevice:(id)arg1;
- (void)initWiFiScannerWithScanner:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)logIdentifier;
- (void)scan2Pt4APWithSSID:(id)arg1 completion:(id /* block */)arg2;
- (id)scanning2Pt4SSID;
- (void)setAirplayDelegate:(id)arg1;
- (void)setBrowsingIdentifier:(id)arg1;
- (void)setBrowsingStartTime:(id)arg1;
- (void)setCuWiFiScanner:(id)arg1;
- (void)setFound2Pt4Completion:(id /* block */)arg1;
- (void)setFound2Pt4Networks:(id)arg1;
- (void)setFoundUnconfiguredPairedAccessories:(id)arg1;
- (void)setFoundUnconfiguredUnpairedAccessories:(id)arg1;
- (void)setScanning2Pt4SSID:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1;
- (unsigned long long)state;
- (void)stopDiscoveringAccessoryServers;
- (void)timerDidFire:(id)arg1;
- (id)visible2Pt4Networks;

@end
