
@interface TRSetupConfigurationRequest : TRRequestMessage {
    NSString * _deviceName;
}

@property (nonatomic, copy) NSString *deviceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDeviceName:(id)arg1;

@end
