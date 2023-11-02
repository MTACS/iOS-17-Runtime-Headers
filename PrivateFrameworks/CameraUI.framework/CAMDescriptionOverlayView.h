
@interface CAMDescriptionOverlayView : UIView {
    UIButton * __acknowledgmentButton;
    CAShapeLayer * __blackoutMask;
    UIView * __blackoutView;
    UIVisualEffectView * __blurEffectView;
    double  __descriptionFontSizeMultiplier;
    UILabel * __descriptionLabel;
    UILabel * __descriptionTitleLabel;
    UIButton * __detailButton;
    double  __infoFontSizeMultiplier;
    UILabel * __infoLabel;
    UILabel * __infoTitleLabel;
    CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView * __primaryVibrancyEffectView;
    UILabel * __titleLabel;
    bool  _blackoutFrameVisible;
    <CAMDescriptionOverlayViewDelegate> * _delegate;
    long long  _orientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewportFrame;
}

@property (nonatomic, readonly) UIButton *_acknowledgmentButton;
@property (nonatomic, readonly) CAShapeLayer *_blackoutMask;
@property (nonatomic, readonly) UIView *_blackoutView;
@property (nonatomic, readonly) UIVisualEffectView *_blurEffectView;
@property (setter=_setDescriptionFontSizeMultiplier:, nonatomic) double _descriptionFontSizeMultiplier;
@property (nonatomic, readonly) UILabel *_descriptionLabel;
@property (nonatomic, readonly) UILabel *_descriptionTitleLabel;
@property (nonatomic, readonly) UIButton *_detailButton;
@property (setter=_setInfoFontSizeMultiplier:, nonatomic) double _infoFontSizeMultiplier;
@property (nonatomic, readonly) UILabel *_infoLabel;
@property (nonatomic, readonly) UILabel *_infoTitleLabel;
@property (nonatomic, readonly) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *_primaryVibrancyEffectView;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (getter=isAcknowledgmentButtonHighlighted, nonatomic) bool acknowledgmentButtonHighlighted;
@property (getter=isBlackoutFrameVisible, nonatomic) bool blackoutFrameVisible;
@property (nonatomic) <CAMDescriptionOverlayViewDelegate> *delegate;
@property (getter=isDetailButtonHighlighted, nonatomic) bool detailButtonHighlighted;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewportFrame;

- (void).cxx_destruct;
- (id)_acknowledgmentButton;
- (double)_additionalSpacingForContentSize:(id)arg1;
- (id)_blackoutMask;
- (id)_blackoutView;
- (id)_blurEffectView;
- (double)_descriptionFontSizeMultiplier;
- (id)_descriptionLabel;
- (id)_descriptionTitleLabel;
- (id)_detailButton;
- (void)_handleAcknowledgmentButtonTapped:(id)arg1;
- (void)_handleDetailButtonTapped:(id)arg1;
- (double)_infoFontSizeMultiplier;
- (id)_infoLabel;
- (id)_infoTitleLabel;
- (bool)_isVisible;
- (void)_layoutBlackoutMaskForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_primaryVibrancyEffectView;
- (void)_setDescriptionFontSizeMultiplier:(double)arg1;
- (void)_setInfoFontSizeMultiplier:(double)arg1;
- (id)_titleLabel;
- (void)_updateFontsUsingNarrowWidth:(bool)arg1;
- (void)_updateTextUsingNarrowWidth:(bool)arg1;
- (id)acknowledgmentTextUsingNarrowWidth:(bool)arg1;
- (double)additionalSpacing;
- (id)attributedDescriptionTextUsingNarrowWidth:(bool)arg1;
- (id)currentContentSize;
- (id)delegate;
- (id)descriptionTextUsingNarrowWidth:(bool)arg1;
- (id)descriptionTitleTextUsingNarrowWidth:(bool)arg1;
- (id)detailTextUsingNarrowWidth:(bool)arg1;
- (id)infoTextUsingNarrowWidth:(bool)arg1;
- (id)infoTitleTextUsingNarrowWidth:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAcknowledgmentButtonHighlighted;
- (bool)isBlackoutFrameVisible;
- (bool)isDetailButtonHighlighted;
- (bool)isTitleMultiline;
- (void)layoutSubviews;
- (double)maxDescriptionTextWidthForNarrowWidth:(bool)arg1 isLandscape:(bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (double)maxInfoTextWidthForNarrowWidth:(bool)arg1 isLandscape:(bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (double)maxTitleTextWidthForNarrowWidth:(bool)arg1 isLandscape:(bool)arg2;
- (long long)orientation;
- (void)setAcknowledgmentButtonHighlighted:(bool)arg1;
- (void)setBlackoutFrameVisible:(bool)arg1;
- (void)setCustomSubviewsVisible:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailButtonHighlighted:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setViewportFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisible:(bool)arg1 animationDuration:(double)arg2 completion:(id /* block */)arg3;
- (id)titleTextUsingNarrowWidth:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewportFrame;

@end
