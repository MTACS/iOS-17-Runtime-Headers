
@interface TUIPredictionViewStackView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentMargin;
    TUIPredictionViewStackContentView * _contentView;
    long long  _layoutDirection;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentMargin;
@property (nonatomic, retain) TUIPredictionViewStackContentView *contentView;
@property (nonatomic) long long layoutDirection;

- (void).cxx_destruct;
- (long long)_layoutTypeForSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
- (id)allVisibleCells;
- (id)arrangedSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentMargin;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutDirection;
- (void)layoutSubviews;
- (void)setContentMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentView:(id)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (id)subStackViews;
- (id)visibleCells;

@end
