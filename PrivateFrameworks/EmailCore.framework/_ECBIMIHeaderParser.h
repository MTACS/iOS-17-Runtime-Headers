
@interface _ECBIMIHeaderParser : NSObject

+ (id)_hashFromIndicatorHashHeader:(id)arg1 algorithm:(id*)arg2;
+ (bool)_indicatorDataHasValidSVGProfile:(id)arg1;
+ (id)_locationFromLocationHeader:(id)arg1 evidenceLocation:(id*)arg2;
+ (id)_locationFromScanner:(id)arg1 evidenceLocation:(id*)arg2;
+ (id)_scanToNextTagForScanner:(id)arg1 allowSemicolonSeparator:(bool)arg2 value:(id*)arg3;
+ (id)_scanToNextTagForScanner:(id)arg1 url:(id*)arg2;
+ (bool)_versionIsValidWithScanner:(id)arg1;

@end
