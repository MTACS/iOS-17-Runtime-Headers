
@interface NSCKImportOperation : NSManagedObject

@property (nonatomic, retain) NSData *changeTokenBytes;
@property (nonatomic, retain) NSDate *importDate;
@property (nonatomic, retain) NSUUID *operationUUID;
@property (nonatomic, retain) NSSet *pendingRelationships;

@end
