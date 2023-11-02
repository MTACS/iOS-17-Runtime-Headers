
@interface MTSDeviceSetupRequest : NSObject <NSCopying, NSSecureCoding> {
    <MTDeviceSetupRequestSwiftWrapper> * _wrappedRequest;
}

@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSString *ecosystemName;
@property (readonly) MTRSetupPayload *setupPayload;
@property (readonly) bool shouldScanNetworks;
@property (readonly) MTSDeviceSetupTopology *topology;
@property (readonly) <MTDeviceSetupRequestSwiftWrapper> *wrappedRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)ecosystemName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEcosystemName:(id)arg1 homeNames:(id)arg2 blockedDevicePairings:(id)arg3;
- (id)initWithSerializedRequest:(id)arg1;
- (id)initWithWrappedRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)setupPayload;
- (bool)shouldScanNetworks;
- (bool)shouldShowDeviceWithUUID:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 serialNumber:(id)arg4;
- (bool)shouldShowDeviceWithUUID:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 serialNumber:(id)arg4 rootPublicKey:(id)arg5 nodeID:(id)arg6;
- (id)topology;
- (id)wrappedRequest;

@end
