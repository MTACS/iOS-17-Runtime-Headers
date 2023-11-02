
@interface NEVPNConnection : NSObject {
    NEConfigurationManager * _configManager;
    NSString * _configurationName;
    NSDate * _connectedDate;
    bool  _initialized;
    bool  _installNotify;
    bool  _installed;
    NSError * _lastDisconnectError;
    NSObject<OS_dispatch_queue> * _queue;
    void * _session;
    int  _sessionType;
    long long  _status;
    NEVPNManager * _weakmanager;
}

@property (readonly) NSDate *connectedDate;
@property (nonatomic) bool installNotify;
@property (nonatomic) bool installed;
@property (readonly) NSError *lastDisconnectError;
@property (readonly) NEVPNManager *manager;
@property (readonly) long long status;

+ (id)createConnectionForEnabledEnterpriseConfiguration;
+ (id)createConnectionForEnabledEnterpriseConfigurationWithName:(id)arg1;
+ (id)createDisconnectErrorWithDomain:(id)arg1 code:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)connectedDate;
- (void)dealloc;
- (void)fetchExtendedStatusWithCompletionHandler:(id /* block */)arg1;
- (void)fetchLastDisconnectErrorWithCompletionHandler:(id /* block */)arg1;
- (void)fetchStatisticsWithCompletionHandler:(id /* block */)arg1;
- (bool)installNotify;
- (bool)installed;
- (id)lastDisconnectError;
- (id)manager;
- (void)setInstallNotify:(bool)arg1;
- (void)setInstalled:(bool)arg1;
- (bool)startVPNTunnelAndReturnError:(id*)arg1;
- (bool)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2;
- (long long)status;
- (void)stopVPNTunnel;

@end
