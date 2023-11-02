
@interface SPStandaloneBeacon : NSObject <NSCopying, NSSecureCoding> {
    NSData * _classicMacAddress;
    NSUUID * _identifier;
    NSData * _macAddress;
    NSDate * _pairingDate;
    NSData * _productData;
    NSString * _serialNumber;
}

@property (nonatomic, copy) NSData *classicMacAddress;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *macAddress;
@property (nonatomic, copy) NSDate *pairingDate;
@property (nonatomic, copy) NSData *productData;
@property (nonatomic, copy) NSString *serialNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classicMacAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 macAddress:(id)arg2 classicMacAddress:(id)arg3 serialNumber:(id)arg4 pairingDate:(id)arg5 productData:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)macAddress;
- (id)pairingDate;
- (id)productData;
- (id)serialNumber;
- (void)setClassicMacAddress:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setPairingDate:(id)arg1;
- (void)setProductData:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end
