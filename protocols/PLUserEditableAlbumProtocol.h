
@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>

@required

- (void)insertInternalUserEditableAssets:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2 assetsSharingInfos:(NSDictionary *)arg3 customExportsInfo:(NSDictionary *)arg4 trimmedVideoPathInfo:(NSDictionary *)arg5 commentText:(NSString *)arg6;
- (NSMutableOrderedSet *)userEditableAssets;

@end
