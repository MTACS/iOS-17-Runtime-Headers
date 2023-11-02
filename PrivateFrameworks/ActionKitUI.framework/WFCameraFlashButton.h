
@interface WFCameraFlashButton : UIControl {
    bool  _expanded;
    UIImageView * _flashView;
    NSArray * _labels;
    bool  _needsHiding;
    UILabel * _selectedLabel;
}

@property (nonatomic) bool expanded;
@property (nonatomic) long long flashMode;
@property (nonatomic) UIImageView *flashView;
@property (nonatomic, retain) NSArray *labels;
@property (nonatomic) bool needsHiding;
@property (nonatomic, retain) UILabel *selectedLabel;

- (void).cxx_destruct;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (bool)expanded;
- (long long)flashMode;
- (id)flashView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)labels;
- (void)layoutSubviews;
- (bool)needsHiding;
- (id)selectedLabel;
- (void)setExpanded:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setFlashView:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setNeedsHiding:(bool)arg1;
- (void)setSelectedLabel:(id)arg1;

@end
