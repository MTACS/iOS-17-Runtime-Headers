
@interface NSCKRecordZoneMoveReceipt : NSManagedObject

@property (nonatomic, retain) NSDate *movedAt;
@property (nonatomic) bool needsCloudDelete;
@property (nonatomic, retain) NSString *ownerName;
@property (nonatomic, retain) NSCKRecordMetadata *recordMetadata;
@property (nonatomic, retain) NSString *recordName;
@property (nonatomic, retain) NSString *zoneName;

+ (id)countMoveReceiptsInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4;
+ (id)entityPath;
+ (id)moveReceiptsMatchingRecordIDs:(id)arg1 inManagedObjectContext:(id)arg2 persistentStore:(id)arg3 error:(id*)arg4;

- (id)createRecordIDForMovedRecord;

@end
