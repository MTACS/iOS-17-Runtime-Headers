
@interface PLProjectAlbum : PLManagedAlbum

@property (nonatomic, copy) NSData *projectData;
@property (nonatomic, copy) NSString *projectDocumentType;
@property (nonatomic, copy) NSString *projectExtensionIdentifier;
@property (nonatomic, copy) NSString *projectRenderUuid;

+ (id)albumSupportsAssetOrderKeysPredicate;
+ (bool)cleanupOrphanedProjectPreviewImagesInLibrary:(id)arg1 error:(id*)arg2;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 documentType:(id)arg3 projectExtensionIdentifier:(id)arg4;
+ (id)validKindsForPersistence;

- (id)_previewImageFilename;
- (void)awakeFromInsert;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)duplicateProjectPreviewImageData:(id)arg1 error:(id*)arg2;
- (id)payloadForChangedKeys:(id)arg1;
- (void)prepareForDeletion;
- (id)projectPreviewImageData;
- (bool)setProjectPreviewImageData:(id)arg1 error:(id*)arg2;
- (bool)supportsAssetOrderKeys;
- (void)willSave;

@end
