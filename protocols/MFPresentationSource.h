
@protocol MFPresentationSource <NSObject>

@required

- (void)mf_setAsSourceForPopoverPresentationController:(UIPopoverPresentationController *)arg1;

@optional

- (void)mf_setAsSourceWithExtendedRectForPopoverPresentationController:(UIPopoverPresentationController *)arg1;
- (void)mf_setAsTargetedSourceOnSceneConfiguration:(UIWindowSceneActivationConfiguration *)arg1;

@end
