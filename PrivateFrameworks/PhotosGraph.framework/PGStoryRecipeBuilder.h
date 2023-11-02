
@interface PGStoryRecipeBuilder : NSObject

+ (id)_appleSongAssetFromAppleMusicCuration:(id)arg1;
+ (id)_keyFlexSongAssetFromFlexMusicCuration:(id)arg1;
+ (id)_storyRecipeWithKeyAppleMusicSongAsset:(id)arg1 keyFlexSongAsset:(id)arg2 isAppleMusicSubscriber:(bool)arg3 shouldAvoidColorGrading:(bool)arg4;
+ (id)storyRecipeForMemory:(id)arg1 appleMusicCuration:(id)arg2 flexMusicCuration:(id)arg3 shouldAvoidColorGrading:(bool)arg4 isAppleMusicSubscriber:(bool)arg5 error:(id*)arg6;

@end
