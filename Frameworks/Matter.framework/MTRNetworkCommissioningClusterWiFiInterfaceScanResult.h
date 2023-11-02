
@interface MTRNetworkCommissioningClusterWiFiInterfaceScanResult : MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct

@property (nonatomic, copy) NSData *bssid;
@property (nonatomic, copy) NSNumber *channel;
@property (nonatomic, copy) NSNumber *rssi;
@property (nonatomic, copy) NSNumber *security;
@property (nonatomic, copy) NSData *ssid;
@property (nonatomic, copy) NSNumber *wiFiBand;

@end
