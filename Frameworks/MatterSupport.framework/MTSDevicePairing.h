
@interface MTSDevicePairing : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSNumber * _deviceType;
    MTSDevicePairingFabric * _fabric;
    NSString * _name;
    NSNumber * _nodeID;
    NSNumber * _productID;
    NSString * _serialNumber;
    MTRSetupPayload * _setupPayload;
    NSUUID * _uuid;
    NSNumber * _vendorID;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSNumber *deviceType;
@property (readonly, copy) MTSDevicePairingFabric *fabric;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly) NSNumber *nodeID;
@property (readonly, copy) NSString *privateDescription;
@property (readonly) NSNumber *productID;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *serialNumber;
@property (readonly) MTRSetupPayload *setupPayload;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid;
@property (readonly) NSNumber *vendorID;

+ (id)UUIDFromNodeID:(id)arg1 fabric:(id)arg2;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)fabric;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNodeID:(id)arg1 fabric:(id)arg2;
- (id)initWithUUID:(id)arg1 nodeID:(id)arg2 serialNumber:(id)arg3 vendorID:(id)arg4 productID:(id)arg5 deviceType:(id)arg6 name:(id)arg7 setupPayload:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)nodeID;
- (id)privateDescription;
- (id)productID;
- (id)serialNumber;
- (id)setupPayload;
- (id)shortDescription;
- (id)uuid;
- (id)vendorID;

@end
