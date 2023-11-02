
@interface CHSAppIntentsXPCListenerEndpointProvider : NSObject {
    NSString * _bundleIdentifier;
    CHSChronoServicesConnection * _connection;
}

- (void).cxx_destruct;
- (void)getAppIntentsXPCListenerEndpointWithCompletion:(id /* block */)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end
