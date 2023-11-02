
@interface PGMusicCache : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cacheURL;
    void managedObjectContext;
    void persistentStoreCoordinator;
}

+ (id)cacheAtURL:(id)arg1 error:(id*)arg2;
+ (id)cacheWithPhotoLibrary:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)init;
- (bool)removeAllWithProgressReporter:(id)arg1 error:(id*)arg2;
- (bool)removeSongSourcesWithSongSourceCategories:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (bool)removeSongSourcesWithSongSourceCategory:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (id)statusAndReturnError:(id*)arg1;

@end
