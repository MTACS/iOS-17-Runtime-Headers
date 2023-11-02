
@interface CXInProcessCallSource : CXCallSource {
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSString * _localizedName;
    CXInProcessProvider * _provider;
}

@property (nonatomic, retain) CXInProcessProvider *provider;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 fallbackLocalizedName:(id)arg3;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (id)localizedName;
- (int)processIdentifier;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)vendorProtocolDelegate;

@end
