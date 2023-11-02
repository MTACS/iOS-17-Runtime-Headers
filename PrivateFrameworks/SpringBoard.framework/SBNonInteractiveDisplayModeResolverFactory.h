
@interface SBNonInteractiveDisplayModeResolverFactory : NSObject <SBWindowingModeResolverFactory> {
    SBApplicationController * _applicationController;
    SBWindowScene * _monitoredWindowScene;
    <SBFAuthenticationStatusProvider> * _userAuthenticationProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayWindowingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)displayWindowingMode;
- (id)initWithApplicationController:(id)arg1 userAuthenticationProvider:(id)arg2 monitoredWindowScene:(id)arg3;
- (id)resolverForPhysicalDisplay:(id)arg1;

@end
