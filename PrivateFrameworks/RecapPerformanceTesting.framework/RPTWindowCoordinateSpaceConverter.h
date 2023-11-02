
@interface RPTWindowCoordinateSpaceConverter : RPTCoordinateSpaceConverter {
    id  _nsScreen;
    UIScreen * _screen;
    UIWindow * _window;
}

@property (nonatomic, retain) id nsScreen;
@property (nonatomic, retain) UIScreen *screen;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })convertSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })convertVector:(struct CGVector { double x1; double x2; })arg1;
- (id)initFromWindow:(id)arg1 toScreen:(id)arg2;
- (id)nsScreen;
- (id)screen;
- (void)setNsScreen:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
