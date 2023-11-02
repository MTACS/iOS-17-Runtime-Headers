
@interface MTLibraryMigrationUtil : NSObject

+ (bool)createPersistentStoreForModel:(id)arg1 attemptMigration:(bool)arg2;
+ (bool)isMomCompatible:(id)arg1;
+ (bool)isNewInstall;
+ (id)libraryImageStoreType;
+ (bool)needsCoreDataMigration;
+ (bool)needsDataMigration;
+ (bool)needsImageStoreMigration;
+ (void)setLibraryImageStoreType:(id)arg1;

@end
