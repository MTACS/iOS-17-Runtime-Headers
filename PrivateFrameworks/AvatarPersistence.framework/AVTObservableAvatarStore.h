
@interface AVTObservableAvatarStore : NSObject <AVTAvatarStoreInternal> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <AVTAvatarStoreDelegate> * _delegate;
    <AVTAvatarStoreInternal> * _store;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AVTStickerBackendDelegate> *stickerBackendDelegate;
@property (nonatomic, readonly) <AVTAvatarStoreInternal> *store;
@property (readonly) Class superclass;

+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;

- (void).cxx_destruct;
- (id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)callbackQueue;
- (bool)canCreateAvatar;
- (bool)canCreateAvatarWithError:(id*)arg1;
- (id)delegate;
- (void)deleteAvatar:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)duplicateAvatar:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithStore:(id)arg1 callbackQueue:(id)arg2;
- (id)recentStickersForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(id /* block */)arg3 thumbnailGenerationCompletionBlock:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (id)store;

@end
