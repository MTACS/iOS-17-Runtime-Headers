
@protocol SRAuthorizationClientDelegate <NSObject>

@required

- (void)authorizedServicesDidChange:(NSSet *)arg1 deniedServices:(NSSet *)arg2 dataCollectionEnabled:(bool)arg3 onboardingCompleted:(bool)arg4 lastModifiedTimes:(NSDictionary *)arg5 forBundleIdentifier:(NSString *)arg6;

@end
