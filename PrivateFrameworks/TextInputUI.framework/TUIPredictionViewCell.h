
@interface TUIPredictionViewCell : UIView <UIScrollViewDelegate> {
    UIView * _backgroundView;
    UIColor * _backgroundViewHighlightColor;
    TIKeyboardCandidate * _candidate;
    UIColor * _highlightColor;
    double  _highlightCornerRadius;
    double  _highlightMargin;
    bool  _highlighted;
    UIColor * _imageTintColor;
    UIImageView * _imageView;
    bool  _labelTruncated;
    UIView * _leftSeparatorView;
    UIScrollView * _maskingScrollView;
    UIMorphingLabel * _morphingLabel;
    UILabel * _normalLabel;
    UIKBRenderConfig * _renderConfig;
    UIView * _rightSeparatorView;
    unsigned long long  _roundedHighlightEdges;
    UIView * _secureCandidateLabel;
    UIColor * _separatorColor;
    double  _separatorMargin;
    UIColor * _textColor;
    bool  _useContinuousCornerInHighlight;
    unsigned long long  _visibleSeparatorEdges;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIColor *backgroundViewHighlightColor;
@property (nonatomic, retain) TIKeyboardCandidate *candidate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic) double highlightCornerRadius;
@property (nonatomic) double highlightMargin;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *imageTintColor;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIFont *labelFont;
@property (getter=isLabelTruncated, nonatomic) bool labelTruncated;
@property (nonatomic, readonly) long long layoutType;
@property (nonatomic, retain) UIView *leftSeparatorView;
@property (nonatomic, retain) UIScrollView *maskingScrollView;
@property (nonatomic, retain) UIMorphingLabel *morphingLabel;
@property (nonatomic, retain) UILabel *normalLabel;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (nonatomic, retain) UIView *rightSeparatorView;
@property (nonatomic) unsigned long long roundedHighlightEdges;
@property (nonatomic, retain) UIView *secureCandidateLabel;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) double separatorMargin;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) bool useContinuousCornerInHighlight;
@property (nonatomic) unsigned long long visibleSeparatorEdges;

+ (bool)_useSeparatorViews;
+ (id)cellHighlightColorForDarkStyle:(bool)arg1;

- (void).cxx_destruct;
- (id)_displayLabelForCandidate:(id)arg1;
- (bool)_isEmojiCandidate:(id)arg1;
- (bool)_isSecureCandidate:(id)arg1;
- (bool)_isStickerCandidate:(id)arg1;
- (id)_preferredBackgroundColor;
- (id)_preferredTextColorForHighlighted:(bool)arg1 useDarkStyle:(bool)arg2;
- (bool)_renderConfigUsesDarkStyle:(id)arg1;
- (void)_updateColorsForRenderConfig:(id)arg1 highlighted:(bool)arg2;
- (void)_updateCornerRadius;
- (bool)_usePadStyle;
- (bool)_usesMorphingLabelForCandidate:(id)arg1;
- (id)attributedStringRepresentationOfCandidate:(id)arg1;
- (id)backgroundView;
- (id)backgroundViewHighlightColor;
- (id)candidate;
- (bool)candidateRequiresTruncationForBoundingWidth:(double)arg1;
- (id)centerTruncatedStringForString:(id)arg1 withAttributes:(id)arg2 fittingWidth:(double)arg3;
- (id)currentTextSuggestion;
- (id)displayTextAttributesForMultiline:(bool)arg1 header:(bool)arg2;
- (id)headerTextAttributes;
- (id)highlightColor;
- (double)highlightCornerRadius;
- (double)highlightMargin;
- (bool)highlighted;
- (id)image;
- (id)imageTintColor;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLabelTruncated;
- (id)labelFont;
- (struct CGSize { double x1; double x2; })labelTextSizeForCandidate:(id)arg1;
- (id)labelView;
- (id)labelViewForCandidate:(id)arg1;
- (void)layoutSubviews;
- (long long)layoutType;
- (id)leftSeparatorView;
- (id)maskingScrollView;
- (id)morphingLabel;
- (id)normalLabel;
- (id)renderConfig;
- (id)rightSeparatorView;
- (unsigned long long)roundedHighlightEdges;
- (void)scrollViewDidScroll:(id)arg1;
- (id)secureCandidateLabel;
- (id)separatorColor;
- (double)separatorMargin;
- (void)setBackgroundView:(id)arg1;
- (void)setBackgroundViewHighlightColor:(id)arg1;
- (void)setCandidate:(id)arg1;
- (void)setCandidate:(id)arg1 animated:(bool)arg2;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightCornerRadius:(double)arg1;
- (void)setHighlightMargin:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageTintColor:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setLabelTruncated:(bool)arg1;
- (void)setLeftSeparatorView:(id)arg1;
- (void)setMaskingScrollView:(id)arg1;
- (void)setMorphingLabel:(id)arg1;
- (void)setNormalLabel:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setRightSeparatorView:(id)arg1;
- (void)setRoundedHighlightEdges:(unsigned long long)arg1;
- (void)setSecureCandidateLabel:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorMargin:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUseContinuousCornerInHighlight:(bool)arg1;
- (void)setVisibleSeparatorEdges:(unsigned long long)arg1;
- (id)textColor;
- (bool)useAutofillStyle;
- (bool)useContinuousCornerInHighlight;
- (unsigned long long)visibleSeparatorEdges;

@end
