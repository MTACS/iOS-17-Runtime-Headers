
@interface NSCKRecordZoneQuery : NSManagedObject

@property (nonatomic, retain) NSDate *lastFetchDate;
@property (nonatomic, retain) NSDate *mostRecentRecordModificationDate;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) CKQueryCursor *queryCursor;
@property (nonatomic, retain) NSString *recordType;
@property (nonatomic, retain) NSCKRecordZoneMetadata *recordZone;

+ (id)entityPath;

@end
