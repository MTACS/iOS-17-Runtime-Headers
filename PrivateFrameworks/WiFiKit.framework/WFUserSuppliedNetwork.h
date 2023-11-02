
@interface WFUserSuppliedNetwork : NSObject <WFNetworkListRecord> {
    struct __SecIdentity { } * _TLSIdentity;
    NSString * _password;
    long long  _security;
    NSString * _ssid;
    NSString * _username;
}

@property (nonatomic) struct __SecIdentity { }*TLSIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) long long security;
@property (nonatomic, copy) NSString *ssid;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (struct __SecIdentity { }*)TLSIdentity;
- (bool)canBeDisplayedAsCurrent;
- (id)hotspotBatteryLife;
- (id)hotspotCellularProtocol;
- (id)hotspotSignalStrength;
- (bool)iOSHotspot;
- (bool)isAdhoc;
- (bool)isEnterprise;
- (bool)isInstantHotspot;
- (bool)isSecure;
- (bool)isUnconfiguredAccessory;
- (id)password;
- (long long)rssi;
- (float)scaledRSSI;
- (long long)security;
- (void)setPassword:(id)arg1;
- (void)setSecurity:(long long)arg1;
- (void)setSsid:(id)arg1;
- (void)setTLSIdentity:(struct __SecIdentity { }*)arg1;
- (void)setUsername:(id)arg1;
- (unsigned long long)signalBars;
- (id)ssid;
- (id)subtitle;
- (id)title;
- (id)username;

@end
