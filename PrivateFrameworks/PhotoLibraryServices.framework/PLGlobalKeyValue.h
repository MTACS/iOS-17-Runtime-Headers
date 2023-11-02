
@interface PLGlobalKeyValue : PLManagedObject

@property (nonatomic, retain) <NSSecureCoding> *anyValue;
@property (nonatomic, retain) NSNumber *boolValue;
@property (nonatomic, retain) NSDate *dateValue;
@property (nonatomic, retain) NSNumber *doubleValue;
@property (nonatomic, retain) NSNumber *integerValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) short type;

+ (id)_globalValueForKeyValue:(id)arg1;
+ (void)_setGlobalValue:(id)arg1 forKeyValue:(id)arg2 managedObjectContext:(id)arg3;
+ (id)allDecodeClasses;
+ (id)attributesForKey;
+ (void)checkTypeForKey:(id)arg1 andValue:(id)arg2;
+ (id)dictionaryWithManagedObjectContext:(id)arg1 forMigrationHistory:(bool)arg2;
+ (id)entityName;
+ (id)fetchGlobalKeyValueForKey:(id)arg1 withManagedObjectContext:(id)arg2 createIfMissing:(bool)arg3;
+ (id)fetchGlobalKeyValuesForKeys:(id)arg1 withManagedObjectContext:(id)arg2;
+ (id)globalValueForKey:(id)arg1 managedObjectContext:(id)arg2;
+ (id)globalValuesForKeys:(id)arg1 managedObjectContext:(id)arg2;
+ (void)initialize;
+ (void)migrateLocaleIdentifierToGlobalKeyValues:(id)arg1 withPathManager:(id)arg2;
+ (void)populateWithDictionary:(id)arg1 managedObjectContext:(id)arg2 replaceExisting:(bool)arg3;
+ (void)setGlobalValue:(id)arg1 forKey:(id)arg2 managedObjectContext:(id)arg3;
+ (short)typeForKey:(id)arg1;

- (bool)supportsCloudUpload;

@end
