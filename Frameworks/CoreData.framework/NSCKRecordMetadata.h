
@interface NSCKRecordMetadata : NSManagedObject

@property (nonatomic, retain) NSString *ckRecordName;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, retain) NSData *ckShare;
@property (nonatomic, retain) NSData *encodedRecord;
@property (nonatomic, retain) NSNumber *entityId;
@property (nonatomic, retain) NSNumber *entityPK;
@property (nonatomic, retain) NSNumber *lastExportedTransactionNumber;
@property (nonatomic, retain) NSSet *moveReceipts;
@property (nonatomic) bool needsCloudDelete;
@property (nonatomic) bool needsLocalDelete;
@property (nonatomic) bool needsUpload;
@property (nonatomic, retain) NSNumber *pendingExportChangeTypeNumber;
@property (nonatomic, retain) NSNumber *pendingExportTransactionNumber;
@property (nonatomic, retain) NSCKRecordZoneMetadata *recordZone;

+ (id)encodeRecord:(id)arg1 error:(id*)arg2;
+ (id)entityPath;
+ (id)insertMetadataForObject:(id)arg1 setRecordName:(bool)arg2 inZoneWithID:(id)arg3 recordNamePrefix:(id)arg4 error:(id*)arg5;
+ (id)recordFromEncodedData:(id)arg1 error:(id*)arg2;

- (id)createEncodedMoveReceiptData:(id*)arg1;
- (id)createRecordFromSystemFields;
- (bool)mergeMoveReceiptsWithData:(id)arg1 error:(id*)arg2;

@end
