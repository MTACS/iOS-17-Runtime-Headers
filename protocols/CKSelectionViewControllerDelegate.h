
@protocol CKSelectionViewControllerDelegate <NSObject>

@required

- (bool)anyConversationsExistFor:(CKSelectionViewController *)arg1;
- (bool)areSelectedConversationsBlocked;
- (void)deleteAllButtonPressedOnSelectionViewController:(CKSelectionViewController *)arg1;
- (void)deleteButtonPressedOnSelectionViewController:(CKSelectionViewController *)arg1;
- (void)recoverButtonPressedOnSelectionViewController:(CKSelectionViewController *)arg1;
- (NSString *)secondaryTextForSelectionViewController:(CKSelectionViewController *)arg1;
- (unsigned long long)selectedCountForSelectionViewController:(CKSelectionViewController *)arg1;
- (void)selectionViewControllerSelectedCompose;
- (bool)shouldUseJunkFilteringConfigurationForSelectionViewController:(CKSelectionViewController *)arg1;
- (bool)shouldUseRecentlyDeletedConfigurationForSelectionViewController:(CKSelectionViewController *)arg1;

@end
