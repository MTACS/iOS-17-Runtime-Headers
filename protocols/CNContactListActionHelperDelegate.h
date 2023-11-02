
@protocol CNContactListActionHelperDelegate <NSObject>

@required

- (void)action:(id <CNContactListAction>)arg1 presentViewController:(UIViewController *)arg2;
- (void)actionDidFinish:(id <CNContactListAction>)arg1;
- (UIContextMenuInteraction *)contextMenuInteraction;
- (UIViewController *)presentingViewControllerForActions;

@optional

- (void)listActionHelper:(CNContactListActionHelper *)arg1 didUpdateWithMenu:(NSArray *)arg2;

@end
