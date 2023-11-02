
@interface PLJournal : NSObject {
    NSURL * _baseURL;
    PLJournalFile * _changeJournal;
    NSFileHandle * _fileHandleForAppendingUpdates;
    Class  _payloadClass;
    PLJournalFile * _pendingChangeJournal;
    PLJournalFile * _pendingSnapshotJournal;
    PLJournalFile * _prepareMarker;
    PLJournalFile * _snapshotJournal;
    unsigned char  _snapshotMode;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) PLJournalFile *changeJournal;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) Class payloadClass;
@property (nonatomic, readonly) PLJournalFile *pendingChangeJournal;
@property (nonatomic, readonly) PLJournalFile *pendingSnapshotJournal;
@property (nonatomic, readonly) PLJournalFile *prepareMarker;
@property (nonatomic, readonly) PLJournalFile *snapshotJournal;

+ (bool)_finishFullSnapshotForBaseURL:(id)arg1 snapshotSucceeded:(bool)arg2 snapshotMode:(unsigned char)arg3 journals:(id)arg4 error:(id*)arg5;
+ (bool)_performSnapshotsForBaseURL:(id)arg1 snapshotMode:(unsigned char)arg2 payloadClasses:(id)arg3 snapshotJournalBlock:(id /* block */)arg4 createOnlyIfNecessary:(bool)arg5 error:(id*)arg6;
+ (bool)appendSnapshotsForBaseURL:(id)arg1 payloadClasses:(id)arg2 snapshotJournalBlock:(id /* block */)arg3 error:(id*)arg4;
+ (bool)createSnapshotFinishMarkerForBaseURL:(id)arg1 error:(id*)arg2;
+ (bool)createSnapshotsForBaseURL:(id)arg1 payloadClasses:(id)arg2 snapshotJournalBlock:(id /* block */)arg3 createOnlyIfNecessary:(bool)arg4 error:(id*)arg5;
+ (id)journalURLForBaseURL:(id)arg1 payloadClassId:(id)arg2 journalType:(id)arg3;
+ (id)metadataURLForBaseURL:(id)arg1 payloadClassId:(id)arg2 pending:(bool)arg3;
+ (bool)recoverJournalsIfNecessaryForBaseURL:(id)arg1 payloadClasses:(id)arg2 error:(id*)arg3;
+ (bool)removeSnapshotFinishMarkerForBaseURL:(id)arg1 error:(id*)arg2;
+ (bool)snapshotFinishMarkerExistsForBaseURL:(id)arg1;
+ (id)snapshotFinishMarkerURLForBaseURL:(id)arg1;

- (void).cxx_destruct;
- (bool)_finishSnapshotWithMode:(unsigned char)arg1 snapshotSuccess:(bool)arg2 error:(id*)arg3;
- (bool)_isPendingJournalAuthoritative;
- (id)_payloadTooNewErrorWithPayloadVersion:(long long)arg1;
- (bool)_performSnapshotWithMode:(unsigned char)arg1 usingNextEntryBlock:(id /* block */)arg2 createOnlyIfNecessary:(bool)arg3 error:(id*)arg4;
- (bool)_prepareForSnapshotWithMode:(unsigned char)arg1 error:(id*)arg2;
- (id)_readMetadataPending:(bool)arg1;
- (bool)_recoverJournalWithError:(id*)arg1;
- (bool)_removeMetadataPending:(bool)arg1 error:(id*)arg2;
- (bool)_replaceMetadataWithPendingMetadataError:(id*)arg1;
- (bool)_updateMetadataWithMetadata:(id)arg1 replace:(bool)arg2 pending:(bool)arg3 error:(id*)arg4;
- (bool)appendChangeEntries:(id)arg1 error:(id*)arg2;
- (bool)appendChangeEntryAfterPrepare:(id)arg1 error:(id*)arg2;
- (bool)appendSnapshotUsingNextEntryBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)appendUpdatePayloadWithPayloadID:(id)arg1 rawAttributes:(id)arg2 error:(id*)arg3;
- (id)baseURL;
- (id)changeJournal;
- (bool)coalesceChangesToSnapshotWithError:(id*)arg1;
- (unsigned long long)countOfInsertEntriesWithError:(id*)arg1;
- (bool)createSnapshotUsingNextPayloadBlock:(id /* block */)arg1 createOnlyIfNecessary:(bool)arg2 error:(id*)arg3;
- (unsigned long long)currentPayloadVersionWithError:(id*)arg1;
- (bool)enumerateEntriesUsingBlock:(id /* block */)arg1 decodePayload:(bool)arg2 error:(id*)arg3;
- (bool)enumeratePayloadsUsingBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)finishAppendChangeEntriesWithError:(id*)arg1;
- (bool)finishCreateSnapshot:(bool)arg1 error:(id*)arg2;
- (id)initWithBaseURL:(id)arg1 payloadClass:(Class)arg2;
- (id)metadata;
- (id)metadataURLPending:(bool)arg1;
- (Class)payloadClass;
- (id)pendingChangeJournal;
- (id)pendingSnapshotJournal;
- (bool)prepareForAppendChangeEntriesWithError:(id*)arg1;
- (bool)prepareForCreateSnapshotWithError:(id*)arg1;
- (id)prepareMarker;
- (bool)removeJournalFilesWithError:(id*)arg1;
- (void)removeMetadata;
- (id)snapshotJournal;
- (bool)snapshotJournalFileSize:(unsigned long long*)arg1 changeJournalFileSize:(unsigned long long*)arg2 error:(id*)arg3;

@end
