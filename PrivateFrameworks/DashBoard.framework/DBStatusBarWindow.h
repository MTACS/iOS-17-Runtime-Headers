
@interface DBStatusBarWindow : UIWindow {
    bool  _rightHandDrive;
}

@property (getter=isRightHandDrive, nonatomic) bool rightHandDrive;

- (bool)_canBecomeKeyWindow;
- (bool)_reversesLinearFocusWrapping;
- (bool)isRightHandDrive;
- (void)setRightHandDrive:(bool)arg1;

@end
