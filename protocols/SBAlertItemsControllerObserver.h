
@protocol SBAlertItemsControllerObserver <NSObject>

@required

- (void)alertItemsController:(SBAlertItemsController *)arg1 didActivateAlertItem:(SBAlertItem *)arg2;
- (void)alertItemsController:(SBAlertItemsController *)arg1 didDeactivateAlertItem:(SBAlertItem *)arg2 forReason:(int)arg3;
- (void)alertItemsController:(SBAlertItemsController *)arg1 willActivateAlertItem:(SBAlertItem *)arg2;

@end
