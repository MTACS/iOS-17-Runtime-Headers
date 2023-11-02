
@protocol AVTStickerBackend <NSObject>

@required

- (void)deleteRecentStickersForChangeTracker:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: <AVTAvatarRecordChangeTracker> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteRecentStickersWithAvatarIdentifier:(void *)arg1 stickerIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)didUseStickerWithAvatarIdentifier:(void *)arg1 stickerIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSArray *)recentStickersForFetchRequest:(AVTStickerFetchRequest *)arg1 error:(id*)arg2;

@optional

- (void)setStickerBackendDelegate:(id <AVTStickerBackendDelegate>)arg1;
- (<AVTStickerBackendDelegate> *)stickerBackendDelegate;

@end
