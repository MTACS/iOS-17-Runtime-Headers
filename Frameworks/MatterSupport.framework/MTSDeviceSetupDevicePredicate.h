
@interface MTSDeviceSetupDevicePredicate : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _productID;
    NSString * _serialNumber;
    NSUUID * _uuid;
    NSNumber * _vendorID;
}

@property (retain) NSNumber *productID;
@property (copy) NSString *serialNumber;
@property (retain) NSUUID *uuid;
@property (retain) NSNumber *vendorID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)productID;
- (id)serialNumber;
- (void)setProductID:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVendorID:(id)arg1;
- (id)uuid;
- (id)vendorID;

@end
