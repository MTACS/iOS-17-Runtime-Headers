
@interface CEKApertureButton : UIButton <CAMAccessibilityHUDImageProvider> {
    double  __cachedSpaceWidth;
    double  __cachedSymbolLabelWidth;
    double  __cachedValueLabelWidth;
    UIImageView * __circleBackgroundView;
    UIImageView * __circleOutlineView;
    NSNumberFormatter * __decimalFormatter;
    bool  __rightToLeftFormatting;
    UILabel * __symbolLabel;
    UILabel * __valueLabel;
    NSNumberFormatter * __wholeNumberFormatter;
    double  _apertureValue;
    <CEKApertureButtonDelegate> * _delegate;
    long long  _expansionDirection;
    long long  _orientation;
    bool  _shouldShowApertureValue;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
    bool  _wantsBackground;
}

@property (nonatomic, readonly) double _cachedSpaceWidth;
@property (nonatomic, readonly) double _cachedSymbolLabelWidth;
@property (setter=_setCachedValueLabelWidth:, nonatomic) double _cachedValueLabelWidth;
@property (nonatomic, retain) UIImageView *_circleBackgroundView;
@property (nonatomic, readonly) UIImageView *_circleOutlineView;
@property (nonatomic, readonly) NSNumberFormatter *_decimalFormatter;
@property (getter=_isRightToLeftFormatting, nonatomic, readonly) bool _rightToLeftFormatting;
@property (nonatomic, readonly) UILabel *_symbolLabel;
@property (nonatomic, readonly) UILabel *_valueLabel;
@property (nonatomic, readonly) NSNumberFormatter *_wholeNumberFormatter;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) double apertureValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CEKApertureButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long expansionDirection;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation;
@property (nonatomic) bool shouldShowApertureValue;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;
@property (nonatomic) bool wantsBackground;

// Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit

- (void).cxx_destruct;
- (double)_cachedSpaceWidth;
- (double)_cachedSymbolLabelWidth;
- (double)_cachedValueLabelWidth;
- (id)_circleBackgroundView;
- (id)_circleImageWithColor:(id)arg1;
- (id)_circleOutlineView;
- (id)_decimalFormatter;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_expansionInsets;
- (bool)_isRightToLeftFormatting;
- (void)_rotateView:(id)arg1 withInterfaceOrientation:(long long)arg2 animated:(bool)arg3;
- (void)_setCachedValueLabelWidth:(double)arg1;
- (void)_setCenterAndBoundsForView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setLayer:(id)arg1 highlighted:(bool)arg2 animated:(bool)arg3;
- (id)_symbolLabel;
- (void)_updateBackgroundView;
- (void)_updateColorsAnimated:(bool)arg1;
- (void)_updateSymbolLabelOrientationAnimated:(bool)arg1;
- (void)_updateValueLabel;
- (id)_valueLabel;
- (id)_wholeNumberFormatter;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (double)apertureValue;
- (id)delegate;
- (long long)expansionDirection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isActive;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setActive:(bool)arg1;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setApertureValue:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpansionDirection:(long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setShouldShowApertureValue:(bool)arg1;
- (void)setShouldShowApertureValue:(bool)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setWantsBackground:(bool)arg1;
- (void)set_circleBackgroundView:(id)arg1;
- (bool)shouldShowApertureValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)wantsBackground;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)imageForAccessibilityHUD;

@end
