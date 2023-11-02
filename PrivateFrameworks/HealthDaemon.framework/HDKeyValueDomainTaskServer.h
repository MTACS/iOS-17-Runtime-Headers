
@interface HDKeyValueDomainTaskServer : HDStandardTaskServer <HDKeyValueDomainObserver, HKKeyValueDomainServerInterface> {
    HDKeyValueDomain * _keyValueDomain;
}

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_unitTest_overrideKeyValueDomainCategory:(long long)arg1;
- (void)didUpdateKeyValueDomain:(id)arg1;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_allValuesWithCompletion:(id /* block */)arg1;
- (void)remote_dataForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_dateForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_numberForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_observeChanges:(bool)arg1 completion:(id /* block */)arg2;
- (void)remote_removeValuesForKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setData:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setDate:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setNumber:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setString:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setValueForAllKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setValuesWithDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_stringForKey:(id)arg1 completion:(id /* block */)arg2;

@end
