
@protocol PXTipsPresentationDelegate

@required

- (void)prepareTipPopover:(UIPopoverPresentationController *)arg1 tipID:(NSString *)arg2;
- (UIViewController *)presentationControllerForTipID:(NSString *)arg1;

@optional

- (void)tipPopoverDidDismissWithTipID:(NSString *)arg1;
- (void)tipPopoverDidPresentWithTipID:(NSString *)arg1;

@end
