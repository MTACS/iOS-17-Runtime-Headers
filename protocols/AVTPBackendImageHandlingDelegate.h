
@protocol AVTPBackendImageHandlingDelegate <NSObject>

@required

- (void)clearContentAtLocation:(NSURL *)arg1;
- (void)clearStickersForAvatarRecordIdentifier:(NSString *)arg1 withEnvironment:(AVTCoreEnvironment *)arg2;
- (void)deleteImagesForAvatarRecordIdentifier:(NSString *)arg1 error:(id*)arg2;
- (bool)deleteThumbnailsForAvatarRecordsWithIdentifiers:(NSArray *)arg1 error:(id*)arg2;
- (bool)generateThumbnailsForAvatarRecord:(id <AVTAvatarRecord>)arg1 avatar:(AVTMemoji *)arg2 error:(id*)arg3;
- (bool)generateThumbnailsForAvatarRecords:(NSArray *)arg1 error:(id*)arg2;
- (bool)generateThumbnailsForDuplicateAvatarRecord:(id <AVTAvatarRecord>)arg1 originalRecord:(id <AVTAvatarRecord>)arg2 error:(id*)arg3;
- (void)updateThumbnailsForChangesWithTracker:(void *)arg1 recordProvider:(void *)arg2; // needs 2 arg types, found 7: <AVTAvatarRecordChangeTracker> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, AVTAvatarRecord *, id /* block */, NSString *, void*

@end
