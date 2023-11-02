
@interface PLModelMigrationHistory : NSObject {
    NSManagedObjectContext * _managedObjectContext;
    NSArray * _migrationHistory;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)arg1;
- (bool)isLibraryOlderThanVersion:(unsigned short)arg1;
- (id)libraryVersionHistorySinceLastRebuildOnly:(bool)arg1;
- (bool)libraryWasEverRebuilt;

@end
