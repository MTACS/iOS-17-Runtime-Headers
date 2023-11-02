
@interface PLPersonContactInfoMigrator : NSObject {
    CNContactStore * _contactStore;
    NSArray * _keysToFetch;
    int  _populateMatchingDictionaryCount;
    int  _updateNameCount;
}

+ (void)migratePersonContactInfoInPhotoLibrary:(id)arg1;
+ (id)migrationQueue;

- (void).cxx_destruct;
- (id)enumerateResultsWithIncrementalSaveUsingFetchRequest:(id)arg1 inContext:(id)arg2 withBlock:(id /* block */)arg3;
- (id)init;
- (void)migratePerson:(id)arg1;
- (void)migratePersonContactInfoInContext:(id)arg1;
- (void)migratePersonContactInfoInPhotoLibrary:(id)arg1;
- (void)populateMatchingDictionaryOfPerson:(id)arg1 withContact:(id)arg2;
- (void)updateNameOfPerson:(id)arg1 withContact:(id)arg2;

@end
