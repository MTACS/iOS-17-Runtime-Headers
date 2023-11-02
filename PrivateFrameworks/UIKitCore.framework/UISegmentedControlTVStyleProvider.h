
@interface UISegmentedControlTVStyleProvider : UISegmentedControlOutlineStyleProvider

+ (id)_tvDefaultTextColorDisabledSelected;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorFocused;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorSelected;

- (double)cornerRadiusForControlSize:(int)arg1;
- (double)defaultHeightForControlSize:(int)arg1 traitCollection:(id)arg2;
- (double)dividerWidthForControlSize:(int)arg1;
- (id)fontColorForSegment:(id)arg1 enabled:(bool)arg2 selected:(bool)arg3 state:(unsigned long long)arg4;
- (id)fontForControlSize:(int)arg1 selected:(bool)arg2;
- (double)selectionIndicatorOverflowForControlSize:(int)arg1;
- (bool)useGeneratedImages;
- (bool)useTVStyleFocusSelection;

@end
