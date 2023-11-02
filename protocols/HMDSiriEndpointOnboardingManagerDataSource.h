
@protocol HMDSiriEndpointOnboardingManagerDataSource <NSObject>

@required

- (HMDAccessory *)accessoryWithHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2;
- (void)applyOnboardingSelections:(void *)arg1 accessoryUUID:(void *)arg2 homeUUID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: HMSiriEndpointOnboardingSelections *, NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, long long, void*
- (void)enableUserListeningHistoryForHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2 userUUID:(NSUUID *)arg3;
- (NSNumber *)needsOnboardingForHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2;
- (void)setNeedsOnboardingCompleteWitHomeUUID:(void *)arg1 accessoryUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
