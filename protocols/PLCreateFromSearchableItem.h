
@protocol PLCreateFromSearchableItem <NSObject>

@required

+ (<PLCreateFromSearchableItem> *)createOrUpdateObjectFromSearchableItem:(CSSearchableItem *)arg1 library:(PLPhotoLibrary *)arg2 fullIndexSyncStartDate:(NSDate *)arg3 createIfNeeded:(bool)arg4 didCreate:(bool*)arg5 isSyndicatable:(bool*)arg6 error:(id*)arg7;

- (NSString *)uuid;

@end
