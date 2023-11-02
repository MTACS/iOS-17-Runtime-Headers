
@interface WFAppShortcutColorFetcher : NSObject

+ (id)colorCache;

- (id)colorsForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)extractColorsForIconDictionary:(id)arg1 alternateIconDictionary:(id)arg2 bundle:(id)arg3 colorDefaults:(id)arg4;
- (id)extractTintColorForIconDictionary:(id)arg1 alternateIconDictionary:(id)arg2 bundle:(id)arg3;
- (id)finishWithComplementingColors:(id)arg1 tintColor:(id)arg2 record:(id)arg3 bundle:(id)arg4 bundleIdentifier:(id)arg5 error:(id*)arg6;

@end
