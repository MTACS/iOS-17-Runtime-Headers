
@interface MFUserDefaultMigrator : NSObject

+ (id)_keysToMigrateToSharedAppGroup;
+ (void)_migrateExtPropertiesPlist;
+ (id)currentDeviceIdentifer;
+ (id)log;
+ (void)migrateDefaults:(id)arg1;
+ (void)migrateDefaultsFromOldKeysToNewKeys:(id)arg1;
+ (bool)migratePreferencesToSharedAppGroup;
+ (void)migratePropertyForOldKey:(id)arg1 newKey:(id)arg2;
+ (id)mobileMailDefaultForKey:(id)arg1;
+ (id)oldKeysToNewKeysMap;
+ (void)removeMobileMailDefaultForKey:(id)arg1;

@end
