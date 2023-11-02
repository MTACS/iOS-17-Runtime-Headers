
@protocol IMDAttachmentQueries <NSObject>

@required

- (void)coreSpotlightDeleteAttachmentGUIDs:(NSArray *)arg1;
- (void)deleteAttachmentsDirectWithPredicate:(NSPredicate *)arg1;
- (void)fetchAttachmentRecordsFilteredUsingPredicate:(void *)arg1 limit:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSPredicate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)updateAttachmentsSyncStatusTo:(long long)arg1 forGUIDs:(NSArray *)arg2;

@end
