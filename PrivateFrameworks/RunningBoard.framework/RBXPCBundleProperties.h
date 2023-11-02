
@interface RBXPCBundleProperties : NSObject <RBBundleProperties> {
    bool  _canFetchBundle;
    NSString * _containerOverrideIdentifier;
    bool  _continuousBackgroundMode;
    NSURL * _dataContainerURL;
    NSDictionary * _environmentVariables;
    NSString * _executablePath;
    NSString * _extensionPointIdentifier;
    bool  _hasPreferredJetsamBand;
    NSString * _identifier;
    bool  _isExtension;
    NSString * _path;
    int  _pid;
    int  _platform;
    NSCache * _plistValues;
    int  _preferredJetsamBand;
    bool  _supportsBackgroundAudio;
    bool  _supportsBackgroundContentFetching;
    bool  _supportsBackgroundNetworkAuthentication;
    bool  _supportsUnboundedTaskCompletion;
    bool  _usesSocketMonitoring;
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
- (id)environmentVariables;
- (id)executablePath;
- (id)extensionPointIdentifier;
- (bool)hasPreferredJetsamBand;
- (id)initWithPID:(int)arg1;
- (bool)isExtension;
- (int)platform;
- (int)preferredJetsamBand;
- (bool)supportsBackgroundAudio;
- (bool)supportsBackgroundContentFetching;
- (bool)supportsBackgroundNetworkAuthentication;
- (bool)supportsUnboundedTaskCompletion;
- (bool)usesSocketMonitoring;

@end
