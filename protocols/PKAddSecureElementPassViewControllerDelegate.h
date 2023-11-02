
@protocol PKAddSecureElementPassViewControllerDelegate <NSObject>

@required

- (void)addSecureElementPassViewController:(PKAddSecureElementPassViewController *)arg1 didFinishAddingSecureElementPasses:(NSArray *)arg2 error:(NSError *)arg3;

@optional

- (void)addSecureElementPassViewController:(PKAddSecureElementPassViewController *)arg1 didFinishAddingSecureElementPass:(PKSecureElementPass *)arg2 error:(NSError *)arg3;

@end
