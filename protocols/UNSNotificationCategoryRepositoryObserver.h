
@protocol UNSNotificationCategoryRepositoryObserver <NSObject>

@required

- (void)categoryRepository:(UNSNotificationCategoryRepository *)arg1 didChangeCategoriesForBundleIdentifier:(NSString *)arg2;

@end
