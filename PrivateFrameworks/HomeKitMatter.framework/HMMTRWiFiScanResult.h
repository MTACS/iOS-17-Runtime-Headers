
@interface HMMTRWiFiScanResult : NSObject {
    NSNumber * _band;
    NSNumber * _rssi;
    NSNumber * _security;
    NSData * _ssid;
}

@property (nonatomic, readonly) NSNumber *band;
@property (nonatomic, readonly) NSNumber *rssi;
@property (nonatomic, readonly) NSNumber *security;
@property (nonatomic, readonly) NSData *ssid;

- (void).cxx_destruct;
- (id)band;
- (id)initWithMTRNetworkCommissioningClusterWiFiInterfaceScanResult:(id)arg1;
- (id)initWithSSID:(id)arg1 rssi:(id)arg2 security:(unsigned char)arg3 band:(unsigned char)arg4;
- (id)rssi;
- (id)security;
- (id)ssid;

@end
