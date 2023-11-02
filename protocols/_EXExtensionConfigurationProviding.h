
@protocol _EXExtensionConfigurationProviding <_EXExtensionPointConfigurationProviding>

@required

- (NSString *)internalServiceName;
- (NSString *)serviceName;
- (unsigned long long)type;

@end
