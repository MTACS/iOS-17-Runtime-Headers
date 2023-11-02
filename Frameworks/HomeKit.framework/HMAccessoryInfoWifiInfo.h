
@interface HMAccessoryInfoWifiInfo : NSObject {
    NSString * _macAddress;
    NSString * _networkSSID;
}

@property (readonly) NSString *macAddress;
@property (readonly) NSString *networkSSID;

- (void).cxx_destruct;
- (id)hmfWifiNetworkInfo;
- (id)initWithMacAddress:(id)arg1 networkSSID:(id)arg2;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (id)initWithWifiNetworkInfo:(id)arg1;
- (id)macAddress;
- (id)networkSSID;
- (id)protoData;
- (id)protoPayload;

@end
