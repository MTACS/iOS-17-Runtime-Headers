
@protocol WFNetworkListRecord <NSObject, NSCopying>

@required

- (bool)canBeDisplayedAsCurrent;
- (NSNumber *)hotspotBatteryLife;
- (NSString *)hotspotCellularProtocol;
- (NSNumber *)hotspotSignalStrength;
- (bool)iOSHotspot;
- (bool)isAdhoc;
- (bool)isEnterprise;
- (bool)isEquivalentRecord:(id <WFNetworkListRecord>)arg1;
- (bool)isInstantHotspot;
- (bool)isKnown;
- (bool)isPopular;
- (bool)isSecure;
- (bool)isUnconfiguredAccessory;
- (bool)prominentDisplay;
- (long long)rssi;
- (float)scaledRSSI;
- (unsigned long long)signalBars;
- (NSString *)ssid;
- (NSString *)subtitle;
- (NSString *)title;
- (unsigned long long)uniqueIdentifier;

@optional

- (NSDate *)lastJoinedDate;
- (bool)shouldShowInKnownNetworkList;
- (bool)shouldShowInMyNetworkList;

@end
