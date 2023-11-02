
@protocol PUAssetPickerContainerControllerActionHandler <NSObject>

@required

- (void)containerController:(UIViewController *)arg1 didTapAddButton:(id)arg2;
- (void)containerController:(UIViewController *)arg1 didTapBatchedItems:(NSOrderedSet *)arg2;
- (void)containerController:(UIViewController *)arg1 didTapCancelButton:(id)arg2;
- (void)containerController:(UIViewController *)arg1 didTapClearButton:(id)arg2;
- (void)containerController:(UIViewController *)arg1 didTapShowSelectedButton:(id)arg2;
- (void)containerControllerDidAppear:(UIViewController *)arg1;
- (void)containerControllerWantsToLearnMoreAboutDataAccess:(UIViewController *)arg1;

@end
