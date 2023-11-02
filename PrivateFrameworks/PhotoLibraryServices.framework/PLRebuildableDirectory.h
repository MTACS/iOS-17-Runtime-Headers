
@interface PLRebuildableDirectory : NSObject {
    NSFileManager * _fm;
    bool  _isCPLAssets;
    bool  _isPhotoStream;
    PLPhotoLibrary * _photoLibrary;
    double  _startTime;
    NSURL * _url;
}

@property (readonly) NSFileManager *fm;
@property (readonly) bool isCPLAssets;
@property (readonly) bool isPhotoStream;
@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) double startTime;
@property (readonly) NSURL *url;

+ (void)collectFileURLs:(id)arg1 urlsToSkip:(id)arg2 forAddingToAlbum:(id)arg3 intoAssetsArray:(id)arg4 assetsKind:(int)arg5 testCreationDates:(bool)arg6 startTime:(double)arg7 pathManager:(id)arg8;
+ (id)rebuildableDirectoryWithURL:(id)arg1 isCPLAssets:(bool)arg2 isPhotoStream:(bool)arg3 photoLibrary:(id)arg4 startTime:(double)arg5;

- (void).cxx_destruct;
- (void)_collectContentsOfDirectoryURL:(id)arg1 urlsToSkip:(id)arg2 forAddingToAlbum:(id)arg3 intoAssetsArray:(id)arg4 assetsKind:(int)arg5 startTime:(double)arg6;
- (id)debugDescription;
- (id)description;
- (id)fm;
- (void)gatherAssetsToImport:(id)arg1 pendingAssetsCount:(unsigned long long*)arg2 onDiskURLsToSkip:(id)arg3 cameraRollOnly:(bool)arg4;
- (bool)isCPLAssets;
- (bool)isPhotoStream;
- (id)photoLibrary;
- (double)startTime;
- (id)url;

@end
