
@interface IMDirectoryContents : NSObject {
    NSSet * _allPaths;
    NSArray * _attachmentPaths;
    NSString * _attachmentsPath;
    NSDictionary * _fileInfoMap;
    NSString * _rootPath;
    NSArray * _sortedPaths;
    NSString * _stickersPath;
    NSArray * _syncAssetPaths;
    NSString * _syncAssetsPath;
    NSArray * _topLevelPaths;
}

@property (nonatomic, retain) NSSet *allPaths;
@property (nonatomic, retain) NSArray *attachmentPaths;
@property (nonatomic, readonly) NSString *attachmentsPath;
@property (nonatomic, retain) NSDictionary *fileInfoMap;
@property (nonatomic, readonly) NSString *rootPath;
@property (nonatomic, retain) NSArray *sortedPaths;
@property (nonatomic, readonly) NSString *stickersPath;
@property (nonatomic, retain) NSArray *syncAssetPaths;
@property (nonatomic, readonly) NSString *syncAssetsPath;
@property (nonatomic, retain) NSArray *topLevelPaths;

+ (bool)isGroupPhotoPath:(id)arg1;

- (void).cxx_destruct;
- (id)allPaths;
- (id)attachmentPaths;
- (id)attachmentsPath;
- (id)fileInfoMap;
- (void)gather;
- (id)initWithRootPath:(id)arg1 attachmentsPath:(id)arg2 syncAssetsPath:(id)arg3 stickersPath:(id)arg4;
- (bool)isAttachmentPath:(id)arg1;
- (bool)isStickerPath:(id)arg1;
- (bool)isSyncAssetPath:(id)arg1;
- (void)recursivelyGatherFileInfoAtPath:(id)arg1 fileInfoMap:(id)arg2;
- (id)rootPath;
- (void)setAllPaths:(id)arg1;
- (void)setAttachmentPaths:(id)arg1;
- (void)setFileInfoMap:(id)arg1;
- (void)setSortedPaths:(id)arg1;
- (void)setSyncAssetPaths:(id)arg1;
- (void)setTopLevelPaths:(id)arg1;
- (id)sortedPaths;
- (id)stickersPath;
- (id)syncAssetPaths;
- (id)syncAssetsPath;
- (id)topLevelPaths;

@end
