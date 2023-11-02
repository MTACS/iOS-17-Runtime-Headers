
@interface PFVideoAVObjectBuilder : NSObject {
    AVAsset * __finalAsset;
    AVAudioMix * __finalAudioMix;
    AVVideoComposition * __finalVideoComposition;
    PFSlowMotionTimeRangeMapper * __timeRangeMapperForExport;
    PFSlowMotionTimeRangeMapper * __timeRangeMapperForPlayback;
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
    }  _timeRange;
    PFVideoAdjustments * _videoAdjustments;
    AVAsset * _videoAsset;
}

@property (nonatomic, readonly) AVAsset *_finalAsset;
@property (nonatomic, readonly) AVAudioMix *_finalAudioMix;
@property (nonatomic, readonly) AVVideoComposition *_finalVideoComposition;
@property (nonatomic, readonly) PFSlowMotionTimeRangeMapper *_timeRangeMapperForExport;
@property (nonatomic, readonly) PFSlowMotionTimeRangeMapper *_timeRangeMapperForPlayback;
@property (nonatomic, readonly) PFSlowMotionTimeRangeMapper *playbackTimeRangeMapper;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic, readonly) PFVideoAdjustments *videoAdjustments;
@property (nonatomic, readonly) AVAsset *videoAsset;

// Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats

- (void).cxx_destruct;
- (id)_finalAsset;
- (id)_finalAudioMix;
- (id)_finalVideoComposition;
- (id)_getOrCreateTimeRangeMapperForExport:(bool)arg1;
- (void)_synchronouslyLoadSlowMotionPropertiesFromAsset:(id)arg1;
- (id)_timeRangeMapperForExport;
- (id)_timeRangeMapperForPlayback;
- (id)_trimAssetIfNecessary:(id)arg1 error:(id*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })convertToOriginalTimeFromScaledTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forExport:(bool)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })convertToScaledTimeFromOriginalTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forExport:(bool)arg2;
- (id)description;
- (id)initWithAsset:(id)arg1 audioMix:(id)arg2 videoComposition:(id)arg3;
- (id)initWithVideoAsset:(id)arg1 videoAdjustments:(id)arg2;
- (id)playbackTimeRangeMapper;
- (void)requestAVAssetForExport:(bool)arg1 withResultHandler:(id /* block */)arg2;
- (void)requestAVAssetWithResultHandler:(id /* block */)arg1;
- (void)requestAsynchronousAVAssetWithResultHandler:(id /* block */)arg1;
- (void)requestAsynchronousExportSessionWithExportPreset:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)requestAsynchronousPlayerItemWithResultHandler:(id /* block */)arg1;
- (void)requestExportSessionWithExportPreset:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)requestPlayerItemWithResultHandler:(id /* block */)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })slowMotionRampInRangeForExport:(bool)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })slowMotionRampOutRangeForExport:(bool)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)videoAdjustments;
- (id)videoAsset;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })vcp_convertToOriginalTimerangeFromScaledTimerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;

@end
