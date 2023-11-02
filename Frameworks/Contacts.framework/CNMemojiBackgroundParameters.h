
@interface CNMemojiBackgroundParameters : NSObject {
    CNMemojiBackgroundColor * _contentColor;
}

@property (nonatomic, copy) CNMemojiBackgroundColor *contentColor;

+ (id)defaultBackgroundColorDescription;

- (void).cxx_destruct;
- (id)backgroundLayerColorForIndex:(long long)arg1;
- (id)colorAtIndex:(long long)arg1 forLayer:(long long)arg2;
- (id)colorLayerColorForIndex:(long long)arg1;
- (id)contentColor;
- (id)description;
- (struct CGPoint { double x1; double x2; })endPointForLayerAtIndex:(long long)arg1;
- (id)initWithColorDescription:(id)arg1;
- (double)locationForColorAtIndex:(long long)arg1 forLayer:(long long)arg2;
- (long long)numberOfColorsForLayer:(long long)arg1;
- (long long)numberOfLayers;
- (void)setContentColor:(id)arg1;
- (struct CGPoint { double x1; double x2; })startPointForLayerAtIndex:(long long)arg1;
- (id)topGradientLayerColorForIndex:(long long)arg1;

@end
