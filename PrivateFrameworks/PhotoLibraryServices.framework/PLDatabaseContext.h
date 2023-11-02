
@interface PLDatabaseContext : NSObject {
    PLLazyObject * _lazyMomentLibrary;
    PLPhotoLibraryBundle * _libraryBundle;
    PLSyndicationIngestMutex * _syndicationIngestMutex;
}

@property (readonly) PLSyndicationIngestMutex *syndicationIngestMutex;
@property (readonly) long long wellKnownPhotoLibraryIdentifier;

+ (id)newShortLivedLibraryWithName:(const char *)arg1 bundle:(id)arg2;
+ (id)newShortLivedLibraryWithName:(const char *)arg1 libraryRole:(unsigned long long)arg2 bundle:(id)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLibraryBundle:(id)arg1;
- (void)invalidate;
- (id)momentLibrary;
- (id)newMomentLibrary;
- (id)newShortLivedCplLibraryWithNameSuffix:(const char *)arg1;
- (id)newShortLivedLibraryForHistoryPersistenceReadingWithName:(const char *)arg1;
- (id)newShortLivedLibraryWithName:(const char *)arg1;
- (id)newShortLivedLibraryWithName:(const char *)arg1 libraryRole:(unsigned long long)arg2;
- (id)newShortLivedMacOpenClientLibraryWithName:(const char *)arg1;
- (void)perform:(id /* block */)arg1 withName:(const char *)arg2;
- (void)performSync:(id /* block */)arg1 withName:(const char *)arg2;
- (void)performTransaction:(id /* block */)arg1 withName:(const char *)arg2;
- (void)performTransactionSync:(id /* block */)arg1 withName:(const char *)arg2;
- (id)syndicationIngestMutex;
- (long long)wellKnownPhotoLibraryIdentifier;

@end
