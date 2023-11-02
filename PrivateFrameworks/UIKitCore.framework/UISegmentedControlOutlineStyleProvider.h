
@interface UISegmentedControlOutlineStyleProvider : UISegmentedControlDefaultStyleProvider

- (bool)animateSelectionSliding;
- (double)defaultContentPaddingWidth;
- (double)defaultHeightForControlSize:(int)arg1;
- (double)defaultTextContentPaddingWidth;
- (id)fontColorForSegment:(id)arg1 enabled:(bool)arg2 selected:(bool)arg3 state:(unsigned long long)arg4;
- (id)fontForControlSize:(int)arg1 selected:(bool)arg2;
- (bool)useSelectionIndicatorStyling;

@end
