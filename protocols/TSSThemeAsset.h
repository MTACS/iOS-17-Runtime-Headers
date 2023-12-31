
@protocol TSSThemeAsset

@required

- (bool)isThemeEquivalent:(id <TSSThemeAsset>)arg1;

@optional

- (SEL)mapThemeAssetSelector;
- (SEL)mapThemePresetsSelector;
- (SEL)mapThemePropertyMapSelector;
- (SEL)mapThemeStyleSelector;

@end
