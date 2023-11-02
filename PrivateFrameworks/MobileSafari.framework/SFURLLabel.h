
@interface SFURLLabel : UIVisualEffectView {
    UIView * _URLContainerClipView;
    UIImageView * _fadeOut;
    double  _fadeOutDistance;
    long long  _fadeOutEdge;
    UILabel * _label;
    bool  _needsUpdateSize;
    long long  _textAlignmentEdge;
    struct { 
        UILabel *label; 
        long long transitionCount; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } previousLabelFrame; 
    }  _textSizeTransitionContext;
    struct CGSize { 
        double width; 
        double height; 
    }  _urlSize;
}

@property (nonatomic) UIView *URLContainerClipView;
@property (nonatomic) bool accessibilityIgnoresInvertColors;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic) long long fadeOutEdge;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) bool isAnimatingTextSize;
@property (nonatomic, readonly) double labelCapHeightInsetFromTop;
@property (nonatomic, readonly) double lastLineBaselineFrameOriginY;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignmentEdge;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } urlSize;

- (void).cxx_destruct;
- (id)URLContainerClipView;
- (bool)_needsMask;
- (void)_setNeedsUpdateSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unclippedContentRect;
- (void)_updateMask;
- (void)_updateSize;
- (void)_updateSizeIfNeeded;
- (bool)accessibilityIgnoresInvertColors;
- (id)accessibilityLabel;
- (bool)adjustsFontForContentSizeCategory;
- (id)attributedText;
- (double)baselineOffsetFromBottom;
- (void)beginTextSizeAnimation;
- (void)endTextSizeAnimation;
- (long long)fadeOutEdge;
- (id)font;
- (id)init;
- (id)initWithFadeOutDistance:(double)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAnimatingTextSize;
- (double)labelCapHeightInsetFromTop;
- (double)lastLineBaselineFrameOriginY;
- (void)layoutSubviews;
- (void)setAccessibilityIgnoresInvertColors:(bool)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFadeOutEdge:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignmentEdge:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setURLContainerClipView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignmentEdge;
- (id)textColor;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })urlSize;

@end
