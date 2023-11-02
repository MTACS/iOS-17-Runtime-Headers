
@protocol CNContactListActionDelegate <NSObject>

@required

- (void)action:(id <CNContactListAction>)arg1 presentViewController:(UIViewController *)arg2;
- (void)actionDidFinish:(id <CNContactListAction>)arg1;
- (UIViewController *)presentingViewControllerForActions;

@end
