
@interface EKDayViewWithGutters : UIView {
    double  _allDayHeight;
    EKDayView * _dayView;
    double  _gutterWidth;
    EKDayAllDayView * _leftAllDayView;
    UIView * _leftGutter;
    EKDayAllDayView * _rightAllDayView;
    UIView * _rightGutter;
    long long  _targetSizeClass;
}

@property (nonatomic) double allDayHeight;
@property (nonatomic, retain) EKDayView *dayView;
@property (nonatomic) double gutterWidth;
@property (nonatomic, readonly) UIView *leftGutter;
@property (nonatomic, readonly) UIView *rightGutter;

- (void).cxx_destruct;
- (id)_createAllDayView;
- (double)allDayHeight;
- (id)dayView;
- (double)gutterWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 dayView:(id)arg2 sizeClass:(long long)arg3;
- (id)leftGutter;
- (id)rightGutter;
- (void)setAllDayHeight:(double)arg1;
- (void)setDayView:(id)arg1;
- (void)setGutterWidth:(double)arg1;

@end
