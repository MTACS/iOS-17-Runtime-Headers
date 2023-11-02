
@interface HKNotificationStore : NSObject <HKNotificationStoreClient, _HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchBadgeForDomain:(long long)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (void)postCompanionUserNotificationOfType:(long long)arg1 completion:(id /* block */)arg2;
- (void)postNotificationWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(id /* block */)arg3;

@end
