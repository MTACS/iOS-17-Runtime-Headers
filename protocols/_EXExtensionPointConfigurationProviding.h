
@protocol _EXExtensionPointConfigurationProviding <NSObject>

@required

- (Class)connectionHandlerClass;
- (Class)extensionClass;
- (Class)extensionContextClass;
- (bool)presentsUserInterface;
- (Class)principalClass;
- (NSDictionary *)requiredHostEntitlements;
- (bool)supportsNSExtensionPlistKeys;

@end
