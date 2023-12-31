
@protocol EKEditItemViewControllerProtocol

@optional

- (<EKEditItemViewControllerDelegate> *)editDelegate;
- (bool)editItemShouldBeAskedForInjectableViewController;
- (bool)presentModally;
- (void)saveAndDismissWithExtremePrejudice;
- (void)setEditDelegate:(id <EKEditItemViewControllerDelegate>)arg1;
- (void)setEditItemShouldBeAskedForInjectableViewController:(bool)arg1;
- (void)setPresentModally:(bool)arg1;
- (void)setUseCustomBackButton:(bool)arg1;
- (bool)useCustomBackButton;

@end
