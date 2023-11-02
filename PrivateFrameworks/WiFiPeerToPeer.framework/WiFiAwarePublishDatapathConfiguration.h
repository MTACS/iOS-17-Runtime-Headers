
@interface WiFiAwarePublishDatapathConfiguration : NSObject <NSCopying, NSSecureCoding> {
    WiFiAwarePublishDatapathSecurityConfiguration * _securityConfiguration;
    WiFiAwarePublishDatapathServiceSpecificInfo * _serviceSpecificInfo;
    long long  _serviceType;
}

@property (nonatomic, readonly) WiFiAwarePublishDatapathSecurityConfiguration *securityConfiguration;
@property (nonatomic, copy) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;
@property (nonatomic, readonly) long long serviceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceType:(long long)arg1 securityConfiguration:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)securityConfiguration;
- (bool)securityConfigurationEqual:(id)arg1;
- (id)serviceSpecificInfo;
- (bool)serviceSpecificInfoEqual:(id)arg1;
- (long long)serviceType;
- (void)setServiceSpecificInfo:(id)arg1;

@end
