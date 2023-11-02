
@interface CAMControlStatusIndicator : UIControl <CAMControlStatusBarControl> {
    UIImageView * __imageView;
    bool  __needsUpdateValueText;
    UIImageView * __outlineView;
    UIView * __slashMaskContainer;
    CAMSlashMaskView * __slashMaskView;
    CAMSlashView * __slashView;
    UILabel * __valueLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  __valueLabelSize;
    <CAMControlStatusIndicatorDelegate> * _delegate;
    long long  _orientation;
    bool  _showingValue;
}

@property (nonatomic, retain) UIImageView *_imageView;
@property (setter=_setNeedsUpdateValueText:, nonatomic) bool _needsUpdateValueText;
@property (nonatomic, readonly) UIImageView *_outlineView;
@property (nonatomic, readonly) UIView *_slashMaskContainer;
@property (nonatomic, readonly) CAMSlashMaskView *_slashMaskView;
@property (nonatomic, readonly) CAMSlashView *_slashView;
@property (nonatomic, readonly) UILabel *_valueLabel;
@property (setter=_setValueLabelSize:, nonatomic) struct CGSize { double x1; double x2; } _valueLabelSize;
@property (nonatomic, readonly) bool canShowValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMControlStatusIndicatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } imageOffset;
@property (nonatomic, readonly) UIImageSymbolConfiguration *imageSymbolColorConfiguration;
@property (nonatomic) long long orientation;
@property (getter=isShowingValue, nonatomic) bool showingValue;
@property (nonatomic, readonly) UIView *slashContainerView;
@property (readonly) Class superclass;

+ (id)_createStretchableCircleImageFilled:(bool)arg1;
+ (id)_filledOutlineImage;
+ (id)_outlineImage;
+ (id)decimalFormatter;
+ (id)integerFormatter;

- (void).cxx_destruct;
- (double)_additionalWidthForValue;
- (id)_imageView;
- (bool)_needsUpdateValueText;
- (id)_outlineView;
- (void)_setNeedsUpdateValueText:(bool)arg1;
- (void)_setValueLabelSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_slashMaskContainer;
- (id)_slashMaskView;
- (id)_slashView;
- (void)_updateImageOrientationAnimated:(bool)arg1;
- (void)_updateSlashAnimated:(bool)arg1;
- (void)_updateValueLabelVisibilityAnimated:(bool)arg1;
- (void)_updateValueText;
- (id)_valueLabel;
- (struct CGSize { double x1; double x2; })_valueLabelSize;
- (bool)canShowValue;
- (unsigned long long)customPointSizeForImageSymbol;
- (id)delegate;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)imageForCurrentState;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (struct CGVector { double x1; double x2; })imageOffset;
- (id)imageSymbolColorConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isShowingValue;
- (void)layoutSubviews;
- (long long)orientation;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsUpdateValueText;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setShowingValue:(bool)arg1;
- (void)setShowingValue:(bool)arg1 animated:(bool)arg2;
- (void)set_imageView:(id)arg1;
- (bool)shouldFillOutlineForCurrentState;
- (bool)shouldShowOutlineForCurrentState;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseOutline;
- (bool)shouldUseSlash;
- (id)slashContainerView;
- (bool)supportsOrientations;
- (void)updateImage;
- (void)updateImageAnimated:(bool)arg1;
- (id)valueText;

@end
