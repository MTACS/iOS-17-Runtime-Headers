
@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem {
    CKRecordZoneID * _purgedRecordZoneID;
}

- (void)dealloc;
- (id)description;
- (void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithPurgedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3;

@end
