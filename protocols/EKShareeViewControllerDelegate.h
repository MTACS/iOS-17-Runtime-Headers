
@protocol EKShareeViewControllerDelegate <NSObject>

@required

- (void)shareeViewController:(EKShareeViewController *)arg1 didCompleteWithAction:(int)arg2;
- (void)shareeViewControllerDidChangeAccessLevel:(EKShareeViewController *)arg1;

@end
