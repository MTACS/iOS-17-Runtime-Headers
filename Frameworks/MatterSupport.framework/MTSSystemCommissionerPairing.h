
@interface MTSSystemCommissionerPairing : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSNumber * _deviceType;
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
@property (readonly, copy) NSNumber *deviceType;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSNumber *nodeID;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSNumber *productID;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *serialNumber;
@property (readonly) MTRSetupPayload *setupPayload;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSNumber *vendorID;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 nodeID:(id)arg2 vendorID:(id)arg3 productID:(id)arg4 deviceType:(id)arg5 serialNumber:(id)arg6 name:(id)arg7 setupPayload:(id)arg8;
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
