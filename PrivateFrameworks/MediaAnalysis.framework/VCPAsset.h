
@interface VCPAsset : NSObject

@property (nonatomic, readonly) NSArray *allScenes;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDictionary *exif;
@property (nonatomic, readonly) float exposureTimeSeconds;
@property (nonatomic, readonly) PHFetchResult *faces;
@property (nonatomic, readonly) VCPFingerprint *fingerprint;
@property (nonatomic, readonly) bool hadFlash;
@property (nonatomic, readonly) bool isHDR;
@property (nonatomic, readonly) bool isImage;
@property (nonatomic, readonly) bool isLivePhoto;
@property (nonatomic, readonly) bool isMovie;
@property (nonatomic, readonly) bool isPano;
@property (nonatomic, readonly) bool isSDOF;
@property (nonatomic, readonly) bool isScreenshot;
@property (nonatomic, readonly) bool isSlowmo;
@property (nonatomic, readonly) bool isTimelapse;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSURL *mainFileURL;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) float originalPhotoOffsetSeconds;
@property (nonatomic, readonly) float photoOffsetSeconds;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) NSDictionary *scenes;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } slomoRange;
@property (nonatomic, readonly) float slowmoRate;
@property (nonatomic, readonly) float timelapseRate;

+ (void)unimplementedExceptionForMethodName:(id)arg1;

- (id)allScenes;
- (double)duration;
- (id)exif;
- (float)exposureTimeSeconds;
- (id)faces;
- (id)fingerprint;
- (bool)hadFlash;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1 orientation:(unsigned int*)arg2;
- (bool)isHDR;
- (bool)isImage;
- (bool)isLivePhoto;
- (bool)isMovie;
- (bool)isMovieResourceLocalAvailable;
- (bool)isPano;
- (bool)isSDOF;
- (bool)isScreenshot;
- (bool)isSlowmo;
- (bool)isTimelapse;
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
- (id)scenes;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })slomoRange;
- (float)slowmoRate;
- (id)streamedMovie;
- (float)timelapseRate;
- (id)typeDescription;

@end
