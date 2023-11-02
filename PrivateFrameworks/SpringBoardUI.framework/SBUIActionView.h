
@interface SBUIActionView : UIView {
    SBUIAction * _action;
    UIView * _highlightView;
    bool  _highlighted;
    long long  _imagePosition;
    UIImageView * _imageView;
    NSArray * _imageViewLayoutConstraints;
    bool  _interfaceOrientationIsPortrait;
    SBUIActionViewLabel * _subtitleLabel;
    UIView * _textContainer;
    SBUIActionViewLabel * _titleLabel;
    MTVisualStylingProvider * _visualStylingProviderFill;
    MTVisualStylingProvider * _visualStylingProviderStroke;
}

@property (nonatomic, readonly) SBUIAction *action;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) long long imagePosition;
@property (nonatomic, readonly) double leadingContentMargin;
@property (nonatomic, readonly) double trailingContentMargin;

- (void).cxx_destruct;
- (void)_invalidateVisualStyling;
- (void)_setupSubviews;
- (void)_updateImageViewLayoutConstraints;
- (void)_updateVisualStylingIfNecessary;
- (id)action;
- (long long)imagePosition;
- (id)initWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (double)leadingContentMargin;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 withFeedbackRetargetBehavior:(id)arg2;
- (void)setImagePosition:(long long)arg1;
- (double)trailingContentMargin;
- (void)willMoveToSuperview:(id)arg1;

@end
