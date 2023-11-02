
@protocol HUAddPeopleViewControllerDelegate <NSObject>

@required

- (void)addPeopleViewControllerDidCancel:(UIViewController *)arg1;

@optional

- (void)addPeopleViewController:(HUAddPeopleViewController *)arg1 didSendInvitations:(NSArray *)arg2;

@end
