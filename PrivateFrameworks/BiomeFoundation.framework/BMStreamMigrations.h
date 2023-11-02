
@interface BMStreamMigrations : NSObject

+ (long long)handleFloatReturnValue:(id)arg1;
+ (id)legacyClassNameForLibraryStream:(id)arg1;
+ (id)libraryPathForStreamIdentifier:(id)arg1;
+ (id)libraryRestrictedStreamMigrationPaths;
+ (id)pathToVersionFile;
+ (long long)readCurrentDatabaseVersion;
+ (void)setDatabaseVersion:(long long)arg1;

- (void)_migrateStreamsToLibrary:(id)arg1 streamType:(unsigned long long)arg2;
- (void)_moveStreamsWithPathMapping:(id)arg1;
- (void)_removeStreamPaths:(id)arg1;
- (void)migrate;
- (void)migrateFromVersion:(long long)arg1;

@end
