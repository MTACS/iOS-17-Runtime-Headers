
@protocol PXPeoplePickerConfigurationControllerHandler <NSObject>

@required

- (void)peopleConfigurationController:(PXPeoplePickerConfigurationController *)arg1 didFinishWithCurrentViewController:(UIViewController *)arg2 selectedPerson:(PHPerson *)arg3;
- (void)peopleConfigurationController:(PXPeoplePickerConfigurationController *)arg1 didPopViewController:(UIViewController *)arg2;

@end
