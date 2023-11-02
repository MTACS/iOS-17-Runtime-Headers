
@protocol WFToastManagerDelegate <NSObject>

@required

- (void)toastManager:(WFToastManager *)arg1 didDismissToastedSessionWithIdentifier:(NSString *)arg2;
- (void)toastManager:(WFToastManager *)arg1 didFailToToastSessionWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)toastManager:(WFToastManager *)arg1 didToastSessionWithIdentifier:(NSString *)arg2;

@end
