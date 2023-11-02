
@interface HDAuthorizationManager : NSObject <HDDiagnosticObject> {
    NSMutableDictionary * _activeObjectPromptSessionsBySessionIdentifier;
    NSMutableDictionary * _activeRecalibrateEstimatesRequestSessionsByBundleIdentifier;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSMutableDictionary * _openAppCompletionHandlersByBundleID;
    NSMutableDictionary * _pendingObjectAuthorizationRequestsByBundleIdentifier;
    NSMutableArray * _pendingRequestGroups;
    HDProfile * _profile;
    _HDAuthorizationRequestGroup * _promptingRequestGroup;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _remoteAuthorizationRecordsByBundleID;
    NSMutableDictionary * _requestGroupsByBundleIdentifier;
    double  _requestSessionTimeout;
    bool  _suppressAuthorizationPrompt;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double requestSessionTimeout;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressAuthorizationPrompt;

- (void).cxx_destruct;
- (id)_authorizationStatusForTypes:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (void)applicationsUninstalledNotification:(id)arg1;
- (long long)authorizationRequestStatusForClientBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 error:(id*)arg4;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAuthorizationRequestsWithIdentifiers:(id)arg1;
- (void)createRecalibrateEstimatesRequestRecordForSource:(id)arg1 sampleType:(id)arg2 effectiveDate:(id)arg3 handler:(id /* block */)arg4;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (id)enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)enqueueObjectAuthorizationRequestForBundleIdentifier:(id)arg1 context:(id)arg2 promptIfNeeded:(bool)arg3 authorizationNeededHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)fetchAuthorizationContextForPromptSession:(id)arg1 error:(id*)arg2;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)handleObjectAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)hasRequiredAuthorizationStatusesForBundleIdentifier:(id)arg1 requiredReadTypes:(id)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1;
- (long long)objectAuthorizationRecordForSource:(id)arg1 objectUUID:(id)arg2 resolveAssociations:(bool)arg3 error:(id*)arg4;
- (void)openAppForAuthorization:(id)arg1 sessionIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)performObjectAuthorizationForSource:(id)arg1 samples:(id)arg2 associatedWithSamplesOfType:(id)arg3 completion:(id /* block */)arg4;
- (void)requestRemoteAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (double)requestSessionTimeout;
- (void)resetAllAuthorizationRecordsWithCompletion:(id /* block */)arg1;
- (void)setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)setRequestSessionTimeout:(double)arg1;
- (void)setSuppressAuthorizationPrompt:(bool)arg1;
- (bool)suppressAuthorizationPrompt;
- (void)validateRecalibrateEstimatesRequestRecord:(id)arg1 completion:(id /* block */)arg2;
- (bool)verifyProfileAuthorization:(id)arg1 forClient:(id)arg2 error:(id*)arg3;

@end
