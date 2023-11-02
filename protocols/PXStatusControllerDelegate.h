
@protocol PXStatusControllerDelegate <NSObject>

@required

- (<PXPresentationEnvironment> *)presentationEnvironmentForStatusController:(PXStatusController *)arg1;
- (void)statusController:(PXStatusController *)arg1 configurationDidChange:(UIContentUnavailableConfiguration *)arg2;

@end
