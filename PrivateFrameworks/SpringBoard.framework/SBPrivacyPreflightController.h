
@interface SBPrivacyPreflightController : NSObject <BSDescriptionStreamable> {
    NSMutableDictionary * _applicationPreflightControllers;
    PDCPreflightManager * _privacyPreflightManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (id)init;
- (void)preflightLaunchForApplication:(id)arg1 sceneIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)requiresPreflightForApplication:(id)arg1;

@end
