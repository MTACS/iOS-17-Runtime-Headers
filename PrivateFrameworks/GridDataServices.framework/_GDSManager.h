
@interface _GDSManager : NSObject {
    NSString * _clientID;
    NSXPCConnection * _connection;
    NSDictionary * _currentMarginalForecast;
    NSString * _locBundlePath;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSString *clientID;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSDictionary *currentMarginalForecast;
@property (nonatomic, retain) NSString *locBundlePath;
@property (nonatomic, retain) NSObject<OS_os_log> *log;

+ (id)managerWithID:(id)arg1 locationBundlePath:(id)arg2;

- (void).cxx_destruct;
- (id)carbonIntensityHistoryForBA:(id)arg1 from:(id)arg2 to:(id)arg3;
- (id)clientID;
- (id)connection;
- (id)currentMarginalForecast;
- (void)dealloc;
- (void)fixMarginalEmissionForecast:(id)arg1;
- (id)getFakeMarginalEmissionForecast;
- (id)init;
- (id)initWithID:(id)arg1 locationBundlePath:(id)arg2;
- (id)latestBalancingAuthority;
- (id)latestBalancingAuthorityWithError:(id*)arg1;
- (id)latestMarginalEmissionForecast;
- (id)locBundlePath;
- (id)log;
- (void)registerClientID:(id)arg1 locationBundlePath:(id)arg2;
- (void)setClientID:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setCurrentMarginalForecast:(id)arg1;
- (void)setFakeConfigURL:(id)arg1;
- (void)setFakeSecret:(id)arg1;
- (void)setFakeSecretVersion:(id)arg1;
- (void)setFakeServerURL:(id)arg1;
- (void)setLocBundlePath:(id)arg1;
- (void)setLog:(id)arg1;
- (void)triggerBAUpdateWithHandler:(id /* block */)arg1;
- (void)unFixMarginalEmissionForecast;
- (void)unSetFakeConfigURL;
- (void)unSetFakeSecret;
- (void)unSetFakeSecretVersion;
- (void)unSetFakeServerURL;

@end
