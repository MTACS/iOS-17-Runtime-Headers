
@protocol PHImportDuplicateCheckerItem <NSObject>

@required

- (id)avchdAssetId;
- (NSDate *)creationDate;
- (NSDate *)dateKey;
- (NSArray *)duplicateAssetsForLibrary:(PHPhotoLibrary *)arg1;
- (unsigned char)duplicateStateConfidence;
- (NSMutableDictionary *)duplicates;
- (NSDate *)fileCreationDate;
- (NSString *)fileName;
- (id)fingerprint;
- (bool)isDuplicate;
- (bool)isLivePhoto;
- (NSDate *)lastDuplicateCheck;
- (void)loadMetadataSync;
- (PFMetadata *)metadata;
- (id)nameKey;
- (id)originatingAssetID;
- (void)setDuplicateStateConfidence:(unsigned char)arg1;
- (void)setDuplicates:(NSMutableDictionary *)arg1;
- (void)setDuplicates:(NSSet *)arg1 forLibrary:(NSString *)arg2;
- (void)setIsDuplicate:(bool)arg1;
- (void)setLastDuplicateCheck:(NSDate *)arg1;
- (id)sizeKey;
- (NSURL *)url;
- (id)uuid;
- (<PHImportDuplicateCheckerItem> *)videoComplement;

@end
