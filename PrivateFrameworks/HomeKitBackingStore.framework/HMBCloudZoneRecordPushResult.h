
@interface HMBCloudZoneRecordPushResult : HMFObject {
    NSSet * _conflicts;
    NSSet * _deletedRecordIDs;
    NSError * _fatalError;
    NSSet * _updatedRecords;
}

@property (readonly, copy) NSSet *conflicts;
@property (readonly, copy) NSSet *deletedRecordIDs;
@property (readonly, copy) NSError *fatalError;
@property (readonly, copy) NSSet *updatedRecords;

- (void).cxx_destruct;
- (id)conflicts;
- (id)deletedRecordIDs;
- (id)fatalError;
- (id)initWithUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 conflicts:(id)arg3 fatalError:(id)arg4;
- (id)initWithUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3;
- (id)pushResultByMergingWithPushResult:(id)arg1;
- (id)updatedRecords;

@end
