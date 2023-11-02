
@interface ACHAwardsKeyValueServer : HDStandardTaskServer <ACHAwardsKeyValueServerInterface> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _domainLock;
    NSMutableDictionary * _domainsByName;
    HDKeyValueDomain * _legacyDomain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *domainsByName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDKeyValueDomain *legacyDomain;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)_domainForName:(id)arg1;
- (id)_transactionContextForWritingProtectedDataWithIdentifier:(id)arg1;
- (id)domainsByName;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)legacyDomain;
- (id)remoteInterface;
- (void)remote_protectedDataAvailableWithCompletion:(id /* block */)arg1;
- (void)remote_removeValuesForKeys:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_removeValuesForKeysInDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setLegacyValuesWithDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_setValuesWithDictionary:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setValuesWithDomainDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_valueForKey:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_valuesForKeys:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)setDomainsByName:(id)arg1;
- (void)setLegacyDomain:(id)arg1;

@end
