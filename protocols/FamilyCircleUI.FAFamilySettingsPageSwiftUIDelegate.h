
@protocol FamilyCircleUI.FAFamilySettingsPageSwiftUIDelegate

@required

- (void)addFamilyMemberButtonWasTapped;
- (void)didSelectSubscriptionWithURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)didSelectSubscriptionWithURLMemberDetails:(void *)arg1 familyMemberDSID:(void *)arg2 serviceName:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSURL *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)didTapAddRemoteGuardianFor:(FAFamilyMember *)arg1;
- (void)pendingFamilyMemberWasTapped:(FAFamilyMember *)arg1;
- (void)stopFamilySharing;

@end
