
@protocol SBApplicationServerMiscDelegate <SBApplicationServerDelegate>

@required

- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 deleteSnapshotsForApplicationIdentifier:(NSString *)arg3;

@end
