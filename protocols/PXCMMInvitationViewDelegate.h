
@protocol PXCMMInvitationViewDelegate <NSObject>

@required

- (void)presentDetailViewForInvitationView:(PXCMMInvitationView *)arg1 animated:(bool)arg2;

@optional

- (void)invitationViewSizeThatFitsDidChange:(PXCMMInvitationView *)arg1;

@end
