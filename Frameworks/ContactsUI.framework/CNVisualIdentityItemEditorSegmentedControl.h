
@interface CNVisualIdentityItemEditorSegmentedControl : UISegmentedControl

@property (readonly) bool allowsTextInputForCurrentEditorType;

+ (id)segmentedControlForItemType:(unsigned long long)arg1;

- (bool)allowsTextInputForCurrentEditorType;
- (id)initWithItems:(id)arg1;
- (void)selectStyleSegment;
- (void)selectTextSegment;
- (void)setStyleOnlyMode;
- (void)setStyleSegmentEnabled:(bool)arg1;
- (void)setTextAndStyleMode;
- (void)setTextSegmentEnabled:(bool)arg1;

@end
