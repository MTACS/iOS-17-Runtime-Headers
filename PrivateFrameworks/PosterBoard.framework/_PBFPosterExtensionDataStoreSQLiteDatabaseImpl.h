
@interface _PBFPosterExtensionDataStoreSQLiteDatabaseImpl : NSObject <BSInvalidatable, PBFPosterExtensionDataStorageMutating, PBFPosterExtensionDataStorageRetrieving> {
    NSURL * _URL;
    bool  _checkpointWALOnInvalidate;
    PBFSQLiteDatabaseConnection * _connection;
    NSURL * _databaseURL;
    BSAtomicFlag * _invalidationFlag;
    NSCache * _providerForPosterUUIDCache;
    int  _sqliteFlags;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property bool checkpointWALOnInvalidate;
@property (nonatomic, readonly) PBFSQLiteDatabaseConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)URL;
- (bool)addPosterUUID:(id)arg1 provider:(id)arg2 error:(out id*)arg3;
- (bool)addRole:(id)arg1 displayName:(id)arg2 error:(out id*)arg3;
- (bool)assignPosterUUID:(id)arg1 toRole:(id)arg2 error:(out id*)arg3;
- (id)attributeForPoster:(id)arg1 roleId:(id)arg2 attributeId:(id)arg3 error:(out id*)arg4;
- (id)attributeIdentifiersForPoster:(id)arg1 roleId:(id)arg2 error:(out id*)arg3;
- (id)attributesForPoster:(id)arg1 roleId:(id)arg2 attributeIdentifiers:(id)arg3 error:(out id*)arg4;
- (bool)checkIfPosterUUIDs:(id)arg1 belongToRole:(id)arg2 error:(out id*)arg3;
- (bool)checkpointWALOnInvalidate;
- (id)connection;
- (id)dataStoreMetadataWithError:(out id*)arg1;
- (void)dealloc;
- (id)extensionIdentifierForPosterUUID:(id)arg1 error:(out id*)arg2;
- (id)extensionIdentifiersForRole:(id)arg1 error:(out id*)arg2;
- (id)initWithURL:(id)arg1 options:(int)arg2 error:(out id*)arg3;
- (void)invalidate;
- (bool)markPosterUUIDAsSelected:(id)arg1 roleId:(id)arg2 error:(out id*)arg3;
- (bool)mutateAttributeForPoster:(id)arg1 roleId:(id)arg2 attributeId:(id)arg3 attributePayload:(id)arg4 error:(out id*)arg5;
- (bool)mutateDataStoreMetadataForKey:(id)arg1 value:(id)arg2 error:(out id*)arg3;
- (bool)mutateSortOrder:(id)arg1 roleId:(id)arg2 error:(out id*)arg3;
- (bool)performChanges:(id /* block */)arg1 error:(out id*)arg2;
- (id)posterUUIDsForExtensionIdentifier:(id)arg1 role:(id)arg2 error:(out id*)arg3;
- (bool)removePosterUUID:(id)arg1 error:(out id*)arg2;
- (bool)removeRole:(id)arg1 error:(out id*)arg2;
- (id)roleDisplayNamesForIdentifiers:(id)arg1 error:(out id*)arg2;
- (id)roleIdentifiersWithError:(out id*)arg1;
- (id)selectedPosterUUIDForRole:(id)arg1 error:(out id*)arg2;
- (void)setCheckpointWALOnInvalidate:(bool)arg1;
- (id)setup;
- (id)sortedPosterUUIDsForRole:(id)arg1 error:(out id*)arg2;
- (bool)unassignPosterUUID:(id)arg1 fromRole:(id)arg2 error:(out id*)arg3;
- (bool)validateDatabaseWithError:(out id*)arg1;
- (unsigned long long)version;

@end
