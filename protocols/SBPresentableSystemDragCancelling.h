
@protocol SBPresentableSystemDragCancelling <NSObject>

@required

- (void)setSystemDragCancellationHandler:(id <SBPresentableSystemDragCancellationHandler>)arg1;
- (bool)shouldDisableTouchCancellationForTouch:(UITouch *)arg1 event:(UIEvent *)arg2;
- (<SBPresentableSystemDragCancellationHandler> *)systemDragCancellationHandler;

@end
