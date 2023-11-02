
@interface CKDPDSClient : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    PDSRegistrar * _registrar;
    NSMutableDictionary * _registrationsByDSID;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) PDSRegistrar *registrar;
@property (nonatomic, readonly) NSMutableDictionary *registrationsByDSID;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)_expungeStaleDSIDs;
- (BOOL)_pdsPushEnvironmentFromAPSEnvironmentString:(id)arg1;
- (id)_pdsQualifierFromContainerID:(id)arg1;
- (id)_pdsTopicFromBundleIdentifier:(id)arg1 withContainerID:(id)arg2;
- (id)_registrationForAppContainerAccountTuple:(id)arg1 pushBundleIdentifier:(id)arg2 pdsPushEnvironment:(BOOL)arg3;
- (id)_registrationForContainer:(id)arg1;
- (bool)_unregisterRegistration:(id)arg1 forDSID:(id)arg2 outError:(id*)arg3;
- (bool)ensureRegistrationForContainer:(id)arg1 outError:(id*)arg2;
- (id)initInternal;
- (id)inlock_registrar;
- (id)inlock_registrationsForDSID:(id)arg1;
- (id)queue;
- (id)registrar;
- (id)registrationsByDSID;
- (void)unregisterAllTokens;
- (bool)unregisterAllTokensForAccountID:(id)arg1 outError:(id*)arg2;
- (bool)unregisterTokenForContainer:(id)arg1 outError:(id*)arg2;

@end
