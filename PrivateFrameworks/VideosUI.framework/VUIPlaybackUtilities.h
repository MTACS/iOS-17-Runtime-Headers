
@interface VUIPlaybackUtilities : NSObject

+ (long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(bool)arg3 playCount:(unsigned long long)arg4;
+ (long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(bool)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(bool)arg5;
+ (double)playedThresholdTimeForDuration:(double)arg1;
+ (bool)playerIsLive:(id)arg1;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2;

@end
