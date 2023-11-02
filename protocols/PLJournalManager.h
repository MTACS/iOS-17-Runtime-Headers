
@protocol PLJournalManager

@required

+ (NSURL *)baseURLFromPathManager:(PLPhotoLibraryPathManager *)arg1;
+ (bool)isEnabledWithPathManager:(PLPhotoLibraryPathManager *)arg1 error:(id*)arg2;
+ (NSString *)name;
+ (NSArray *)payloadClasses;

- (void)coalesceJournalsForPayloadClassIDs:(void *)arg1 withChangeJournalOverThreshold:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSSet *, float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)coalesceJournalsForPayloadClassIDs:(NSSet *)arg1 withChangeJournalOverThreshold:(float)arg2 error:(id*)arg3;
- (bool)snapshotJournalsForPayloadClassIDs:(NSSet *)arg1 error:(id*)arg2;
- (void)snapshotJournalsForPayloadClassIDs:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)start;
- (void)stop;

@end
