
@interface SLDCloudKitSyncReader : SLDCloudKitSyncBase {
    id /* block */  _changeCallback;
    bool  _changeCallbackScheduled;
    bool  _garbageCollectScheduled;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_fetchAttributionInternal:(id)arg1;
- (id)_syncDirectory;
- (id)_syncDirectoryForWriter:(id)arg1;
- (bool)_validateRecordIDString:(id)arg1;
- (void)accountStatusChanged;
- (void)addApplicationIdentifier:(id)arg1;
- (void)addApplicationIdentifierInternal:(id)arg1;
- (id)apps;
- (void)deleteFromDevice:(id)arg1 fileName:(id)arg2 overrideRetained:(bool)arg3;
- (id)fetchAttribution:(id)arg1;
- (void)garbageCollect;
- (void)garbageCollectNow;
- (id)getHighlightsForApplicationIdentifier:(id)arg1;
- (id)getHighlightsInternalForApplicationIdentifier:(id)arg1;
- (id)getSyncableHighlightsForApplicationIdentifier:(id)arg1;
- (void)initializeState;
- (void)invalidateApps;
- (void)invalidateAppsInternal;
- (void)notifyChangeCallback;
- (id)recordForDevice:(id)arg1 fileName:(id)arg2;
- (void)reset;
- (void)setChangeCallback:(id /* block */)arg1;
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;
- (void)syncEngine:(id)arg1 didSaveRecordZone:(id)arg2;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToFetchChangesForRecordZoneID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;
- (void)updateServerAppsIfNecessary;

@end
