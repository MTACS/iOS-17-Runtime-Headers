
@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {
    PLLimitedLibraryFetchFilter * __fetchFilterLock_fetchFilter;
    NSString * __fetchFilterLock_fetchFilterClientIdentifier;
    NSDictionary * __fetchFilterLock_fetchFilterEntityNameToPredicateMap;
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _crashLogMessageLock;
    BOOL  _crashLogMessageLock_crashLogMessage;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fetchFilterLock;
    NSNumber * _fetchFilterLock_fetchFilterEnabledStatus;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _restrictedAccessLock;
    NSNumber * _restrictedAccessLock_lockedContentAccessAllowed;
}

- (void).cxx_destruct;
- (id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg1;
- (id)_restrictedEntityNamesAllowedForContext:(id)arg1;
- (bool)_restrictedLockedContentAccessAllowedForContext:(id)arg1;
- (id)allowableClassesForClientWithContext:(id)arg1;
- (void)clearCrashLogMessage;
- (void)dealloc;
- (id)init;
- (id)initWithConnectionAuthorization:(id)arg1;
- (void)limitedLibraryFetchFiltersUpdated:(id)arg1;
- (id)processFaultForObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3;
- (id)processFaultForRelationshipWithName:(id)arg1 onObjectWithID:(id)arg2 fromClientWithContext:(id)arg3 error:(id*)arg4;
- (id)processRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (void)setCrashLogMessageForRequest:(id)arg1 context:(id)arg2;
- (bool)shouldAcceptConnectionsFromClientWithContext:(id)arg1;
- (bool)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1;

@end
