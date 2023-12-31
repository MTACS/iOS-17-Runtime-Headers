
@interface SXFontMatching : NSObject

+ (long long)bestStyleForIntendedStyle:(long long)arg1 forFonts:(id)arg2;
+ (long long)bestWeightForIntendedWeight:(long long)arg1 forFonts:(id)arg2;
+ (long long)bestWidthForIntendedWidth:(long long)arg1 forFonts:(id)arg2;
+ (long long)bolderWeightForWeight:(long long)arg1;
+ (id)fontFaceWithAttributes:(id)arg1 fromFamily:(id)arg2;
+ (long long)lighterWeightForWeight:(long long)arg1;
+ (id)matchFontFaceForAttributes:(id)arg1 fromFamily:(id)arg2;

@end
