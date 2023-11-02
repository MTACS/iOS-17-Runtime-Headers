
@interface PUCompositeVideoGenerator : PXObservable {
    NSArray * _assets;
    bool  _onlyAllowOverlappingAssets;
    long long  _outputType;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSError * _stateQueue_error;
    AVAssetExportSession * _stateQueue_exportSession;
    PUMergedLivePhotosVideo * _stateQueue_playbackVideo;
    long long  _stateQueue_state;
    NSObject<OS_dispatch_group> * _videoAssetsByAssetGroup;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) AVAssetExportSession *exportSession;
@property (nonatomic, readonly) bool onlyAllowOverlappingAssets;
@property (nonatomic, readonly) long long outputType;
@property (nonatomic, readonly) PUMergedLivePhotosVideo *playbackVideo;
@property (nonatomic, readonly) long long state;

+ (struct { long long x1; int x2; unsigned int x3; long long x4; })_overlapDurationBetweenAsset:(id)arg1 andAsset:(id)arg2;
+ (bool)canMergeAsset:(id)arg1 withConsecutiveAsset:(id)arg2;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })conformRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 inRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;

- (void).cxx_destruct;
- (void)_workQueue_finishWithError:(id)arg1;
- (void)_workQueue_finishWithExportSession:(id)arg1 error:(id)arg2;
- (void)_workQueue_finishWithPlaybackVideo:(id)arg1 error:(id)arg2;
- (void)_workQueue_generateVideoWithAVAssets:(id)arg1;
- (void)_workQueue_generateVideoWithSingleAssetExportSession:(id)arg1;
- (void)_workQueue_generateVideoWithSingleAssetPlayerItem:(id)arg1;
- (void)_workQueue_start;
- (id)assets;
- (id)error;
- (id)exportSession;
- (id)initWithAssets:(id)arg1 outputType:(long long)arg2 onlyAllowOverlappingAssets:(bool)arg3;
- (id)mutableChangeObject;
- (bool)onlyAllowOverlappingAssets;
- (long long)outputType;
- (id)playbackVideo;
- (void)setError:(id)arg1;
- (void)setExportSession:(id)arg1;
- (void)setPlaybackVideo:(id)arg1;
- (void)setState:(long long)arg1;
- (void)start;
- (long long)state;

@end
