
@interface PFCloudKitImporterZoneDeletedWorkItem : PFCloudKitImporterWorkItem {
    CKRecordZoneID * _deletedRecordZoneID;
}

- (void)dealloc;
- (id)description;
- (void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithDeletedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3;

@end
