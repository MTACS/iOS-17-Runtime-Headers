
@protocol CNVisualIdentityPickerPresenterDelegate <NSObject>

@required

- (void)visualIdentityPicker:(CNVisualIdentityPickerViewController *)arg1 presentationControllerWillDismiss:(UIPresentationController *)arg2;

@optional

- (void)visualIdentityPicker:(CNVisualIdentityPickerViewController *)arg1 dismissViewController:(UIViewController *)arg2;
- (void)visualIdentityPicker:(CNVisualIdentityPickerViewController *)arg1 presentViewController:(UIViewController *)arg2;

@end
