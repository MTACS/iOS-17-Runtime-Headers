
@interface PlusMediaReferenceSourceAppCoreDataRecord : NSManagedObject

@property (nonatomic, retain) NSSet *appMediaReferences;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
