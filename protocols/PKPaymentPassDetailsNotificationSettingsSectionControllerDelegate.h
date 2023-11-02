
@protocol PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate <NSObject>

@required

- (UITableViewCell *)cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)didSelectEditNotificationSettings:(PKPaymentPassDetailsNotificationSettingsSectionController *)arg1;
- (long long)indexOfSectionIdentifier:(NSString *)arg1;
- (void)recomputeMappedSectionsAndReloadSections:(NSArray *)arg1;
- (void)reloadSectionIdentifier:(NSString *)arg1;

@end
