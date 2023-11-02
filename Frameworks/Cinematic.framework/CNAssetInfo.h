
@interface CNAssetInfo : NSObject {
    AVAssetTrack * _cinematicDisparityTrack;
    AVAssetTrack * _cinematicMetadataTrack;
    AVAssetTrack * _cinematicVideoTrack;
}

@property (readonly) NSArray *allCinematicTracks;
@property (readonly) AVAsset *asset;
@property (retain) AVAssetTrack *cinematicDisparityTrack;
@property (retain) AVAssetTrack *cinematicMetadataTrack;
@property (retain) AVAssetTrack *cinematicVideoTrack;
@property (readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (void)checkIfCinematic:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadFromAsset:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadFromCinematicVideoTrack:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_initWithVideoTrack:(id)arg1 disparityTrack:(id)arg2 metadataTrack:(id)arg3;
- (id)allCinematicTracks;
- (id)asset;
- (id)cinematicDisparityTrack;
- (id)cinematicMetadataTrack;
- (id)cinematicVideoTrack;
- (id)frameTimingTrack;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGSize { double x1; double x2; })preferredSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (id)sampleDataTrackIDs;
- (void)setCinematicDisparityTrack:(id)arg1;
- (void)setCinematicMetadataTrack:(id)arg1;
- (void)setCinematicVideoTrack:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)videoCompositionTrackIDs;
- (id)videoCompositionTracks;

@end
