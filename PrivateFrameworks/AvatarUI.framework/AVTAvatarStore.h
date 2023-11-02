
@interface AVTAvatarStore : NSObject <AVTAvatarStore, AVTAvatarStoreInternal, AVTPBackendImageHandlingDelegate> {
    AVTAvatarRecordImageGenerator * _imageGenerator;
    AVTImageStore * _imageStore;
    <AVTAvatarStoreInternal> * _internalStore;
    <AVTUILogger> * _logger;
    <AVTAvatarStore> * _persistenceAvatarStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVTAvatarRecordImageGenerator *imageGenerator;
@property (nonatomic, readonly) AVTImageStore *imageStore;
@property (nonatomic) <AVTAvatarStoreInternal> *internalStore;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) <AVTAvatarStore> *persistenceAvatarStore;
@property (nonatomic) <AVTStickerBackendDelegate> *stickerBackendDelegate;
@property (readonly) Class superclass;

+ (id)defaultImageGeneratorForEnvironment:(id)arg1;
+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;

- (void).cxx_destruct;
- (id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)canCreateAvatar;
- (bool)canCreateAvatarWithError:(id*)arg1;
- (void)clearContentAtLocation:(id)arg1;
- (void)clearStickersForAvatarRecordIdentifier:(id)arg1 withEnvironment:(id)arg2;
- (void)deleteAvatar:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)deleteImagesForAvatarRecordIdentifier:(id)arg1 error:(id*)arg2;
- (void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)duplicateAvatar:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)generateThumbnailsForAvatarRecord:(id)arg1 avatar:(id)arg2 error:(id*)arg3;
- (bool)generateThumbnailsForAvatarRecords:(id)arg1 error:(id*)arg2;
- (bool)generateThumbnailsForDuplicateAvatarRecord:(id)arg1 originalRecord:(id)arg2 error:(id*)arg3;
- (id)imageGenerator;
- (id)imageStore;
- (id)init;
- (id)initWithImageGenerator:(id)arg1 environment:(id)arg2;
- (id)initWithPersistenceAvatarStore:(id)arg1;
- (id)initWithPersistenceAvatarStore:(id)arg1 imageGenerator:(id)arg2 environment:(id)arg3;
- (id)initWithPersistenceAvatarStore:(id)arg1 imageGenerator:(id)arg2 imageStore:(id)arg3 environment:(id)arg4;
- (id)internalStore;
- (id)logger;
- (id)persistenceAvatarStore;
- (id)recentStickersForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(id /* block */)arg3 thumbnailGenerationCompletionBlock:(id /* block */)arg4;
- (void)setInternalStore:(id)arg1;
- (void)setStickerBackendDelegate:(id)arg1;
- (id)stickerBackendDelegate;
- (void)updateThumbnailsForChangesWithTracker:(id)arg1 recordProvider:(id /* block */)arg2;

@end
