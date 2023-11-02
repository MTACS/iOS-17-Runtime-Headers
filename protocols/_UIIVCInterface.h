
@protocol _UIIVCInterface <NSObject>

@required

- (void)_handleInputViewControllerState:(_UIInputViewControllerState *)arg1;
- (void)_tearDownRemoteService;
- (<_UIIVCResponseDelegate> *)responseDelegate;
- (void)setResponseDelegate:(id <_UIIVCResponseDelegate>)arg1;

@end
