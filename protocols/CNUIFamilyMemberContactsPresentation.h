
@protocol CNUIFamilyMemberContactsPresentation <NSObject>

@required

- (void)dismissPresentedViewController:(UIViewController *)arg1;
- (void)familyMemberContactsDidChange;
- (void)presentViewController:(UIViewController *)arg1;

@optional

- (void)presentedViewControllerDidCancel:(UIViewController *)arg1;

@end
