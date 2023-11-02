
@interface MUStackView : UIView {
    UIStackView * _stackView;
}

@property (nonatomic) long long alignment;
@property (nonatomic, readonly, copy) NSArray *arrangedSubviews;
@property (nonatomic) long long axis;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic) long long distribution;
@property (nonatomic) double spacing;

- (void).cxx_destruct;
- (void)_setupStackView;
- (void)addArrangedSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1 withCustomSpacing:(double)arg2;
- (long long)alignment;
- (id)arrangedSubviews;
- (long long)axis;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (long long)distribution;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)removeArrangedSubview:(id)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setArrangedSubviews:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setDistribution:(long long)arg1;
- (void)setSpacing:(double)arg1;
- (double)spacing;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
