
@interface SBApplicationMultiwindowService : NSObject <SBApplicationServerMultiwindowDelegate> {
    FBServiceClientAuthenticator * _requestShelfPresentationEntitlementAuthenticator;
    FBServiceClientAuthenticator * _triggerShowAllWindowsEntitlementAuthenticator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)applicationServer:(id)arg1 client:(id)arg2 requestShelfPresentationForSceneWithIdentifier:(id)arg3;
- (void)applicationServer:(id)arg1 client:(id)arg2 showAllWindowsForBundleIdentifier:(id)arg3;
- (id)init;
- (void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg1;
- (void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg1 displayConfiguration:(id)arg2;

@end
