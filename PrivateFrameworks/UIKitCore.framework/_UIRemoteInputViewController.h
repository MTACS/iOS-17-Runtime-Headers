
@interface _UIRemoteInputViewController : _UIRemoteViewController

+ (bool)__shouldHostRemoteTextEffectsWindow;

- (bool)_canShowWhileLocked;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForServiceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidInvalidateIntrinsicContentSize;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
