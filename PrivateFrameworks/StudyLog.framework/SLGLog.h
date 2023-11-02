
@interface SLGLog : NSObject <SLGLogClientProtocolDelegate, SLGLogging> {
    <SLGLogClientProtocol> * _client;
    NSDateFormatter * _dateFormatter;
    bool  _isEnabled;
    NSObject<OS_dispatch_queue> * _observerCalloutQueue;
    NSObject<OS_dispatch_queue> * _observerLockQueue;
    NSHashTable * _observers;
    NSNumber * _pid;
    NSString * _processName;
    <SLGDomainWhitelisting> * _whitelist;
}

@property (nonatomic) bool allowUnspecifiedDomains;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *whitelistedDomains;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_fetchProcessInfo;
- (id)_serializeObjectAsLogEntry:(id)arg1 domain:(id)arg2 tags:(id)arg3 error:(id*)arg4;
- (void)_setClient:(id)arg1;
- (id)_wrapObjectWithEntryMetadata:(id)arg1 domain:(id)arg2 tags:(id)arg3;
- (void)addDomainToWhitelist:(id)arg1;
- (void)addObserver:(id)arg1;
- (bool)allowUnspecifiedDomains;
- (void)beginSession;
- (void)beginSessionWithCompletion:(id /* block */)arg1;
- (void)client:(id)arg1 didReceiveInitialLogMessageFromDomain:(id)arg2;
- (void)clientDidReceiveServerReset:(id)arg1;
- (void)endSession;
- (void)endSessionAndRenameFileTo:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithClient:(id)arg1 whitelist:(id)arg2 enabled:(bool)arg3;
- (bool)isEnabled;
- (void)log:(id)arg1;
- (void)log:(id)arg1 completion:(id /* block */)arg2;
- (void)log:(id)arg1 domain:(id)arg2;
- (void)log:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)log:(id)arg1 domain:(id)arg2 tags:(id)arg3;
- (void)log:(id)arg1 domain:(id)arg2 tags:(id)arg3 completion:(id /* block */)arg4;
- (void)log:(id)arg1 tags:(id)arg2;
- (void)log:(id)arg1 tags:(id)arg2 completion:(id /* block */)arg3;
- (void)logBlock:(id /* block */)arg1;
- (void)logBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)logBlock:(id /* block */)arg1 domain:(id)arg2;
- (void)logBlock:(id /* block */)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)logBlock:(id /* block */)arg1 domain:(id)arg2 tags:(id /* block */)arg3;
- (void)logBlock:(id /* block */)arg1 domain:(id)arg2 tags:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)logBlock:(id /* block */)arg1 tags:(id /* block */)arg2;
- (void)logBlock:(id /* block */)arg1 tags:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)removeDomainFromWhitelist:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)reset;
- (void)reset:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)resetWithCompletion:(id /* block */)arg1;
- (void)setAllowUnspecifiedDomains:(bool)arg1;
- (id)whitelistedDomains;

@end
