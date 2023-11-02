
@interface PPUtils : NSObject

+ (id)Sha256ForData:(id)arg1 withSalt:(id)arg2;
+ (long long)compareDouble:(double)arg1 withDouble:(double)arg2;
+ (id)coordinatesToGeoHashWithLength:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3;
+ (id)currentLocaleLanguageCode;
+ (void)enumerateChunksOfSize:(unsigned long long)arg1 fromArray:(id)arg2 usingBlock:(id /* block */)arg3;
+ (id)formatStringArray:(id)arg1 truncatingAtLength:(unsigned long long)arg2;
+ (id)hexOfBytes:(const void*)arg1 size:(unsigned long long)arg2;
+ (id)hexUUID;
+ (bool)isFirstPartyApp:(id)arg1;
+ (bool)isInternalDevice;
+ (double)jaroSimilarityForString:(id)arg1 other:(id)arg2;
+ (bool)localizedTimeStructForDate:(id)arg1 tm:(struct tm { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; long long x10; char *x11; }*)arg2;
+ (bool)localizedTimeStructForSecondsFrom1970:(double)arg1 tm:(struct tm { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; long long x10; char *x11; }*)arg2;
+ (id)osBuild;
+ (id)preferredLanguages;
+ (id)reduceSpotlightDomainIdentifiers:(id)arg1;
+ (long long)reverseCompareDouble:(double)arg1 withDouble:(double)arg2;
+ (id)sqliteGlobEscape:(id)arg1;
+ (bool)yesWithProbability:(double)arg1;

@end
