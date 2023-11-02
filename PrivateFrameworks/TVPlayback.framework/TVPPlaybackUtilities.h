
@interface TVPPlaybackUtilities : NSObject

+ (long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(bool)arg3 playCount:(unsigned long long)arg4;
+ (long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(bool)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(bool)arg5;
+ (double)playedThresholdTimeForDuration:(double)arg1;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2 playedThreshold:(id)arg3;

@end
