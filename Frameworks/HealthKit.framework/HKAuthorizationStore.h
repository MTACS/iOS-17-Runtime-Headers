
@interface HKAuthorizationStore : NSObject <_HKXPCExportable> {
    HKProxyProvider * _readProxyProvider;
    HKProxyProvider * _resetProxyProvider;
    HKProxyProvider * _writeProxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)readTaskIdentifier;
+ (id)resetTaskIdentifier;
+ (id)writeTaskIdentifier;

- (void).cxx_destruct;
- (void)_fetchReadProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_fetchResetProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_fetchSynchronousReadProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_fetchWriteProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)fetchAuthorizationContextForPromptSession:(id)arg1 error:(id*)arg2;
- (void)fetchAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAuthorizationRecordsForType:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAuthorizationStatusesForDocumentType:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchAuthorizationStatusesForSample:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSourcesRequestingAuthorizationForTypes:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (void)recalibrateEstimatesForSampleType:(id)arg1 effectiveDate:(id)arg2 completion:(id /* block */)arg3;
- (id)remoteInterface;
- (void)resetAllObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(id /* block */)arg3;
- (void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)resetAuthorizationStatusesForObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 sessionIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 completion:(id /* block */)arg4;
- (bool)validateRecalibrateEstimatesRequestRecord:(id)arg1 error:(id*)arg2;

@end
