
@protocol PKGSVWalletHeaderViewDelegate <NSObject>

@required

- (unsigned long long)inboxBadgeCountForSectionHeaderView:(PKGSVWalletHeaderView *)arg1;
- (bool)inboxVisibleForSectionheaderView:(PKGSVWalletHeaderView *)arg1;
- (PKPass *)passForSectionHeaderView:(PKGSVWalletHeaderView *)arg1;
- (void)presentInvitationsForHeaderView:(PKGSVWalletHeaderView *)arg1;
- (void)presentOrderManagementForHeaderView:(PKGSVWalletHeaderView *)arg1;
- (void)presentPassDetailsForHeaderView:(PKGSVWalletHeaderView *)arg1;
- (void)presentPaymentSetupForHeaderView:(PKGSVWalletHeaderView *)arg1;

@end
