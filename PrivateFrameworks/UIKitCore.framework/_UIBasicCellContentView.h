
@interface _UIBasicCellContentView : UIView <_UIContentView, _UIContentViewComponentDescribing> {
    _UIBasicCellContentViewConfiguration * _animatingFromConfiguration;
    _UIBasicCellContentViewConfiguration * _animatingToConfiguration;
    _UIBasicCellContentViewConfiguration * _configuration;
    _UIContentViewEditingController * _editingController;
    UIImageView * _imageView;
    double  _preferredMaxLayoutWidth;
    id /* block */  _primaryTextFrameDidChangeHandler;
    UILabel * _textLabel;
}

@property (nonatomic, readonly) bool _preventFocus;
@property (setter=_setPrimaryTextFrameDidChangeHandler:, nonatomic, copy) id /* block */ _primaryTextFrameDidChangeHandler;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _primaryTextLayoutFrame;
@property (nonatomic, readonly) NSLayoutRect *_primaryTextLayoutRect;
@property (nonatomic, copy) _UIBasicCellContentViewConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (id)_encodableSubviews;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)_multilineContextWidth;
- (bool)_needsDoubleUpdateConstraintsPass;
- (double)_preferredMaxLayoutWidth;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_preventFocus;
- (id /* block */)_primaryTextFrameDidChangeHandler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_primaryTextLayoutFrame;
- (id)_primaryTextLayoutRect;
- (void)_setMultilineContextWidth:(double)arg1;
- (void)_setPrimaryTextFrameDidChangeHandler:(id /* block */)arg1;
- (bool)becomeFirstResponder;
- (id)configuration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)setConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)textLabel;

@end
