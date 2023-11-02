
@interface HDDeviceKeyValueStoreManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKObserverSet * _observers;
    HDProfile * _profile;
}

@property (nonatomic) HDProfile *profile;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (bool)deleteProtectedKVEntriesForDeviceContext:(id)arg1 error:(id*)arg2;
- (bool)enumerateAllEntriesForSyncIdentity:(id)arg1 protectionCategory:(long long)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
- (id)fetchEntriesForDomain:(id)arg1 key:(id)arg2 protectionCategory:(long long)arg3 error:(id*)arg4;
- (id)fetchEntryForKey:(id)arg1 domain:(id)arg2 syncIdentity:(id)arg3 category:(long long)arg4 error:(id*)arg5;
- (id)initWithProfile:(id)arg1;
- (bool)insertOrUpdateData:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 domainName:(id)arg4 protectionCategory:(long long)arg5 deviceContext:(id)arg6 modificationDate:(id)arg7 error:(id*)arg8;
- (id)mostRecentEntryForDomain:(id)arg1 key:(id)arg2 protectionCategory:(long long)arg3 error:(id*)arg4;
- (id)profile;
- (void)removeObserver:(id)arg1;
- (bool)replaceOldSyncIdentity:(id)arg1 newSyncIdentity:(id)arg2 error:(id*)arg3;
- (bool)setData:(id)arg1 forKey:(id)arg2 domainName:(id)arg3 protectionCategory:(long long)arg4 deviceContext:(id)arg5 modificationDate:(id)arg6 error:(id*)arg7;
- (bool)setData:(id)arg1 forKey:(id)arg2 domainName:(id)arg3 protectionCategory:(long long)arg4 error:(id*)arg5;
- (bool)setDate:(id)arg1 forKey:(id)arg2 domainName:(id)arg3 protectionCategory:(long long)arg4 error:(id*)arg5;
- (bool)setNumber:(id)arg1 forKey:(id)arg2 domainName:(id)arg3 protectionCategory:(long long)arg4 error:(id*)arg5;
- (void)setProfile:(id)arg1;
- (bool)setString:(id)arg1 forKey:(id)arg2 domainName:(id)arg3 protectionCategory:(long long)arg4 error:(id*)arg5;

@end
