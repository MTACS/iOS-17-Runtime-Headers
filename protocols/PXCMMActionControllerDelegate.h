
@protocol PXCMMActionControllerDelegate <NSObject>

@required

- (NSProgress *)completeMyMomentViewController:(UIViewController *)arg1 performActionForSession:(PXCMMSession *)arg2;
- (NSProgress *)completeMyMomentViewController:(UIViewController *)arg1 performSendBackActionForSession:(PXCMMSession *)arg2;

@end
