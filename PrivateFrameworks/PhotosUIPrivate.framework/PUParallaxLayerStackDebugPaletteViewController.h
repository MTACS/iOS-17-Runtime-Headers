
@interface PUParallaxLayerStackDebugPaletteViewController : UIViewController {
    PUParallaxLayerStackDebugPaletteView * _colorBGPaletteView;
    PUParallaxLayerStackDebugPaletteView * _colorWashDuotonePaletteView;
    PUParallaxLayerStackDebugPaletteView * _colorWashSinglePaletteView;
    PUParallaxLayerStackDebugPaletteView * _customPaletteView;
    PUParallaxLayerStackDebugPaletteView * _greenScreenMutedPaletteView;
    PUParallaxLayerStackDebugPaletteView * _greenScreenVibrantPaletteView;
    UISegmentedControl * _switchControl;
}

@property (nonatomic, retain) PUParallaxLayerStackDebugPaletteView *colorBGPaletteView;
@property (nonatomic, retain) PUParallaxLayerStackDebugPaletteView *colorWashDuotonePaletteView;
@property (nonatomic, retain) PUParallaxLayerStackDebugPaletteView *colorWashSinglePaletteView;
@property (nonatomic, retain) PUParallaxLayerStackDebugPaletteView *customPaletteView;
@property (nonatomic, retain) PUParallaxLayerStackDebugPaletteView *greenScreenMutedPaletteView;
@property (nonatomic, retain) PUParallaxLayerStackDebugPaletteView *greenScreenVibrantPaletteView;
@property (nonatomic, retain) UISegmentedControl *switchControl;

- (void).cxx_destruct;
- (void)addSwitchableView:(id)arg1;
- (id)colorBGPaletteView;
- (id)colorWashDuotonePaletteView;
- (id)colorWashSinglePaletteView;
- (id)customPaletteView;
- (id)greenScreenMutedPaletteView;
- (id)greenScreenVibrantPaletteView;
- (id)init;
- (void)modeChanged:(id)arg1;
- (void)setColorBGPaletteView:(id)arg1;
- (void)setColorWashDuotonePaletteView:(id)arg1;
- (void)setColorWashSinglePaletteView:(id)arg1;
- (void)setCustomPaletteView:(id)arg1;
- (void)setGreenScreenMutedPaletteView:(id)arg1;
- (void)setGreenScreenVibrantPaletteView:(id)arg1;
- (void)setSwitchControl:(id)arg1;
- (id)switchControl;
- (void)viewDidLoad;

@end
