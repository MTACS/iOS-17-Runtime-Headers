
@interface SPDiscoveredAccessory : NSObject <NSCopying, NSSecureCoding> {
    SPDiscoveredAccessoryMetadata * _discoveredMetadata;
    NSUUID * _identifier;
    bool  _isBatteryTooLow;
    NSData * _macAddress;
    SPDiscoveredAccessoryProductInformation * _productInformation;
}

@property (nonatomic, copy) SPDiscoveredAccessoryMetadata *discoveredMetadata;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) bool isBatteryTooLow;
@property (nonatomic, copy) NSData *macAddress;
@property (nonatomic, copy) SPDiscoveredAccessoryProductInformation *productInformation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discoveredMetadata;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isBatteryTooLow;
- (bool)isEqual:(id)arg1;
- (id)macAddress;
- (id)productInformation;
- (void)setDiscoveredMetadata:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsBatteryTooLow:(bool)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setProductInformation:(id)arg1;

@end
