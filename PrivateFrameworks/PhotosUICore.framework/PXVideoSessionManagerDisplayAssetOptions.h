
@interface PXVideoSessionManagerDisplayAssetOptions : NSObject {
    ISWrappedAVAudioSession * _audioSession;
    bool  _isAudioAllowed;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _livePhotoLoopTimeRange;
    bool  _shouldCreateUniqueVideoSession;
    bool  _shouldCrossfadeLivePhotosWhenLooping;
    bool  _shouldPlayLivePhotosWithSettlingEffectIfPossible;
    bool  _shouldStabilizeLivePhotosIfPossible;
    NSMutableArray * _strategiesStore;
}

@property (nonatomic, retain) ISWrappedAVAudioSession *audioSession;
@property (nonatomic) bool isAudioAllowed;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } livePhotoLoopTimeRange;
@property (nonatomic) bool shouldCreateUniqueVideoSession;
@property (nonatomic) bool shouldCrossfadeLivePhotosWhenLooping;
@property (nonatomic) bool shouldPlayLivePhotosWithSettlingEffectIfPossible;
@property (nonatomic) bool shouldStabilizeLivePhotosIfPossible;
@property (nonatomic, readonly) NSArray *strategies;
@property (nonatomic, readonly) NSMutableArray *strategiesStore;

- (void).cxx_destruct;
- (void)addContentDeliveryStrategyWithDeliveryQuality:(long long)arg1 segmentTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 streamingAllowed:(bool)arg3;
- (void)addContentDeliveryStrategyWithDeliveryQuality:(long long)arg1 segmentTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 streamingAllowed:(bool)arg3 networkAccessAllowed:(bool)arg4;
- (id)audioSession;
- (id)init;
- (bool)isAudioAllowed;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })livePhotoLoopTimeRange;
- (void)setAudioSession:(id)arg1;
- (void)setIsAudioAllowed:(bool)arg1;
- (void)setLivePhotoLoopTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setShouldCreateUniqueVideoSession:(bool)arg1;
- (void)setShouldCrossfadeLivePhotosWhenLooping:(bool)arg1;
- (void)setShouldPlayLivePhotosWithSettlingEffectIfPossible:(bool)arg1;
- (void)setShouldStabilizeLivePhotosIfPossible:(bool)arg1;
- (bool)shouldCreateUniqueVideoSession;
- (bool)shouldCrossfadeLivePhotosWhenLooping;
- (bool)shouldPlayLivePhotosWithSettlingEffectIfPossible;
- (bool)shouldStabilizeLivePhotosIfPossible;
- (id)strategies;
- (id)strategiesStore;

@end
