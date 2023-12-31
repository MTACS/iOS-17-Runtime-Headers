
@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager

+ (bool)_canMigrateWithMappingModel:(id)arg1;

- (void)dealloc;
- (bool)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8;

@end
