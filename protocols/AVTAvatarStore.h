
@protocol AVTAvatarStore <NSObject>

@required

- (NSArray *)avatarsForFetchRequest:(AVTAvatarFetchRequest *)arg1 error:(id*)arg2;
- (bool)canCreateAvatar;
- (bool)canCreateAvatarWithError:(id*)arg1;
- (void)deleteAvatar:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: <AVTAvatarRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteAvatarWithIdentifier:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)duplicateAvatar:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 9: <AVTAvatarRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, <AVTAvatarRecord> *, NSError *, void*
- (void)fetchAvatarsForFetchRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: AVTAvatarFetchRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)saveAvatarRecord:(void *)arg1 thumbnailAvatar:(void *)arg2 completionBlock:(void *)arg3 thumbnailGenerationCompletionBlock:(void *)arg4; // needs 4 arg types, found 16: <AVTAvatarRecord> *, AVTMemoji *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*, id /* block */, void*, void, id /* block */, bool, NSError *, void*

@end
