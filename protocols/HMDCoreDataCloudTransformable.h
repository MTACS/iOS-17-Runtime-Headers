
@protocol HMDCoreDataCloudTransformable <NSObject>

@required

+ (NSManagedObject *)createWithLocalModel:(NSManagedObject *)arg1 context:(NSManagedObjectContext *)arg2;
+ (bool)exportDeleteWithObjectID:(NSManagedObjectID *)arg1 modelID:(NSUUID *)arg2 additionalUpdates:(NSMutableDictionary *)arg3 context:(NSManagedObjectContext *)arg4;
+ (bool)exportInsertWithObjectID:(NSManagedObjectID *)arg1 additionalUpdates:(NSMutableDictionary *)arg2 context:(NSManagedObjectContext *)arg3;
+ (bool)exportUpdateWithObjectID:(NSManagedObjectID *)arg1 updatedProperties:(NSSet *)arg2 additionalUpdates:(NSMutableDictionary *)arg3 context:(NSManagedObjectContext *)arg4;
+ (NSManagedObject *)fetchWithLocalModel:(NSManagedObject *)arg1 context:(NSManagedObjectContext *)arg2;
+ (bool)importDeleteWithObjectID:(NSManagedObjectID *)arg1 modelID:(NSUUID *)arg2 additionalUpdates:(NSMutableDictionary *)arg3 context:(NSManagedObjectContext *)arg4;
+ (bool)importInsertWithObjectID:(NSManagedObjectID *)arg1 additionalUpdates:(NSMutableDictionary *)arg2 context:(NSManagedObjectContext *)arg3;
+ (bool)importUpdateWithObjectID:(NSManagedObjectID *)arg1 updatedProperties:(NSSet *)arg2 additionalUpdates:(NSMutableDictionary *)arg3 context:(NSManagedObjectContext *)arg4;

- (NSManagedObject *)createLocalModelWithContext:(NSManagedObjectContext *)arg1;
- (NSManagedObject *)fetchLocalModelWithContext:(NSManagedObjectContext *)arg1;

@end
