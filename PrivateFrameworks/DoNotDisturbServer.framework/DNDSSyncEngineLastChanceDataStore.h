
@interface DNDSSyncEngineLastChanceDataStore : NSObject <DNDSSyncEngineLastChanceDataStoring> {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _queue_recordsByID;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *records;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_decodeRecordFromData:(id)arg1;
- (id)_encodedDataFromRecord:(id)arg1;
- (void)_queue_read;
- (void)_queue_write;
- (void)addRecord:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)purge;
- (id)recordWithID:(id)arg1;
- (id)records;
- (id)recordsWithZoneID:(id)arg1;
- (void)removeRecordWithID:(id)arg1;
- (void)removeRecordsWithZoneID:(id)arg1;

@end
