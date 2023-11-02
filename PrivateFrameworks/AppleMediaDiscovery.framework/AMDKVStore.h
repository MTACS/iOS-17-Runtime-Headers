
@interface AMDKVStore : NSManagedObject

@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) NSData *value;

+ (id)deleteWithPredicate:(id)arg1 error:(id*)arg2;
+ (id)fetchAllKeyValues:(id*)arg1;
+ (id)fetchEntryForKey:(id)arg1 error:(id*)arg2;
+ (id)fetchRequest;
+ (id)fetchValueForKey:(id)arg1 error:(id*)arg2;
+ (void)setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;

@end
