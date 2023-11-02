
@interface HFMediaHelper : NSObject

+ (id)_findAccessorySettingSiriLanguageAdapterFor:(id)arg1;
+ (id)allAccessoriesContainedIn:(id)arg1;
+ (bool)canMediaProfileContainer:(id)arg1 supportHomeTheaterWithAppleTV:(id)arg2;
+ (id)changeAllSiriLanguageOptionsFor:(id)arg1 to:(id)arg2;
+ (id)changeSiriLanguageOptionFor:(id)arg1 to:(id)arg2;
+ (bool)isAirPortExpress:(id)arg1;
+ (bool)isAnyKindOfGroup:(id)arg1;
+ (bool)isAppleTV:(id)arg1;
+ (bool)isAudioAnalysisSupportedDevice:(id)arg1;
+ (bool)isAudioReceiver:(id)arg1;
+ (bool)isContainedWithinAGroup:(id)arg1;
+ (bool)isContainedWithinMediaSystem:(id)arg1;
+ (bool)isDoorbellChimeEnabled:(id)arg1;
+ (bool)isHomePod:(id)arg1;
+ (bool)isHomePodMediaSystem:(id)arg1;
+ (bool)isHomePodMini:(id)arg1;
+ (bool)isHomePodMiniMediaSystem:(id)arg1;
+ (bool)isHomePodOriginal:(id)arg1;
+ (bool)isHomePodOriginalMediaSystem:(id)arg1;
+ (bool)isSiriDisabled:(id)arg1;
+ (id)mediaContainerSymbolConfiguration;
+ (id)mediaIconDescriptorForMediaContainer:(id)arg1;
+ (id)mediaProfileContainerForItem:(id)arg1 forTopLevel:(bool)arg2;
+ (id)siriLanguageOptionFor:(id)arg1;
+ (bool)supportsDoorbellChime:(id)arg1;

@end
