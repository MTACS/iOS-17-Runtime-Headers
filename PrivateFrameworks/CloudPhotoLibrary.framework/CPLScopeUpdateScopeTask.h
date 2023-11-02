
@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask <CPLEngineSyncTaskDelegate> {
    <CPLEngineTransportFetchTransportScopeTask> * _fetchTransportScope;
    NSData * _fetchedTransportScope;
    <CPLEngineTransportGetScopeInfoTask> * _getLibraryInfo;
    CPLScopeUpdateScopeTask * _lookForStagingScopeTask;
    CPLScopeChange * _previousScopeChange;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _retryingFetchingTransportScope;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_updateScopeWithNewScopeType:(long long)arg1 scope:(id)arg2 updatedScopeChange:(id)arg3 updatedFlags:(id)arg4 oldTransportScope:(id)arg5 updatedTransportScope:(id)arg6 shouldUpdateTransportScope:(id /* block */)arg7 store:(id)arg8 transport:(id)arg9 inTransaction:(id)arg10;
+ (void)updateScopeWithNewScopeType:(long long)arg1 scope:(id)arg2 updatedScopeChange:(id)arg3 updatedFlags:(id)arg4 oldTransportScope:(id)arg5 updatedTransportScope:(id)arg6 shouldUpdateTransportScope:(id /* block */)arg7 store:(id)arg8 transport:(id)arg9 inTransaction:(id)arg10;

- (void).cxx_destruct;
- (void)_fetchTransportScope;
- (void)_getLibraryInfo;
- (void)_lookForStagingScopeWithIdentifier:(id)arg1 transportScope:(id)arg2;
- (void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg1;
- (void)_markScopeAsFeatureDisabledWithFlags:(id)arg1;
- (void)_markScopeHasBadTransportScopeWithError:(id)arg1;
- (void)_performAdditionalChecksWithNewScopeType:(long long)arg1 updatedScopeChange:(id)arg2 updatedFlags:(id)arg3 oldTransportScope:(id)arg4 updatedTransportScope:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_updateScopeChangeForPrimaryScopeRelatedToSharingScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateScopeWithNewScopeType:(long long)arg1 updatedScopeChange:(id)arg2 updatedFlags:(id)arg3 oldTransportScope:(id)arg4 updatedTransportScope:(id)arg5;
- (void)cancel;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (void)launch;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (id)taskIdentifier;

@end
