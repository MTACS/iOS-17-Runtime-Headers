
@protocol _DPStorageMOConversion

@required

+ (<_DPStorageMOConversion> *)createRecordFromManagedObject:(NSManagedObject *)arg1;
+ (NSString *)entityName;

- (bool)copyFromManagedObject:(NSManagedObject *)arg1;
- (bool)copyToManagedObject:(NSManagedObject *)arg1;
- (NSString *)entityName;
- (NSManagedObjectID *)objectId;
- (void)setObjectId:(NSManagedObjectID *)arg1;
- (void)setSubmitted:(bool)arg1;
- (bool)submitted;

@end
