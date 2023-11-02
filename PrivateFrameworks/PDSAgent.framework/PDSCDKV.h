
@interface PDSCDKV : NSManagedObject

@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSNumber *numValue;
@property (nonatomic, copy) NSString *stringValue;

+ (id)fetchRequest;
+ (id)insertIntoManagedObjectContext:(id)arg1;
+ (id)predicateForKey:(id)arg1;

@end
