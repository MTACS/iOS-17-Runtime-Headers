
@interface SBSnapshotWindow : UIWindow {
    long long  _orientation;
}

+ (bool)_isSecure;

- (id)initWithWindowScene:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 orientation:(long long)arg3;
- (long long)interfaceOrientation;

@end
