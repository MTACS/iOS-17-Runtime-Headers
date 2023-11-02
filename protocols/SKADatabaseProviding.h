
@protocol SKADatabaseProviding <NSObject>

@required

- (bool)databaseHasBeenCreated;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSManagedObjectContext *)newBackgroundContext;

@end
