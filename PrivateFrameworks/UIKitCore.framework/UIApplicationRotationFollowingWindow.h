
@interface UIApplicationRotationFollowingWindow : UIWindow {
    bool  _limitToWindowLevel;
    long long  _priorityLevel;
}

@property (nonatomic) bool limitToWindowLevel;
@property (nonatomic) long long priorityLevel;

+ (bool)_isSystemWindow;

- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (void)_commonApplicationRotationFollowingWindowInit;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attached:(bool)arg2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 attached:(bool)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 displayConfiguration:(id)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 scene:(id)arg3 attached:(bool)arg4;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 windowScene:(id)arg3;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)_shouldControlAutorotation;
- (id)_topMostWindow;
- (void)applicationWindow:(id)arg1 didRotateWithOrientation:(long long)arg2 duration:(double)arg3;
- (id)init;
- (id)initWithWindowScene:(id)arg1;
- (bool)isInterfaceAutorotationDisabled;
- (bool)limitToWindowLevel;
- (long long)priorityLevel;
- (void)setLimitToWindowLevel:(bool)arg1;
- (void)setPriorityLevel:(long long)arg1;

@end
