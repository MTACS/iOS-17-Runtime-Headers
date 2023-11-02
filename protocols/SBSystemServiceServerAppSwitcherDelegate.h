
@protocol SBSystemServiceServerAppSwitcherDelegate <SBSystemServiceServerDelegate>

@required

- (void)systemServiceServer:(void *)arg1 requestAppearanceForHiddenAppWithBundleIdentifier:(void *)arg2 assertionPort:(void *)arg3 forClient:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 10: SBSystemServiceServer *, NSString *, BSMachPortSendRight *, <FBSServiceFacilityClientHandle> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
