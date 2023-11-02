
@protocol PKPaletteViewDelegate <NSObject>

@optional

- (void)paletteViewDidChangePosition:(PKPaletteView *)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3;
- (void)paletteViewDidChangeScaleFactor:(PKPaletteView *)arg1;
- (void)paletteViewDidChangeTraitCollection:(PKPaletteView *)arg1;
- (NSUndoManager *)paletteViewUndoManager:(PKPaletteView *)arg1;

@end
