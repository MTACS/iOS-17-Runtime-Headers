
@interface SHListeningAutoShadowLayer : SHPaletteLayer {
    CALayer * _autoShadowBackgroundLayer;
    CAShapeLayer * _autoShadowOuterLayer;
}

@property (nonatomic, retain) CALayer *autoShadowBackgroundLayer;
@property (nonatomic, retain) CAShapeLayer *autoShadowOuterLayer;

- (void).cxx_destruct;
- (id)autoShadowBackgroundLayer;
- (id)autoShadowOuterLayer;
- (void)layoutSublayers;
- (void)setAutoShadowBackgroundLayer:(id)arg1;
- (void)setAutoShadowOuterLayer:(id)arg1;
- (void)setup;

@end
