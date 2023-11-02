
@interface CNModernAtomBackgroundView : UIView {
    CNAtomView * _hostAtomView;
    double  _scalingFactor;
    bool  _selected;
    UIView * _selectedView;
    unsigned long long  _selectionStyle;
    int  _separatorStyle;
    UIView * _separatorView;
}

@property (nonatomic) CNAtomView *hostAtomView;
@property (nonatomic) double scalingFactor;
@property (nonatomic, readonly) UIView *selectedView;
@property (nonatomic) int separatorStyle;
@property (nonatomic, readonly) UIView *separatorView;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_backgroundBleedArea;
- (id)_chevronImage;
- (void)_setSelectionStyle:(unsigned long long)arg1;
- (void)_setupBackgroundView;
- (bool)appearsSelected;
- (void)displaySelectionChangeWithAnimation:(bool)arg1;
- (id)hostAtomView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateIntrinsicContentSize;
- (bool)isSelected;
- (void)layoutSubviews;
- (double)scalingFactor;
- (id)selectedView;
- (int)separatorStyle;
- (id)separatorView;
- (double)separatorWidth;
- (void)setHostAtomView:(id)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 style:(unsigned long long)arg3 updateVisualSelection:(bool)arg4;
- (void)setSeparatorStyle:(int)arg1;
- (void)tintColorDidChange;
- (id)wrappedTintColor;

@end
