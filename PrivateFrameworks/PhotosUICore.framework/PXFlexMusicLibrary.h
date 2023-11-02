
@interface PXFlexMusicLibrary : PXObservable {
    NSObject<OS_dispatch_queue> * _queue;
    NSCountedSet * _queue_downloadingAssetsRequestCount;
    FMSongLibrary * _queue_library;
}

+ (id)_audioMixInputParametersForMixParameters:(id)arg1 audioTrack:(id)arg2 sampleRate:(int)arg3;
+ (id)_mixParametersForAudioMixInputParameters:(id)arg1 sampleRate:(int)arg2;
+ (id)coalesceAudioMixInputParametersA:(id)arg1 withAudioMixInputParametersB:(id)arg2 audioTrack:(id)arg3;
+ (void)purgeLocalFlexDataWithCompletion:(id /* block */)arg1;
+ (id)sharedLibrary;

- (void).cxx_destruct;
- (id)_fetchAssetsWithOptions:(id)arg1;
- (void)_handleDownloadProgressChangedNotification:(id)arg1;
- (void)_handleSongAssetsChangedNotification:(id)arg1;
- (id)_queue_cueSourceFromRendition:(id)arg1;
- (id)_queue_downloadableAssetForAsset:(id)arg1 resourceType:(long long)arg2;
- (id)_queue_fetchAssetsWithOptions:(id)arg1;
- (id)_queue_flexMusicAssetWithSong:(id)arg1;
- (id)_queue_renditionForSongID:(id)arg1 preferredDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)cancelDownloadForAsset:(id)arg1 resourceType:(long long)arg2;
- (id)cuesForAsset:(id)arg1;
- (void)dealloc;
- (double)downloadProgressForAsset:(id)arg1 resourceType:(long long)arg2;
- (id)fetchAllAssets;
- (id)fetchAssetsWithIdentifiers:(id)arg1;
- (id)fetchLocalAssetForMood:(unsigned long long)arg1;
- (id)fetchSortedAssetsGroupedByMood;
- (bool)hasLocalResourceForAsset:(id)arg1 resourceType:(long long)arg2;
- (id)init;
- (id)localURLForAsset:(id)arg1 resourceType:(long long)arg2;
- (id)playableAssetForAsset:(id)arg1 preferredDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 audioMix:(id*)arg3 peakValue:(double*)arg4 loudness:(double*)arg5;
- (id)requestAssetsWithIdentifiers:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)requestDownloadForAsset:(id)arg1 resourceType:(long long)arg2;

@end
