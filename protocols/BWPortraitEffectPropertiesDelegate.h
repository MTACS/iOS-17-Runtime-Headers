
@protocol BWPortraitEffectPropertiesDelegate <NSObject>

@required

- (void)didChangeBackgroundBlurAperture:(float)arg1;
- (void)didChangeGesturesEnabled:(bool)arg1;
- (void)didChangePortraitEffectStudioLightQuality:(long long)arg1;
- (void)didChangeStudioLightingIntensity:(float)arg1;
- (void)performReactionEffect:(NSString *)arg1;
- (void)setReactionsInProgressChangedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
