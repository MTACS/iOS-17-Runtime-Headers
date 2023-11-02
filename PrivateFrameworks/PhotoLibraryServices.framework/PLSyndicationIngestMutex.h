
@interface PLSyndicationIngestMutex : NSObject {
    PLDatabaseContext * _databaseContext;
    unsigned char  _requestedSyndicationIngestClientIdentifier;
    unsigned char  _syndicationIngestClientIdentifier;
    PLPhotoLibrary * _syndicationIngestLibrary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _syndicationIngestLibraryLock;
    NSDate * _syndicationIngestLibraryUsageStart;
}

- (void).cxx_destruct;
- (id)_obtainSyndicationIngestLibraryIfPossibleWithIdentifier:(unsigned char)arg1;
- (id)initWithDatabaseContext:(id)arg1;
- (bool)shouldStopUsingSyndicationIngestLibraryWithIdentifier:(unsigned char)arg1;
- (void)stopUsingSyndicationIngestLibraryWithIdentifier:(unsigned char)arg1;
- (id)syndicationIngestMutexStateDescription;
- (id)tryUsingSyndicationIngestLibraryWithIdentifier:(unsigned char)arg1;

@end
