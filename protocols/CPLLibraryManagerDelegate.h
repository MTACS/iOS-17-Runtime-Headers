
@protocol CPLLibraryManagerDelegate <NSObject>

@required

- (void)libraryManagerDidStartSynchronization:(CPLLibraryManager *)arg1;
- (void)libraryManagerHasChangesToPull:(CPLLibraryManager *)arg1;
- (void)libraryManagerStatusDidChange:(CPLLibraryManager *)arg1;

@optional

- (NSString *)displayableNameForLibraryManager:(CPLLibraryManager *)arg1;
- (void)libraryManager:(void *)arg1 provideLocalResource:(void *)arg2 recordClass:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: CPLLibraryManager *, CPLResource *, Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLResource *, unsigned long long, void*
- (void)libraryManager:(void *)arg1 pushAllChangesWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: CPLLibraryManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)libraryManagerDidChangeConfiguration:(CPLLibraryManager *)arg1;
- (void)libraryManagerHasStatusChanges:(CPLLibraryManager *)arg1;

@end
