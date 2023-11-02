
@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob {
    NSString * _batchCommentText;
    NSDictionary * _customExportsInfo;
    bool  _isNewAlbum;
    NSArray * _originalAssetUUIDs;
    NSString * _publishAlbumCloudGUID;
    NSArray * _stillImageOnlyAssetUUIDs;
    NSDictionary * _trimmedVideoPathInfo;
}

@property (nonatomic, retain) NSString *batchCommentText;
@property (nonatomic, retain) NSDictionary *customExportsInfo;
@property (nonatomic) bool isNewAlbum;
@property (nonatomic, retain) NSArray *originalAssetUUIDs;
@property (nonatomic, retain) NSString *publishAlbumCloudGUID;
@property (nonatomic, retain) NSArray *stillImageOnlyAssetUUIDs;
@property (nonatomic, retain) NSDictionary *trimmedVideoPathInfo;

+ (void)publishBatchOfOriginalAssetUUIDs:(id)arg1 toSharedAlbum:(id)arg2 withAssetsSharingInfos:(id)arg3 customExportsInfo:(id)arg4 trimmedVideoPathInfo:(id)arg5 isNewAlbum:(bool)arg6 batchCommentText:(id)arg7;
+ (id)videoComplementURLForSharingFromAsset:(id)arg1;

- (void).cxx_destruct;
- (id)batchCommentText;
- (id)customExportsInfo;
- (long long)daemonOperation;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (void)executeDaemonOperation;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (bool)isNewAlbum;
- (id)originalAssetUUIDs;
- (id)publishAlbumCloudGUID;
- (bool)retrieveURLsFromAssetWithUUID:(id)arg1 withExportedFileURL:(id)arg2 primaryURL:(id*)arg3 videoComplementURL:(id*)arg4;
- (void)run;
- (void)runDaemonSide;
- (void)setBatchCommentText:(id)arg1;
- (void)setCustomExportsInfo:(id)arg1;
- (void)setIsNewAlbum:(bool)arg1;
- (void)setOriginalAssetUUIDs:(id)arg1;
- (void)setPublishAlbumCloudGUID:(id)arg1;
- (void)setStillImageOnlyAssetUUIDs:(id)arg1;
- (void)setTrimmedVideoPathInfo:(id)arg1;
- (bool)shouldArchiveXPCToDisk;
- (id)stillImageOnlyAssetUUIDs;
- (id)trimmedVideoPathInfo;

@end
