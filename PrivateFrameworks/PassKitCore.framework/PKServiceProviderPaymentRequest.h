
@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding> {
    PKServiceProviderOrder * _serviceProviderOrder;
    NSString * _targetDeviceSerialNumber;
}

@property (nonatomic, readonly) PKServiceProviderOrder *serviceProviderOrder;
@property (nonatomic, readonly, copy) NSString *targetDeviceSerialNumber;

+ (id)availableNetworks;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceProviderOrder:(id)arg1;
- (id)initWithServiceProviderOrder:(id)arg1 targetDeviceSerialNumber:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)merchantIdentifier;
- (id)serviceProviderOrder;
- (id)targetDeviceSerialNumber;

@end
