
@interface AVMutableMovie : AVMovie {
    AVMutableMovieInternal * _mutableMovieInternal;
}

@property (nonatomic, copy) AVMediaDataStorage *defaultMediaDataStorage;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } interleavingPeriod;
@property (nonatomic, copy) NSArray *metadata;
@property (getter=isModified, nonatomic) bool modified;
@property (nonatomic) float preferredRate;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) int timescale;
@property (nonatomic, readonly) NSArray *tracks;

+ (bool)expectsPropertyRevisedNotifications;
+ (id)movieWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)movieWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)URL;
- (void)_addFigAssetNotifications;
- (id)_addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_copyFormatReader;
- (struct OpaqueFigMutableMovie { }*)_figMutableMovie;
- (id)_initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (id)_initWithFigError:(int)arg1 userInfo:(id)arg2;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader { }*)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4;
- (id)_initializationOptions;
- (id)_mutableTracks;
- (void)_removeFigAssetNotifications;
- (void)_signalMetadataUpdated;
- (void)_signalTracksUpdated;
- (id)addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3;
- (id)addMutableTracksCopyingSettingsFromTracks:(id)arg1 options:(id)arg2;
- (id)availableMetadataFormats;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)defaultMediaDataStorage;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)fileType;
- (id)init;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initWithFileType:(id)arg1 copySettingsFromMovie:(id)arg2 options:(id)arg3;
- (id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2;
- (id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)insertEmptyTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)insertTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 ofAsset:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 copySampleData:(bool)arg4 error:(id*)arg5;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })interleavingPeriod;
- (bool)isDefunct;
- (bool)isModified;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (id)mutableTrackCompatibleWithTrack:(id)arg1;
- (float)preferredRate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (void)removeTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)removeTrack:(id)arg1;
- (void)scaleTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 toDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setDefaultMediaDataStorage:(id)arg1;
- (void)setInterleavingPeriod:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMetadata:(id)arg1;
- (void)setModified:(bool)arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setTimescale:(int)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (int)timescale;
- (id)trackReferences;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

@end
