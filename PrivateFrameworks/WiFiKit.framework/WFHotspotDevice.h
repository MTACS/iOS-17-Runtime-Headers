
@interface WFHotspotDevice : NSObject <WFNetworkListRecord> {
    SFRemoteHotspotDevice * _hotspotDevice;
    NSString * _ssid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFRemoteHotspotDevice *hotspotDevice;
@property (nonatomic, copy) NSString *ssid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isEqualToHotspotDevice:(id)arg1;
- (bool)_isEqualToNetwork:(id)arg1;
- (bool)canBeDisplayedAsCurrent;
- (id)description;
- (unsigned long long)hash;
- (id)hotspotBatteryLife;
- (id)hotspotCellularProtocol;
- (id)hotspotDevice;
- (id)hotspotSignalStrength;
- (bool)iOSHotspot;
- (id)init;
- (id)initWithHotspotDevice:(id)arg1;
- (bool)isAdhoc;
- (bool)isEnterprise;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentRecord:(id)arg1;
- (bool)isHotspot20;
- (bool)isInstantHotspot;
- (bool)isKnown;
- (bool)isPopular;
- (bool)isSecure;
- (bool)isUnconfiguredAccessory;
- (id)lastJoinedDate;
- (bool)prominentDisplay;
- (long long)rssi;
- (float)scaledRSSI;
- (long long)securityMode;
- (void)setHotspotDevice:(id)arg1;
- (void)setScaledRSSI:(float)arg1;
- (void)setSsid:(id)arg1;
- (bool)shouldShowInKnownNetworkList;
- (bool)shouldShowInMyNetworkList;
- (unsigned long long)signalBars;
- (id)ssid;
- (id)subtitle;
- (id)title;
- (unsigned long long)uniqueIdentifier;

@end
