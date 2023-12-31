
@protocol TKVibrationPickerStyleProvider <NSObject>

@required

- (UIView *)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (UIView *)newBackgroundViewForSelectedVibrationPickerCell:(bool)arg1;
- (UIColor *)vibrationPickerCellBackgroundColor;
- (UIColor *)vibrationPickerCellHighlightedTextColor;
- (UIColor *)vibrationPickerCellTextColor;
- (UIFont *)vibrationPickerCellTextFont;
- (UIColor *)vibrationPickerHeaderTextColor;
- (UIFont *)vibrationPickerHeaderTextFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })vibrationPickerHeaderTextPaddingInsets;
- (UIColor *)vibrationPickerHeaderTextShadowColor;
- (struct UIOffset { double x1; double x2; })vibrationPickerHeaderTextShadowOffset;
- (long long)vibrationPickerTableViewSeparatorStyle;
- (bool)vibrationPickerUsesOpaqueBackground;
- (bool)wantsCustomVibrationPickerHeaderView;

@optional

- (UIColor *)vibrationPickerCustomBackgroundColor;
- (long long)vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
- (UIColor *)vibrationPickerCustomTableSeparatorColor;
- (bool)vibrationPickerHeaderTextShouldBeUppercase;

@end
