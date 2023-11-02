
@interface DiagnosticsServiceImpl : NSObject <DiagnosticsServiceInterface, NSXPCListenerDelegate> {
    NSMutableDictionary * allowanceCache;
    NSObject<OS_dispatch_queue> * queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_checkRateLimitForAllowance:(id)arg1 time:(id)arg2;
- (bool)_checkRateLimitForConnection:(id)arg1;
- (void)abcEnabledAndReadyWithReply:(id /* block */)arg1;
- (void)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(id /* block */)arg4;
- (void)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (bool)assertEntitlement:(id)arg1 entitlement:(id)arg2 private:(bool)arg3;
- (void)cancelSession:(id)arg1;
- (void)cloudKitUploadDecisionForCaseIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)endSession:(id)arg1;
- (void)getAutoBugCaptureConfiguration:(id /* block */)arg1;
- (void)getCasesListFromIdentifier:(id)arg1 count:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)getDiagnosticPayloadsForSignatures:(id)arg1 reply:(id /* block */)arg2;
- (void)getExpertSystemsStatus:(id /* block */)arg1;
- (void)getSessionStatisticsWithReply:(id /* block */)arg1;
- (void)homeKitResidentDevicesIDSIdentifiersWithReply:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (void)listCaseSummariesOfType:(id)arg1 fromIdentifier:(id)arg2 count:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)listCaseSummariesWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)purgeAutoBugCaptureFilesWithSubPaths:(id)arg1 reply:(id /* block */)arg2;
- (void)requestGroupCaseIdentifierForSignature:(id)arg1 reply:(id /* block */)arg2;
- (void)resetAllWithReply:(id /* block */)arg1;
- (void)resetDiagnosticCaseStorageWithReply:(id /* block */)arg1;
- (void)resetDiagnosticCaseUsageWithReply:(id /* block */)arg1;
- (id)responseDictWithSuccess:(bool)arg1 reasonCode:(long long)arg2;
- (id)responseDictWithSuccess:(bool)arg1 sessionId:(id)arg2;
- (id)responseDictWithSuccess:(bool)arg1 sessionId:(id)arg2 groupId:(id)arg3 additionalDict:(id)arg4 reasonCode:(long long)arg5;
- (void)shutdown;
- (void)snapshotWithSignature:(id)arg1 delay:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(bool)arg6 reply:(id /* block */)arg7;
- (void)startSessionWithSignature:(id)arg1 duration:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(bool)arg6 reply:(id /* block */)arg7;
- (void)submitRecentCaseSummariesWithCount:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)submitRecentCaseSummariesWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)triggerRemoteSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)uploadCasesWithIdentifiersToCloudKit:(id)arg1;
- (void)uploadRecentCases:(unsigned long long)arg1;
- (bool)validateSignature:(id)arg1;

@end
