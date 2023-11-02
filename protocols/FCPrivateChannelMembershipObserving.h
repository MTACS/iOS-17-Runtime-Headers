
@protocol FCPrivateChannelMembershipObserving <NSObject>

@optional

- (void)privateChannelMembershipController:(FCPrivateChannelMembershipController *)arg1 didAddMemberships:(NSSet *)arg2 changedMemberships:(NSSet *)arg3 removedMemberships:(NSSet *)arg4;

@end
