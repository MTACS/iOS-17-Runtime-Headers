
@interface ACHDatabaseAssertionServer : HDStandardTaskServer <ACHDatabaseAssertionServerInterface> {
    NSMutableDictionary * _assertionByToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *assertionByToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_queue_cleanup;
- (id)assertionByToken;
- (void)dealloc;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)queue;
- (id)remoteInterface;
- (void)remote_acquireDatabaseAssertionWithIdentifier:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)remote_invalidateAssertionWithToken:(id)arg1 completion:(id /* block */)arg2;
- (void)setAssertionByToken:(id)arg1;
- (void)setQueue:(id)arg1;

@end
