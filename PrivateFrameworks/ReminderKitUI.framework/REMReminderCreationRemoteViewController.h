
@interface REMReminderCreationRemoteViewController : _UIRemoteViewController <REMReminderCreationRemoteViewController> {
    UIViewController<REMReminderCreationPublicViewController> * _publicViewController;
}

@property (nonatomic) UIViewController<REMReminderCreationPublicViewController> *publicViewController;
@property (getter=viewServiceViewController, nonatomic, readonly) <REMReminderCreationViewServiceViewController> *viewServiceViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)publicViewController;
- (void)setPublicViewController:(id)arg1;
- (void)viewHostDidDismiss;
- (void)viewServiceDidCancel;
- (void)viewServiceDidFailWithError:(id)arg1;
- (void)viewServiceDidFinish;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (id)viewServiceViewController;

@end
