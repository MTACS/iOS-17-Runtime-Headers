
@interface PUMergedLivePhotosVideo : NSObject {
    NSArray * _assets;
    NSArray * _keyTimes;
    AVAsset * _mergedVideoAsset;
    AVVideoComposition * _mergedVideoComposition;
    unsigned long long  _options;
    NSArray * _startTimes;
    double  _videoAspectRatio;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly, copy) NSArray *keyTimes;
@property (nonatomic, readonly) AVAsset *mergedVideoAsset;
@property (nonatomic, readonly) AVVideoComposition *mergedVideoComposition;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSArray *startTimes;
@property (nonatomic, readonly) double videoAspectRatio;

- (void).cxx_destruct;
- (long long)_assetIndexAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)assetAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 progress:(out double*)arg2;
- (id)assets;
- (id)debugDescription;
- (id)initWithAssets:(id)arg1 startTimes:(id)arg2 keyTimes:(id)arg3 videoAsset:(id)arg4 videoComposition:(id)arg5 videoAspectRatio:(double)arg6 options:(unsigned long long)arg7;
- (id)keyTimes;
- (id)mergedVideoAsset;
- (id)mergedVideoComposition;
- (unsigned long long)options;
- (id)startTimes;
- (double)videoAspectRatio;

@end
