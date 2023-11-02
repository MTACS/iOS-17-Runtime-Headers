
@protocol UIActivityViewControllerAirDropDelegate <NSObject>

@optional

- (void)activityViewController:(UIActivityViewController *)arg1 willStartAirdropTransferToRecipient:(NSString *)arg2;
- (void)activityViewController:(UIActivityViewController *)arg1 willStartAirdropTransferToRecipient:(NSString *)arg2 contactIdentifier:(NSString *)arg3;
- (void)activityViewControllerDidFinishAirdropTransfer:(UIActivityViewController *)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(UIActivityViewController *)arg1;

@end
