
@interface PUParallaxLayerStackDebugPaletteView : UIView {
    PIParallaxColorPalette * _palette;
}

@property (nonatomic, readonly) PIParallaxColorPalette *palette;

- (void).cxx_destruct;
- (void)_layoutPalette:(id)arg1 origin:(struct CGPoint { double x1; double x2; })arg2 cellsPerRow:(int)arg3 cellWidth:(double)arg4 callback:(id /* block */)arg5;
- (id)initWithColorPalette:(id)arg1;
- (void)layoutSubviews;
- (id)palette;

@end
