
@interface CRKClassSessionBeaconBrowser : NSObject <CRKWiProxTrackerScannerDelegate> {
    bool  _allowInvitationSessions;
    <CRKClassSessionBeaconBrowserDelegate> * _delegate;
    bool  _isBrowsing;
    bool  _isScanning;
    NSSet * _organizationUUIDs;
    CRKWiProxTrackerScanner * _trackerScanner;
    NSSet * _trackingUUIDs;
    long long  mIncreasedScanRequestCount;
    NSMutableSet * mScanningZones;
    long long  mZoneTrackerLastState;
}

@property (nonatomic) bool allowInvitationSessions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKClassSessionBeaconBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBrowsing;
@property (nonatomic) bool isScanning;
@property (nonatomic, copy) NSSet *organizationUUIDs;
@property (readonly) Class superclass;
@property (nonatomic, retain) CRKWiProxTrackerScanner *trackerScanner;
@property (nonatomic, copy) NSSet *trackingUUIDs;

+ (id)invitationUUID;

- (void).cxx_destruct;
- (bool)allowInvitationSessions;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidFailWithError:(id)arg1;
- (void)delegateDidFindClassSession:(id)arg1 flags:(unsigned short)arg2;
- (void)delegateDidFindInvitationSessionWithEndpoint:(id)arg1;
- (void)increaseScanFrequencyForDuration:(double)arg1;
- (void)increasedScanDurationElapsed;
- (id)init;
- (bool)isBrowsing;
- (bool)isScanning;
- (id)organizationUUIDs;
- (id)organizationUUIDsMatchingZoneData:(id)arg1;
- (void)setAllowInvitationSessions:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsBrowsing:(bool)arg1;
- (void)setIsScanning:(bool)arg1;
- (void)setOrganizationUUIDs:(id)arg1;
- (void)setTrackerScanner:(id)arg1;
- (void)setTrackingUUIDs:(id)arg1;
- (void)startBrowsing;
- (void)startInitialScan;
- (void)startScanningForDevicesInZone:(id)arg1;
- (id)stateDictionary;
- (void)stopBrowsing;
- (void)stopScanningForDevicesInAllZones;
- (void)stopScanningForDevicesInZone:(id)arg1;
- (id)trackerScanner;
- (void)trackerScanner:(id)arg1 didUpdateDeviceScannerState:(id)arg2;
- (void)trackerScanner:(id)arg1 didUpdateZoneTrackerState:(id)arg2;
- (void)trackerScanner:(id)arg1 scanner:(id)arg2 didFailToRegisterDevices:(id)arg3 withError:(id)arg4;
- (void)trackerScanner:(id)arg1 scanner:(id)arg2 foundDevice:(id)arg3 withData:(id)arg4;
- (void)trackerScanner:(id)arg1 scanner:(id)arg2 foundRequestedDevices:(id)arg3;
- (void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 didFailToRegisterZones:(id)arg3 withError:(id)arg4;
- (void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 enteredZone:(id)arg3;
- (void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 exitedZone:(id)arg3;
- (id)trackingUUIDs;
- (void)updateScanner;
- (void)updateZones;
- (id)zoneDataForAdvertisementUUID:(id)arg1;
- (id)zoneDataForOrganizationUUID:(id)arg1;

@end
