
@interface PHPerformChangesRequest : PLXPCObject <PHPerformChangesRequest, PLPerformChangesRequest, PLPerformChangesRequestService> {
    NSMutableDictionary * _changeRequestsByUUID;
    NSMutableOrderedSet * _deletes;
    NSMutableOrderedSet * _failedOnDemandRequests;
    bool  _inService;
    NSMutableOrderedSet * _inserts;
    PHPerformChangesInstrumentation * _instrumentation;
    <PLPerformChangesRequestService> * _service;
    NSMutableOrderedSet * _updates;
}

@property (nonatomic, readonly) long long accessLevel;
@property (nonatomic, readonly) long long accessScopeOptionsRequiredForRequestedChanges;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSOrderedSet *deletes;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasChangeRequests;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOrderedSet *inserts;
@property (nonatomic, retain) PHPerformChangesInstrumentation *instrumentation;
@property (nonatomic, readonly) NSArray *requestSets;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSOrderedSet *updates;

+ (struct _xpc_type_s { }*)type;

- (void).cxx_destruct;
- (id)_allChangeRequests;
- (id)_failureWithError:(id)arg1;
- (bool)_isSupportedLimitedLibraryChangeRequest:(id)arg1;
- (long long)accessLevel;
- (long long)accessScopeOptionsRequiredForRequestedChanges;
- (id)changeRequestForUUID:(id)arg1;
- (id)clientBundleID;
- (id)clientDescription;
- (id)clientDisplayName;
- (void)decodeWithService:(id)arg1 clientAuthorization:(id)arg2;
- (id)deletes;
- (id)description;
- (long long)determineAuthorizationStatusForChanges;
- (void)didSendChangesToServiceWithResult:(bool)arg1;
- (void)discardUnsupportedLimitedLibraryChangeRequests;
- (void)encodeWithCoder:(id)arg1;
- (id)errorWithLocalizedDescription:(id)arg1;
- (void)executeWithLibraryServicesManager:(id)arg1 libraryName:(const char *)arg2 executionContext:(id)arg3 reply:(id /* block */)arg4;
- (void)executeWithService:(id)arg1 reply:(id /* block */)arg2;
- (bool)hasChangeRequests;
- (id)inserts;
- (id)instrumentation;
- (unsigned long long)libraryRole;
- (id)libraryServicesManager;
- (void)notifyChangesTransactionFailedWithLazyPhotoLibrary:(id)arg1 error:(id)arg2;
- (id)persistentStoreCoordinator;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordFailedOnDemandRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (id)requestSets;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;
- (void)setInstrumentation:(id)arg1;
- (id)updates;

@end
