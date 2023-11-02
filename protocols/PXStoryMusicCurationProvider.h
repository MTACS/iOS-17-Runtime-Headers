
@protocol PXStoryMusicCurationProvider

@required

- (void)applyNegativeFeedbackToSong:(id <PXAudioAsset>)arg1 forMemory:(PHMemory *)arg2;
- (NSArray *)recentlyUsedAppleMusicSongIDs;
- (NSArray *)recentlyUsedFlexSongIDs;
- (NSProgress *)requestMusicCurationForAssetCollection:(void *)arg1 options:(void *)arg2 resultHandler:(void *)arg3; // needs 3 arg types, found 8: <PXDisplayAssetCollection> *, PXStoryMusicCurationProviderOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXMusicCurationResult> *, void*
- (void)setRecentlyUsedAppleMusicSongIDs:(NSArray *)arg1;
- (void)setRecentlyUsedFlexSongIDs:(NSArray *)arg1;
- (void)updateAudioAsset:(id <PXAudioAsset>)arg1 forAssetCollection:(PHAssetCollection *)arg2;

@end
