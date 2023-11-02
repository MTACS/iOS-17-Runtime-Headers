
@protocol SBApplicationServerMultiwindowDelegate <SBApplicationServerDelegate>

@required

- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 requestShelfPresentationForSceneWithIdentifier:(NSString *)arg3;
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 showAllWindowsForBundleIdentifier:(NSString *)arg3;

@end
