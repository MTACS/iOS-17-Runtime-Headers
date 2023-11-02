
@interface PFLivePhotoPlaybackResult : NSObject {
    struct CGImage { } * _photo;
    int  _photoExifOrientation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoTime;
    AVAsset * _videoAsset;
}

@property (nonatomic) struct CGImage { }*photo;
@property (nonatomic) int photoExifOrientation;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } photoTime;
@property (nonatomic, retain) AVAsset *videoAsset;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGImage { }*)photo;
- (int)photoExifOrientation;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (void)setPhoto:(struct CGImage { }*)arg1;
- (void)setPhotoExifOrientation:(int)arg1;
- (void)setPhotoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoAsset:(id)arg1;
- (id)videoAsset;

@end
