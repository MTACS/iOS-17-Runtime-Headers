
@interface HMFWifiNetworkAssociation : HMFObject {
    HMFMACAddress * _BSSID;
    HMFMACAddress * _MACAddress;
    NSString * _SSID;
    NSString * _gatewayIPAddress;
    HMFMACAddress * _gatewayMACAddress;
}

@property (readonly) HMFMACAddress *BSSID;
@property (readonly) HMFMACAddress *MACAddress;
@property (readonly) NSString *SSID;
@property (readonly) NSString *gatewayIPAddress;
@property (readonly) HMFMACAddress *gatewayMACAddress;

- (void).cxx_destruct;
- (id)BSSID;
- (id)MACAddress;
- (id)SSID;
- (id)gatewayIPAddress;
- (id)gatewayMACAddress;
- (id)initWithMACAddress:(id)arg1 SSID:(id)arg2 BSSID:(id)arg3 gatewayIPAddress:(id)arg4 gatewayMACAddress:(id)arg5;

@end
