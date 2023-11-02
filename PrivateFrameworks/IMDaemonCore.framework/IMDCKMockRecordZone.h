
@interface IMDCKMockRecordZone : NSObject {
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
    IDSKVStore * _recordStore;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IDSKVStore *recordStore;

- (id)_ckRecordFromData:(id)arg1;
- (id)_fetchRecordZoneChangesOptionsFromOperation:(id)arg1;
- (unsigned long long)_fetchResultLimit:(id)arg1;
- (void)_handleFetchZoneChangesOperation:(id)arg1;
- (void)_handleModifyRecordsOperation:(id)arg1;
- (id)_kvStorePath;
- (id)_serializedCKRecordData:(id)arg1;
- (void)dealloc;
- (void)handleOperation:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)queue;
- (id)recordStore;
- (void)setRecordStore:(id)arg1;

@end
