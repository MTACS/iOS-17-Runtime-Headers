
@interface PFCloudKitOperationBatch : NSObject {
    NSMutableSet * _deletedRecordIDs;
    NSMutableSet * _recordIDs;
    NSMutableDictionary * _recordTypeToDeletedRecordID;
    NSMutableArray * _records;
    unsigned long long  _sizeInBytes;
}

- (void)dealloc;
- (id)init;

@end
