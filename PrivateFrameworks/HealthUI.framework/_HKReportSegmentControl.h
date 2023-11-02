
@interface _HKReportSegmentControl : UIView {
    UIView * _dividerView;
    HKBarButtonItemControl * _rightControl;
    UISegmentedControl * _segmentControl;
}

@property (nonatomic, readonly) UIView *dividerView;
@property (nonatomic, readonly) HKBarButtonItemControl *rightControl;
@property (nonatomic, readonly) UISegmentedControl *segmentControl;

- (void).cxx_destruct;
- (id)dividerView;
- (id)initWithBackgroundColor:(id)arg1 dividerColor:(id)arg2 rightControl:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isOpaque;
- (void)layoutSubviews;
- (id)rightControl;
- (id)segmentControl;

@end
