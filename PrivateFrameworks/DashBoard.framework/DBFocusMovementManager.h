
@interface DBFocusMovementManager : NSObject {
    unsigned long long  _currentSenderID;
    CARInputDeviceTouchpad * _currentTouchpad;
    DBEnvironmentConfiguration * _environmentConfiguration;
}

@property (nonatomic) DBEnvironmentConfiguration *environmentConfiguration;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2 toScreen:(id)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2 fromScreen:(id)arg3;
+ (bool)isMovementAllowedForHeading:(unsigned long long)arg1 direction:(unsigned long long)arg2 isRTL:(bool)arg3 isLeftHandDrive:(bool)arg4 statusBarEdge:(unsigned long long)arg5;
+ (bool)isOEMToiOSHeadingToStatusBar:(unsigned long long)arg1 isLeftHandDrive:(bool)arg2 statusBarEdge:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)environmentConfiguration;
- (id)initWithEnvironmentConfiguration:(id)arg1;
- (void)performHapticFeedbackForSenderID:(unsigned long long)arg1;
- (void)setEnvironmentConfiguration:(id)arg1;

@end
