
@interface CLBackgroundActivitySession : NSObject <CLIdentifiableClientProtocol> {
    void * _locationdConnection;
    bool  _shouldBeRunning;
    CLDispatchSilo * _silo;
    NSString * identityToken;
    CLLocationManager * manager;
    NSData * storageToken;
    id /* block */  weakClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identityToken;
@property (nonatomic, retain) CLLocationManager *manager;
@property bool shouldBeRunning;
@property (nonatomic, retain) NSData *storageToken;
@property (readonly) Class superclass;
@property (nonatomic) id /* block */ weakClient;

+ (id)backgroundActivitySession;
+ (id)backgroundActivitySessionWithLocationManager:(id)arg1;

- (void)cleanup;
- (void)createConnection;
- (void)dealloc;
- (void)destroyConnection;
- (id)identityToken;
- (id)initWithLocationManager:(id)arg1;
- (void)invalidate;
- (void)manageConnection;
- (id)manager;
- (void)setIdentityToken:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setShouldBeRunning:(bool)arg1;
- (void)setStorageToken:(id)arg1;
- (void)setWeakClient:(id /* block */)arg1;
- (bool)shouldBeRunning;
- (id)storageToken;
- (void)updateIdentityToken:(id)arg1 withStorageToken:(id)arg2;
- (id /* block */)weakClient;

@end
