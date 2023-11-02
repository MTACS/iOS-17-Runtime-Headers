
@interface AVTColorLayerProvider : NSObject

- (id /* block */)providerForColorIntoLayer;
- (id /* block */)providerForGradientFromColor;
- (void)renderColorForColorPreset:(id)arg1 skinColor:(id)arg2 intoLayer:(id)arg3;
- (void)renderColorGradientForModelColor:(id)arg1 skinColor:(id)arg2 handler:(id /* block */)arg3;

@end
