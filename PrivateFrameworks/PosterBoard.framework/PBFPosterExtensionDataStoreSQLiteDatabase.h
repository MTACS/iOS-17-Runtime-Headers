
@interface PBFPosterExtensionDataStoreSQLiteDatabase : NSObject <BSInvalidatable, PBFPosterExtensionDataStorage> {
    NSURL * _URL;
    bool  _checkpointWALOnInvalidate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
    _PBFPosterExtensionDataStoreSQLiteDatabaseImpl * _lock_readonlyImpl;
    unsigned long long  _options;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readwriteLock;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property bool checkpointWALOnInvalidate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)URL;
- (id)attributeForPoster:(id)arg1 roleId:(id)arg2 attributeId:(id)arg3 error:(out id*)arg4;
- (id)attributeIdentifiersForPoster:(id)arg1 roleId:(id)arg2 error:(out id*)arg3;
- (id)attributesForPoster:(id)arg1 roleId:(id)arg2 attributeIdentifiers:(id)arg3 error:(out id*)arg4;
- (bool)checkIfPosterUUIDs:(id)arg1 belongToRole:(id)arg2 error:(out id*)arg3;
- (bool)checkpointWALOnInvalidate;
- (id)dataStoreMetadataWithError:(out id*)arg1;
- (id)extensionIdentifierForPosterUUID:(id)arg1 error:(out id*)arg2;
- (id)extensionIdentifiersForRole:(id)arg1 error:(out id*)arg2;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(out id*)arg3;
- (void)invalidate;
- (unsigned long long)options;
- (bool)performChanges:(id /* block */)arg1 error:(out id*)arg2;
- (id)posterUUIDsForExtensionIdentifier:(id)arg1 role:(id)arg2 error:(out id*)arg3;
- (id)roleDisplayNamesForIdentifiers:(id)arg1 error:(out id*)arg2;
- (id)roleIdentifiersWithError:(out id*)arg1;
- (id)selectedPosterUUIDForRole:(id)arg1 error:(out id*)arg2;
- (void)setCheckpointWALOnInvalidate:(bool)arg1;
- (id)sortedPosterUUIDsForRole:(id)arg1 error:(out id*)arg2;
- (id)underlyingReadonlyDatabaseConnection;
- (bool)validateDatabaseWithError:(out id*)arg1;
- (unsigned long long)version;

@end
