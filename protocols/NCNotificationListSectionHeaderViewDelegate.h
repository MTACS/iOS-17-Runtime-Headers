
@protocol NCNotificationListSectionHeaderViewDelegate <NSObject>

@required

- (UIView *)containerViewForHeaderViewPreviewInteractionPresentedContent:(NCNotificationListSectionHeaderView *)arg1;
- (_UILegibilitySettings *)legibilitySettingsForSectionHeaderView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderView:(NCNotificationListSectionHeaderView *)arg1 didReceiveClearActionForSectionIdentifier:(NSString *)arg2;
- (void)sectionHeaderViewDidBeginForceTouchInteraction:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidDismissForceTouchView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidPresentForceTouchView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidReceiveClearAllAction:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidTransitionToClearState:(NCNotificationListSectionHeaderView *)arg1;

@optional

- (void)sectionHeaderViewDidRequestCollapsing:(NCNotificationListSectionHeaderView *)arg1;

@end
