
@interface ACHDatabaseAssertionClient : NSObject <_HKXPCExportable> {
    NSUUID * _identifier;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)acquireDatabaseAssertionWithIdentifier:(id)arg1 duration:(double)arg2 error:(id*)arg3;
- (id)acquireDatabaseAssertionWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)identifier;
- (id)initWithHealthStore:(id)arg1;
- (bool)invalidateAssertionWithToken:(id)arg1 error:(id*)arg2;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setIdentifier:(id)arg1;
- (void)setProxyProvider:(id)arg1;

@end
