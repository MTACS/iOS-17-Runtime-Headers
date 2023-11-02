
@protocol HKDatabaseValidationClientInterface <NSObject>

@required

- (void)clientRemote_processIntegrityErrorString:(NSString *)arg1 errorHandlerIdentifier:(NSString *)arg2;
- (void)clientRemote_processValidationError:(NSError *)arg1 errorHandlerIdentifier:(NSString *)arg2;
- (void)clientRemote_synchronizeWithCompletion:(void *)arg1 success:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*, bool, NSError *

@end
