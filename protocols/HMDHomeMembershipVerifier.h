
@protocol HMDHomeMembershipVerifier <NSObject>

@required

- (bool)expectingInvitationResponseForIdentifier:(NSUUID *)arg1;
- (bool)userWithMergeIdIsMemberOfAHome:(NSString *)arg1;

@end
