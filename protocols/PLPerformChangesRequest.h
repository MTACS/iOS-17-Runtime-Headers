
@protocol PLPerformChangesRequest <NSObject>

@required

- (long long)accessScopeOptionsRequiredForRequestedChanges;
- (void)decodeWithService:(id <PLPerformChangesRequestService>)arg1 clientAuthorization:(id <PLClientAuthorization>)arg2;
- (void)discardUnsupportedLimitedLibraryChangeRequests;
- (NSError *)errorWithLocalizedDescription:(NSString *)arg1;
- (void)executeWithLibraryServicesManager:(void *)arg1 libraryName:(void *)arg2 executionContext:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: PLLibraryServicesManager *, const char *, <PLPhotoLibraryExecutionContext> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)executeWithService:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <PLPerformChangesRequestService> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
