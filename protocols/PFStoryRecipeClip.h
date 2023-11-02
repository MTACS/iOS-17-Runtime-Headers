
@protocol PFStoryRecipeClip

@required

- (NSString *)assetIdentifier;
- (NSString *)diagnosticDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })idealDuration;
- (bool)isEqualToClip:(id <PFStoryRecipeClip>)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumDuration;
- (long long)motionStyle;
- (long long)playbackStyle;
- (long long)transition;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoCueOffset;

@end
