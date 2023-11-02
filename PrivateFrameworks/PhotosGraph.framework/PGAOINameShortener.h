
@interface PGAOINameShortener : NSObject

+ (void)_enumerateWordCombinationsForName:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)_shortenedAOIForName:(id)arg1;
+ (bool)isCountryWithAOISubstitutions:(id)arg1;
+ (id)s_aoiReplacementsDictionary;
+ (id)shortenedAOIForLocationOrAreaNode:(id)arg1 locationHelper:(id)arg2;

@end
