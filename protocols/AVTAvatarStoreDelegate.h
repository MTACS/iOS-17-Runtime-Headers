
@protocol AVTAvatarStoreDelegate <NSObject>

@optional

- (void)store:(void *)arg1 didCreateDuplicateAvatar:(void *)arg2 forOriginal:(void *)arg3 postCompletionHandler:(void *)arg4; // needs 4 arg types, found 13: <AVTAvatarStoreInternal> *, <AVTAvatarRecord> *, <AVTAvatarRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)store:(void *)arg1 didDeleteAvatarWithIdentifier:(void *)arg2 postCompletionHandler:(void *)arg3; // needs 3 arg types, found 12: <AVTAvatarStoreInternal> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)store:(void *)arg1 didSaveAvatar:(void *)arg2 postCompletionHandler:(void *)arg3; // needs 3 arg types, found 12: <AVTAvatarStoreInternal> *, <AVTAvatarRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*

@end
