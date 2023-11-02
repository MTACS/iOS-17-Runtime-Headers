
@interface VTUIButton : UIButton

+ (id)_vtuiButtonWithPrimaryStyle;
+ (id)_vtuiButtonWithPrimaryStyleForNormalAndDisabledState;
+ (id)_vtuiButtonWithSecondaryStyle;
+ (id)_vtuiProximityBackgroundButtonImageWithColor:(id)arg1;
+ (id)_vtuiProximityButtonWithPRXStyle;
+ (id)_vtuiProximityButtonWithPrimaryStyle;
+ (id)_vtuiProximityDismissButton;
+ (id)vtuiBackgroundButtonImageWithColor:(id)arg1;

- (id)initWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;

@end
