
@protocol PKToolPickerSelectionContext <NSObject>

@required

- (bool)colorSwatchesVisible;
- (bool)prefersLargeContextualEditingUI;
- (unsigned long long)selectionMask;
- (void)setColorSwatchesVisible:(bool)arg1;
- (void)setPrefersLargeContextualEditingUI:(bool)arg1;
- (void)setSelectionMask:(unsigned long long)arg1;

@end
