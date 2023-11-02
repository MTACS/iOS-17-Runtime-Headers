
@interface AVTAvatarUpdaterFactory : NSObject

+ (id /* block */)updaterForAggregatingUpdaters:(id)arg1;
+ (id /* block */)updaterForClearingColorsForCategory:(long long)arg1 destination:(long long)arg2;
+ (id /* block */)updaterForColor:(id)arg1 colorsState:(id)arg2 pairedColors:(id)arg3 additionalColor:(id)arg4;
+ (id /* block */)updaterForColor:(id)arg1 colorsState:(id)arg2 pairedColors:(id)arg3 additionalColor:(id)arg4 saveToColorsState:(bool)arg5;
+ (id /* block */)updaterForColor:(id)arg1 variationOverride:(id)arg2 colorsState:(id)arg3 pairedColors:(id)arg4 additionalColor:(id)arg5 saveToColorsState:(bool)arg6;
+ (id /* block */)updaterForPairingCategory:(id)arg1 colorsState:(id)arg2;
+ (id /* block */)updaterForPreset:(id)arg1 pairedPreset:(id)arg2;

@end
