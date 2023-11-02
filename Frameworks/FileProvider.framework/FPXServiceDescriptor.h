
@interface FPXServiceDescriptor : NSObject <NSSecureCoding> {
    NSString * _requiredEntitlement;
    NSString * _serviceName;
}

@property (nonatomic, copy) NSString *requiredEntitlement;
@property (nonatomic, copy) NSString *serviceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requiredEntitlement;
- (id)serviceName;
- (void)setRequiredEntitlement:(id)arg1;
- (void)setServiceName:(id)arg1;

@end
