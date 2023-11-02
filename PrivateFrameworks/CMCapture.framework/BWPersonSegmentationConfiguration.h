
@interface BWPersonSegmentationConfiguration : BWInferenceConfiguration

+ (bool)isPortraitPrewarmingRequired;
+ (struct { unsigned short x1; unsigned short x2; unsigned short x3; })portraitVersion;

@end
