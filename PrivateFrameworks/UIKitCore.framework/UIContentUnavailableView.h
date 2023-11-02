
@interface UIContentUnavailableView : UIView <UIContentView, UIScrollViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    _UISystemBackgroundView * _backgroundView;
    UIButton * _button;
    UIContentUnavailableConfiguration * _configuration;
    struct { 
        unsigned int isEmbeddedInWrapperView : 1; 
        unsigned int trackingKeyboardFrame : 1; 
        unsigned int adjustsLayoutForKeyboard : 1; 
        unsigned int imageViewFrameInvalid : 1; 
        unsigned int activityIndicatorFrameInvalid : 1; 
        unsigned int textLabelFrameInvalid : 1; 
        unsigned int secondaryTextLabelFrameInvalid : 1; 
        unsigned int buttonFrameInvalid : 1; 
        unsigned int secondaryButtonFrameInvalid : 1; 
    }  _contentViewFlags;
    UIImageView * _imageView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    double  _preferredMaxLayoutWidth;
    bool  _scrollEnabled;
    _UIContentUnavailableScrollView * _scrollView;
    UIButton * _secondaryButton;
    UILabel * _secondaryTextLabel;
    UILabel * _textLabel;
}

@property (getter=_activityIndicator, nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (getter=_backgroundView, nonatomic, readonly) _UISystemBackgroundView *backgroundView;
@property (getter=_button, nonatomic, readonly) UIButton *button;
@property (nonatomic, copy) UIContentUnavailableConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_imageView, nonatomic, readonly) UIImageView *imageView;
@property (getter=isScrollEnabled, nonatomic) bool scrollEnabled;
@property (getter=_scrollView, nonatomic, readonly) _UIContentUnavailableScrollView *scrollView;
@property (getter=_secondaryButton, nonatomic, readonly) UIButton *secondaryButton;
@property (getter=_secondaryTextLabel, nonatomic, readonly) UILabel *secondaryTextLabel;
@property (nonatomic, readonly) bool shouldReparentScrollViewPanGestureRecognizer;
@property (readonly) Class superclass;
@property (getter=_textLabel, nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (id)_activityIndicator;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_alignmentInsetsForView:(id)arg1;
- (void)_applyBackgroundConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1;
- (id)_backgroundView;
- (id)_button;
- (void)_checkWhetherEmbeddedInWrapperView;
- (void)_clearInvalidFrameFlags;
- (void)_computeButtonLayoutInfo:(struct UIContentUnavailableViewLayoutInfo { struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_1_1_1; bool x_1_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_1_1_3; } x1; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_2_1_1; bool x_2_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_2_1_3; } x2; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_3_1_1; bool x_3_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_3_1_3; } x3; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_4_1_1; bool x_4_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_4_1_3; } x4; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_5_1_1; bool x_5_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_5_1_3; } x5; }*)arg1;
- (void)_computeLayoutInfoForView:(id)arg1 info:(struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; bool x2; struct NSDirectionalEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; }*)arg2 layoutInfo:(struct UIContentUnavailableViewLayoutInfo { struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_1_1_1; bool x_1_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_1_1_3; } x1; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_2_1_1; bool x_2_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_2_1_3; } x2; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_3_1_1; bool x_3_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_3_1_3; } x3; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_4_1_1; bool x_4_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_4_1_3; } x4; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_5_1_1; bool x_5_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_5_1_3; } x5; }*)arg3;
- (struct UIContentUnavailableViewLayoutInfo { struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_1_1_1; bool x_1_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_1_1_3; } x1; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_2_1_1; bool x_2_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_2_1_3; } x2; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_3_1_1; bool x_3_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_3_1_3; } x3; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_4_1_1; bool x_4_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_4_1_3; } x4; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_5_1_1; bool x_5_1_2; struct NSDirectionalEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_5_1_3; } x5; })_computeLayoutInfoRestrictedToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_containerView;
- (id)_encodableSubviews;
- (void)_handleKeyboardNotification:(id)arg1 aboutToHide:(bool)arg2;
- (id)_imageView;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_keyboardAboutToChangeFrame:(id)arg1;
- (void)_keyboardAboutToHide:(id)arg1;
- (void)_keyboardAboutToShow:(id)arg1;
- (double)_keyboardInset;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)_multilineContextWidth;
- (bool)_needsDoubleUpdateConstraintsPass;
- (double)_preferredMaxLayoutWidth;
- (bool)_prefersEqualButtonAndSecondaryButtonWidths;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_reconfigureKeyboardLayoutAdjustment;
- (id)_scrollView;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_scrollViewInsets;
- (id)_secondaryButton;
- (id)_secondaryTextLabel;
- (void)_setMultilineContextWidth:(double)arg1;
- (id)_textLabel;
- (id)configuration;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)isScrollEnabled;
- (void)layoutSubviews;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (bool)shouldReparentScrollViewPanGestureRecognizer;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)traitCollectionDidChange:(id)arg1;

@end
