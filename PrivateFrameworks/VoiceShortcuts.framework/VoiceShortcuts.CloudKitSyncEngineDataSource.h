
@interface VoiceShortcuts.CloudKitSyncEngineDataSource : NSObject <CKSyncEngineDataSource> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _eventStream;
    void recordSource;
}

- (void).cxx_destruct;
- (id)init;
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;
- (void)syncEngine:(id)arg1 didDeleteRecordZoneWithID:(id)arg2;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didSaveRecordZone:(id)arg2;
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToDeleteRecordZoneWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)syncEngine:(id)arg1 zoneWithIDChanged:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;

@end
