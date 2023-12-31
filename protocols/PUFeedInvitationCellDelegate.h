
@protocol PUFeedInvitationCellDelegate <PUFeedCellDelegate>

@optional

- (void)feedInvitationCell:(PUFeedInvitationCell *)arg1 didAccept:(bool)arg2;
- (void)feedInvitationCell:(PUFeedInvitationCell *)arg1 presentViewController:(UIViewController *)arg2;
- (void)feedInvitationCellReportAsJunk:(PUFeedInvitationCell *)arg1;

@end
