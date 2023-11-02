
@interface CAMModeIndicatorView : UIControl {
    CAMModeDialItem * __modeTextView;
    UIImageView * __symbolView;
    long long  _selectedMode;
}

@property (nonatomic, readonly) CAMModeDialItem *_modeTextView;
@property (nonatomic, readonly) UIImageView *_symbolView;
@property (nonatomic) long long selectedMode;

- (void).cxx_destruct;
- (id)_modeTextView;
- (struct CGSize { double x1; double x2; })_symbolSize;
- (id)_symbolView;
- (void)_updateModeIndicatorAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)selectedMode;
- (void)setSelectedMode:(long long)arg1;
- (void)setSelectedMode:(long long)arg1 animated:(bool)arg2;

@end
