
@interface SFSpeechSynthesisUtils : NSObject

+ (double)absoluteTimeToSecond:(unsigned long long)arg1;
+ (long long)footprintFromString:(id)arg1;
+ (id)footprintStringFromFootprint:(long long)arg1;
+ (long long)genderFromString:(id)arg1;
+ (id)genderStringFromGender:(long long)arg1;
+ (bool)isInternalBuild;
+ (long long)typeFromString:(id)arg1;
+ (id)typeStringFromType:(long long)arg1;

@end
