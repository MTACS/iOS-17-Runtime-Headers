
@interface SBMutableDeviceApplicationScenePlaceholderContentContext : SBDeviceApplicationScenePlaceholderContentContext

@property (nonatomic) bool hasOrientationMismatchForClassicApp;
@property (nonatomic) long long layoutEnvironment;
@property (nonatomic) unsigned long long preferredContentType;
@property (nonatomic) bool prefersLiveXIB;
@property (nonatomic, copy) NSString *requestedLaunchIdentifier;
@property (nonatomic) long long sizingPolicy;
@property (nonatomic, copy) NSURL *url;

@end
