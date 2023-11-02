
@interface VCPPhotosAsset : VCPAsset {
    PHAsset * _asset;
    NSDictionary * _cachedExif;
    NSArray * _cachedResources;
    NSMutableDictionary * _cachedScenes;
    bool  _onceExif;
    bool  _onceScenes;
}

@property (nonatomic, readonly) NSArray *resources;

+ (id)assetWithPHAsset:(id)arg1;

- (void).cxx_destruct;
- (id)allScenes;
- (double)duration;
- (id)exif;
- (id)faces;
- (id)fingerprint;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1 orientation:(unsigned int*)arg2;
- (id)initWithPHAsset:(id)arg1;
- (bool)isMovieResourceLocalAvailable;
- (id)localIdentifier;
- (id)mainFileURL;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)modificationDate;
- (id)movie;
- (id)originalMovie;
- (struct CGSize { double x1; double x2; })originalMovieSize;
- (float)originalPhotoOffsetSeconds;
- (float)photoOffsetSeconds;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)resources;
- (id)scenes;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })slomoRange;
- (float)slowmoRate;
- (id)streamedMovie;

@end
