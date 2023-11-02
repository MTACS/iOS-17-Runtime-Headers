
@interface UNCBundleLibrarian : NSObject {
    NSString * _bundleLibraryPath;
    NSMutableDictionary * _bundleToUUIDMap;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _uuidToBundleMap;
}

- (void).cxx_destruct;
- (bool)_isUUIDString:(id)arg1;
- (void)_queue_addEntryForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)_queue_bundleIdentifierForUniqueIdentifier:(id)arg1;
- (id)_queue_dataAtPath:(id)arg1;
- (id)_queue_dictionaryAtPath:(id)arg1;
- (void)_queue_loadBundleLibrary;
- (void)_queue_loadBundleLibraryIfNeeded;
- (void)_queue_migrateBundleDirectoriesInDirectory:(id)arg1;
- (void)_queue_removeEntryForBundleIdentifier:(id)arg1;
- (void)_queue_removeUnknownDirectoriesFromLibrary;
- (void)_queue_removeUnknownDirectoriesInDirectory:(id)arg1;
- (bool)_queue_saveDictionary:(id)arg1 atPath:(id)arg2;
- (id)_queue_uniqueIdentifierForBundleIdentifier:(id)arg1;
- (void)_removeBundleLibrary;
- (void)bootstrapLibraryForBundleIdentifiers:(id)arg1;
- (id)bundleIdentifierForUniqueIdentifier:(id)arg1;
- (id)initWithDirectory:(id)arg1;
- (void)migrateLibraryFromDirectory:(id)arg1 toDirectory:(id)arg2;
- (void)removeMappingForBundleIdentifier:(id)arg1;
- (id)uniqueIdentifierForBundleIdentifier:(id)arg1;

@end
