
@interface PKBarcodeEventMetadataRequest : NSObject <NSSecureCoding> {
    NSString * _deviceAccountIdentifier;
    NSString * _lastUsedBarcodeIdentifier;
}

@property (nonatomic, copy) NSString *deviceAccountIdentifier;
@property (nonatomic, copy) NSString *lastUsedBarcodeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceAccountIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBarcodeIdentifier:(id)arg1 deviceAccountIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)lastUsedBarcodeIdentifier;
- (void)setDeviceAccountIdentifier:(id)arg1;
- (void)setLastUsedBarcodeIdentifier:(id)arg1;

@end
