
@protocol CNContactActionsControllerDelegate <NSObject>

@required

- (void)contactActionsController:(CNContactActionsController *)arg1 didSelectAction:(CNUIUserActionItem *)arg2;

@optional

- (void)contactActionsController:(CNContactActionsController *)arg1 didUpdateWithMenu:(NSArray *)arg2;

@end
