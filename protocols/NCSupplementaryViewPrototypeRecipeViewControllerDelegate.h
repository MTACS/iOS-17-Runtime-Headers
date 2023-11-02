
@protocol NCSupplementaryViewPrototypeRecipeViewControllerDelegate <NCNotificationListBaseComponentDelegate>

@required

- (unsigned long long)prototypeRecipeViewController:(NCSupplementaryViewPrototypeRecipeViewController *)arg1 requestsCountForGroupWithIdentifier:(NSString *)arg2;
- (void)requestsInsertForPrototypeRecipeViewController:(NCSupplementaryViewPrototypeRecipeViewController *)arg1;
- (void)requestsRemovalForPrototypeRecipeViewController:(NCSupplementaryViewPrototypeRecipeViewController *)arg1;
- (void)requestsUpdateForPrototypeRecipeViewController:(NCSupplementaryViewPrototypeRecipeViewController *)arg1;
- (void)requestsUpdatePositionIfNeededForPrototypeRecipeViewController:(NCSupplementaryViewPrototypeRecipeViewController *)arg1;

@end
