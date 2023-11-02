
@interface PKBarcodeEventConfigurationRequest : NSObject <NSSecureCoding> {
    NSData * _configurationData;
    long long  _configurationDataType;
    NSString * _deviceAccountIdentifier;
}

@property (nonatomic, copy) NSData *configurationData;
@property (nonatomic) long long configurationDataType;
@property (nonatomic, copy) NSString *deviceAccountIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationData;
- (long long)configurationDataType;
- (id)description;
- (id)deviceAccountIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setConfigurationData:(id)arg1;
- (void)setConfigurationDataType:(long long)arg1;
- (void)setDeviceAccountIdentifier:(id)arg1;

@end
