
@interface SHManagedSessionCustomCatalogDriver : NSObject <SHSessionDriver> {
    SHManagedSessionCustomCatalogDriverDaemonDelegate * _daemonDelegate;
    <SHMatcher><SHMatcherDelegate> * _serviceConnection;
}

@property (nonatomic, readonly) SHManagedSessionCustomCatalogDriverDaemonDelegate *daemonDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *matchingSignatureID;
@property (nonatomic, readonly) <SHMatcher><SHMatcherDelegate> *serviceConnection;
@property (nonatomic) <SHSessionDriverDelegate> *sessionDriverDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)daemonDelegate;
- (void)flow:(id)arg1 time:(id)arg2;
- (id)initWithServiceConnection:(id)arg1;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;
- (id)matchingSignatureID;
- (id)serviceConnection;
- (id)sessionDriverDelegate;
- (void)setSessionDriverDelegate:(id)arg1;

@end
