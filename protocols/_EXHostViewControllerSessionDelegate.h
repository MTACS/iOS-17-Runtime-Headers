
@protocol _EXHostViewControllerSessionDelegate <NSObject, _EXConnectionHandler>

@required

- (void)hostSessionDidInvalidate:(_EXHostViewControllerSession *)arg1;
- (void)hostSessionDidPrepareForHosting:(_EXHostViewControllerSession *)arg1;
- (UIView *)hostSessionHostView:(_EXHostViewControllerSession *)arg1;
- (void)hostSessionViewControllerReady:(_EXHostViewControllerSession *)arg1;

@end
