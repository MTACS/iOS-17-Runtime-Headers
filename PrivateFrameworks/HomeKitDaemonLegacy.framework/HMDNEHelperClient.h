
@interface HMDNEHelperClient : NSObject <HMDNEHelperClient, HMFLogging> {
    NSArray * _cachedEntries;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addIdentifiers:(id)arg1 signingId:(id)arg2;
- (id)_signingIdentifierWithProcessId:(id)arg1;
- (void)cacheClearUUIDs;
- (id)cacheCopyAppUUIDForSigningIdentifier:(id)arg1 executablePath:(id)arg2;
- (id)cacheCopySigningIdentifierForProcessIdentifier:(id)arg1;
- (id)init;

@end
