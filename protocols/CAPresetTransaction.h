
@protocol CAPresetTransaction <NSObject>

@required

- (bool)commitPreset;
- (bool)isReferencePreset;
- (bool)preserveAppleSRGBGammaResponse;
- (void)setIsReferencePreset:(bool)arg1;
- (void)setPreserveAppleSRGBGammaResponse:(bool)arg1;
- (void)setTrinityCabalConfig:(long long)arg1;
- (long long)trinityCabalConfig;

@end
