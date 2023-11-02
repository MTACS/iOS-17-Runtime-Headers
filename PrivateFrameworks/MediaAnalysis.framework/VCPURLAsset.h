
@interface VCPURLAsset : VCPAsset {
    NSDictionary * _cachedExif;
    NSMutableDictionary * _cachedScenes;
    NSURL * _imageURL;
    unsigned long long  _mediaSubtypes;
    long long  _mediaType;
    AVURLAsset * _movie;
    bool  _onceExif;
    bool  _onceScenes;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
}

+ (id)imageAssetWithURL:(id)arg1;
+ (id)livePhotoAssetWithImageURL:(id)arg1 andMovieURL:(id)arg2;
+ (id)movieAssetWithURL:(id)arg1;
+ (id)sdofImageAssetWithURL:(id)arg1;

- (void).cxx_destruct;
- (double)duration;
- (id)exif;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1 orientation:(unsigned int*)arg2;
- (id)initWithImageURL:(id)arg1 andMovieURL:(id)arg2;
- (id)initWithImageURL:(id)arg1 isSDOF:(bool)arg2;
- (id)initWithMovieURL:(id)arg1;
- (bool)isMovieResourceLocalAvailable;
- (id)mainFileURL;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)modificationDate;
- (id)movie;
- (id)originalMovie;
- (float)originalPhotoOffsetSeconds;
- (float)photoOffsetSeconds;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)scenes;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })slomoRange;
- (float)slowmoRate;

@end
