
@interface EDCloudKitControl : NSManagedObject

@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic) bool migratedFromKVSStorage;

+ (id)fetchRequest;

@end
