
@interface NUIContentScrollView : UIScrollView {
    bool  _canScrollDocumentViewHorizontally;
    bool  _canScrollDocumentViewVertically;
    UIView * _documentView;
    long long  _horizontalAlignment;
    long long  _verticalAlignment;
}

@property (nonatomic) bool canScrollDocumentViewHorizontally;
@property (nonatomic) bool canScrollDocumentViewVertically;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *documentView;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (struct { double x1; double x2; })_baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_finalSizeForTargetSize:(struct CGSize { double x1; double x2; })arg1 resultSize:(struct CGSize { double x1; double x2; })arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_layoutHeightDependsOnWidth;
- (struct CGSize { double x1; double x2; })_measureSizeForTargetSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)canScrollDocumentViewHorizontally;
- (bool)canScrollDocumentViewVertically;
- (id)contentView;
- (id)documentView;
- (long long)horizontalAlignment;
- (id)initWithContentView:(id)arg1;
- (id)initWithDocumentView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layoutSubviews;
- (void)setCanScrollDocumentViewHorizontally:(bool)arg1;
- (void)setCanScrollDocumentViewVertically:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setDocumentView:(id)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)verticalAlignment;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
