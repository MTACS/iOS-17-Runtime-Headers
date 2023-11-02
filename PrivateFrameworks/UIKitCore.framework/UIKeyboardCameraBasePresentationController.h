
@interface UIKeyboardCameraBasePresentationController : UIPresentationController {
    bool  _presentingOverKeyboard;
}

@property (nonatomic) bool presentingOverKeyboard;
@property (nonatomic, readonly) bool updatesGuideDuringRotation;

- (void)postNotificationsForType:(unsigned long long)arg1 forStart:(bool)arg2;
- (void)postNotificationsForType:(unsigned long long)arg1 from:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 to:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 forStart:(bool)arg4;
- (bool)presentingOverKeyboard;
- (void)setPresentingOverKeyboard:(bool)arg1;
- (bool)updatesGuideDuringRotation;

@end
