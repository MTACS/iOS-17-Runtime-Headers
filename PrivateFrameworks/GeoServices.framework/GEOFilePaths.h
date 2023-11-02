
@interface GEOFilePaths : NSObject <GEOPListStateCapturing> {
    unsigned long long  _stateCaptureHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_internal_geoServicesCacheDirectoryPath;
+ (id)_internal_homeDirectory;
+ (id)analyticsPipelineFilePath;
+ (id)analyticsUploadDirectoryPath;
+ (bool)createDirectoryCopyingAttributesFromParent:(id)arg1 error:(id*)arg2;
+ (id)dictionaryRepresentation;
+ (id)geoServicesCacheDirectoryPath;
+ (id)geodCacheDirectoryPath;
+ (id)homeDirectory;
+ (id)imageServiceDBFileURL;
+ (id)locationShifterDBFilePath;
+ (id)mapsSuggestionsCacheDirectoryPath;
+ (id)pathFor:(unsigned long long)arg1;
+ (id)preferencesDirectoryPath;
+ (id)requestCountsDBFilePath;
+ (id)tileCacheDirectoryPath;
+ (id)urlFor:(unsigned long long)arg1;

- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (id)init;

@end
