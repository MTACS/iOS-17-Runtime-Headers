
@interface LARemoteViewControllerParameters : NSObject {
    NSString * _serviceBundleIdentifier;
    NSString * _serviceViewControllerClassName;
}

@property (nonatomic, retain) NSString *serviceBundleIdentifier;
@property (nonatomic, retain) NSString *serviceViewControllerClassName;

- (void).cxx_destruct;
- (id)serviceBundleIdentifier;
- (id)serviceViewControllerClassName;
- (void)setServiceBundleIdentifier:(id)arg1;
- (void)setServiceViewControllerClassName:(id)arg1;

@end
