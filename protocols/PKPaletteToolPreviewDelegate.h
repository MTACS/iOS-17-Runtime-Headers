
@protocol PKPaletteToolPreviewDelegate <NSObject>

@required

- (long long)palettePosition;
- (void)toolPreviewDidChangeToolColor:(PKPaletteToolPreview *)arg1;

@end
