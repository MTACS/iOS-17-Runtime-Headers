
@interface CKPresentationControllerWindow : UIWindow {
    bool  _restrictedToPortraitOrientation;
}

@property (nonatomic) bool restrictedToPortraitOrientation;

- (bool)_canAffectStatusBarAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 allowsRotation:(bool)arg2 restrictedToPortraitOrientation:(bool)arg3;
- (id)initWithWindowScene:(id)arg1 allowsRotation:(bool)arg2 restrictedToPortraitOrientation:(bool)arg3;
- (id)initWithWindowScene:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 allowsRotation:(bool)arg3 restrictedToPortraitOrientation:(bool)arg4;
- (bool)restrictedToPortraitOrientation;
- (void)restrictedToPortraitOrientation:(bool)arg1;
- (void)setRestrictedToPortraitOrientation:(bool)arg1;

@end
