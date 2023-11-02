
@interface JFXMediaURLManager : NSObject {
    <JTFileURLSource> * _urlSource;
}

@property (nonatomic) <JTFileURLSource> *urlSource;

+ (bool)ODRAssetsAreEmbedded;
+ (id)_audioRecordingURL:(id*)arg1;
+ (id)_capturedPhotoURL:(id*)arg1 isHEIF:(bool)arg2;
+ (void)_cleanupDirectory:(id)arg1;
+ (bool)_createDirectoryAtURL:(id)arg1 error:(id*)arg2;
+ (id)_photoExportURL:(id*)arg1 isHEIF:(bool)arg2;
+ (id)_tempFileURLWithDirectory:(id)arg1 file:(id)arg2 error:(id*)arg3;
+ (id)_temporaryPhotoURL:(id*)arg1 fileName:(id)arg2;
+ (id)_videoExportURL:(id*)arg1;
+ (id)audioRecordingURL:(id*)arg1;
+ (id)cachedExportFileURLWithError:(id*)arg1;
+ (id)capturedPhotoURL:(id*)arg1 isHEIF:(bool)arg2;
+ (void)cleanupTemporaryDirectories;
+ (void)jfx_cleanupOldProjects;
+ (id)photoExportURL:(id*)arg1 isHEIF:(bool)arg2;
+ (id)sharedInstance;
+ (id)temporaryPhotoURL:(id*)arg1 fileName:(id)arg2;
+ (id)videoExportURL:(id*)arg1;
+ (id)videoRecordingFolderURL:(id*)arg1;

- (void).cxx_destruct;
- (void)setUrlSource:(id)arg1;
- (id)urlSource;

@end
