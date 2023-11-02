
@interface WiFiAwarePublishConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _authenticationType;
    WiFiAwarePublishDatapathConfiguration * _datapathConfiguration;
    WiFiAwareFastDiscoveryConfiguration * _fastDiscoveryConfiguration;
    bool  _furtherServiceDiscoveryRequired;
    WiFiAwareInternetSharingConfiguration * _internetSharingConfiguration;
    bool  _jumboServiceDiscoveryMessages;
    NSString * _serviceName;
    WiFiAwarePublishServiceSpecificInfo * _serviceSpecificInfo;
}

@property (nonatomic) long long authenticationType;
@property (nonatomic, copy) WiFiAwarePublishDatapathConfiguration *datapathConfiguration;
@property (nonatomic, copy) WiFiAwareFastDiscoveryConfiguration *fastDiscoveryConfiguration;
@property (nonatomic) bool furtherServiceDiscoveryRequired;
@property (nonatomic, copy) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration;
@property (nonatomic) bool jumboServiceDiscoveryMessages;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, copy) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authenticationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datapathConfiguration;
- (bool)datapathConfigurationEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fastDiscoveryConfiguration;
- (bool)fastDiscoveryConfigurationEqual:(id)arg1;
- (bool)furtherServiceDiscoveryRequired;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)internetSharingConfiguration;
- (bool)internetSharingConfigurationEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)jumboServiceDiscoveryMessages;
- (id)serviceName;
- (id)serviceSpecificInfo;
- (bool)serviceSpecificInfoEqual:(id)arg1;
- (void)setAuthenticationType:(long long)arg1;
- (void)setDatapathConfiguration:(id)arg1;
- (void)setFastDiscoveryConfiguration:(id)arg1;
- (void)setFurtherServiceDiscoveryRequired:(bool)arg1;
- (void)setInternetSharingConfiguration:(id)arg1;
- (void)setJumboServiceDiscoveryMessages:(bool)arg1;
- (void)setServiceSpecificInfo:(id)arg1;

@end
