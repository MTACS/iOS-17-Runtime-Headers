
@interface HMBCloudZoneFetchRecordsContext : HMFObject {
    NAFuture * _future;
    NSSet * _recordIDs;
}

@property (readonly) NAFuture *future;
@property (readonly, copy) NSSet *recordIDs;

- (void).cxx_destruct;
- (id)future;
- (id)initWithRecordIDs:(id)arg1 future:(id)arg2;
- (id)recordIDs;

@end
