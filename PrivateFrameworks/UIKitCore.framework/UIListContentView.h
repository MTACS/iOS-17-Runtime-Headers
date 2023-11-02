
@interface UIListContentView : UIView <UIContentView, _UIContentViewComponentDescribing> {
    UIListContentConfiguration * _animatingFromConfiguration;
    UIListContentConfiguration * _animatingToConfiguration;
    UIListContentConfiguration * _configuration;
    struct { 
        unsigned int imageViewFrameInvalid : 1; 
        unsigned int textLabelFrameInvalid : 1; 
        unsigned int secondaryTextLabelFrameInvalid : 1; 
    }  _contentViewFlags;
    UILayoutGuide * _imageLayoutGuide;
    _UIListContentImageView * _imageView;
    double  _preferredMaxLayoutWidth;
    id /* block */  _primaryTextFrameDidChangeHandler;
    UILabel * _secondaryTextLabel;
    UILayoutGuide * _secondaryTextLayoutGuide;
    UILabel * _textLabel;
    UILayoutGuide * _textLayoutGuide;
}

@property (setter=_setPrimaryTextFrameDidChangeHandler:, nonatomic, copy) id /* block */ _primaryTextFrameDidChangeHandler;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _primaryTextLayoutFrame;
@property (nonatomic, readonly) NSLayoutRect *_primaryTextLayoutRect;
@property (nonatomic, copy) UIListContentConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILayoutGuide *imageLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *secondaryTextLayoutGuide;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILayoutGuide *textLayoutGuide;

- (void).cxx_destruct;
- (id)_encodableSubviews;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)_multilineContextWidth;
- (bool)_needsDoubleUpdateConstraintsPass;
- (double)_preferredMaxLayoutWidth;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)_primaryTextFrameDidChangeHandler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_primaryTextLayoutFrame;
- (id)_primaryTextLayoutRect;
- (void)_setMultilineContextWidth:(double)arg1;
- (void)_setPrimaryTextFrameDidChangeHandler:(id /* block */)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)configuration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageLayoutGuide;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutSubviews;
- (id)secondaryTextLayoutGuide;
- (void)setConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)textLayoutGuide;

@end
