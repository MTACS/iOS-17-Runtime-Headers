
@interface RBBundleProperties : NSObject <RBBundleProperties> {
    RBLSBundleProperties * _lsBundleProperties;
    RBBundlePropertiesLSProvider * _lsProvider;
    RBSProcessIdentifier * _processIdentifier;
    RBSProcessIdentity * _processIdentity;
    RBXPCBundleProperties * _xpcBundleProperties;
    RBBundlePropertiesBSXPCProvider * _xpcProvider;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundlePath;
@property (nonatomic, readonly) NSString *containerOverrideIdentifier;
@property (nonatomic, readonly) bool continuousBackgroundMode;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly, copy) NSString *executablePath;
@property (nonatomic, readonly, copy) NSString *extensionPointIdentifier;
@property (nonatomic, readonly) bool hasPreferredJetsamBand;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExtension;
@property (nonatomic, readonly) int platform;
@property (nonatomic, readonly) int preferredJetsamBand;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBackgroundAudio;
@property (nonatomic, readonly) bool supportsBackgroundContentFetching;
@property (nonatomic, readonly) bool supportsBackgroundNetworkAuthentication;
@property (nonatomic, readonly) bool supportsUnboundedTaskCompletion;
@property (nonatomic, readonly) bool usesSocketMonitoring;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleInfoValuesForKeys:(id)arg1;
- (id)bundlePath;
- (id)containerOverrideIdentifier;
- (bool)continuousBackgroundMode;
- (id)dataContainerURL;
- (id)debugDescription;
- (id)environmentVariables;
- (id)executablePath;
- (id)extensionPointIdentifier;
- (bool)hasPreferredJetsamBand;
- (id)initWithLSProvider:(id)arg1 xpcProvider:(id)arg2 processIdentity:(id)arg3 processIdentifier:(id)arg4;
- (bool)isExtension;
- (int)platform;
- (int)preferredJetsamBand;
- (bool)supportsBackgroundAudio;
- (bool)supportsBackgroundContentFetching;
- (bool)supportsBackgroundNetworkAuthentication;
- (bool)supportsUnboundedTaskCompletion;
- (bool)usesSocketMonitoring;

@end
