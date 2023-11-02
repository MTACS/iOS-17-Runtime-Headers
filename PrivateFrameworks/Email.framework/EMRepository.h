
@interface EMRepository : NSObject {
    EMRemoteConnection * _connection;
    Protocol * _interfaceProtocol;
    <EFScheduler> * _observerScheduler;
}

@property (readonly) EMRemoteConnection *connection;
@property (readonly) Protocol *interfaceProtocol;
@property (nonatomic, retain) <EFScheduler> *observerScheduler;

+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)connection;
- (id)initForTesting;
- (id)initWithRemoteConnection:(id)arg1;
- (id)interfaceProtocol;
- (id)observerScheduler;
- (id)performQuery:(id)arg1 withObserver:(id)arg2;
- (void)prepareRepositoryObjects:(id)arg1;
- (void)refreshQueryWithObserver:(id)arg1;
- (void)setObserverScheduler:(id)arg1;
- (id)trampoliningObserverForObserver:(id)arg1;

@end
