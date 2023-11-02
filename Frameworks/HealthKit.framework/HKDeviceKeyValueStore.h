
@interface HKDeviceKeyValueStore : NSObject <HKDeviceKeyValueStoreClientInterface, _HKXPCExportable> {
    <HKDeviceKeyValueStoreDelegate> * _delegate;
    NSString * _domain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _protectionCategory;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKDeviceKeyValueStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long protectionCategory;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)clientRemote_deviceKeyValueStoreDidUpdateForStorageGroup:(id)arg1;
- (void)connectionInvalidated;
- (id)delegate;
- (id)domain;
- (id)exportedInterface;
- (void)fetchEntriesForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithProtectionCategory:(long long)arg1 domain:(id)arg2 healthStore:(id)arg3;
- (void)mostRecentEntryForKey:(id)arg1 completion:(id /* block */)arg2;
- (long long)protectionCategory;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setData:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setDate:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setString:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)startObservingDeviceKeyValueStoreWithCompletion:(id /* block */)arg1;

@end
