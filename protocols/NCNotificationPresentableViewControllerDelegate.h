
@protocol NCNotificationPresentableViewControllerDelegate <BNPresentableObserving>

@required

- (void)notificationPresentableViewController:(NCNotificationPresentableViewController *)arg1 presentationSize:(out struct CGSize { double x1; double x2; }*)arg2 containerSize:(out struct CGSize { double x1; double x2; }*)arg3;
- (bool)notificationPresentableViewControllerShouldPresentLongLook:(NCNotificationPresentableViewController *)arg1;

@end
