
@interface AVMovie : AVAsset <NSCopying, NSMutableCopying> {
    AVMovieInternal * _movie;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) bool canContainMovieFragments;
@property (nonatomic, readonly) bool containsMovieFragments;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) AVMediaDataStorage *defaultMediaDataStorage;
@property (nonatomic, readonly) NSArray *tracks;

+ (bool)expectsPropertyRevisedNotifications;
+ (void)initialize;
+ (id)movieTypes;
+ (id)movieWithData:(id)arg1 options:(id)arg2;
+ (id)movieWithURL:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (id)_absoluteURL;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForMovieTracks;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_copyFormatReader;
- (struct OpaqueFigMutableMovie { }*)_figMutableMovie;
- (struct OpaqueFigMutableMovie { }*)_figMutableMovieFromFormatReader:(struct OpaqueFigFormatReader { }*)arg1;
- (id)_initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (id)_initWithFigError:(int)arg1 userInfo:(id)arg2;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader { }*)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4;
- (id)_initializationOptions;
- (struct OpaqueFigMutableMovie { }*)_mutableMovieForFileType:(id)arg1;
- (void)_startListeningToLoaderNotifications;
- (void)_stopListeningToLoaderNotifications;
- (bool)canContainMovieFragments;
- (bool)containsMovieFragments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)defaultMediaDataStorage;
- (id)description;
- (bool)hasProtectedContent;
- (id)init;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (bool)isCompatibleWithFileType:(id)arg1;
- (bool)isDefunct;
- (id)movieHeaderWithFileType:(id)arg1 error:(id*)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)referenceRestrictions;
- (id)trackReferences;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (bool)writeMovieHeaderToURL:(id)arg1 fileType:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

@end
