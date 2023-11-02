
@interface SOKerberosAgentContext : NSObject {
    bool  _authRequestPending;
    SOAuthorizationWrapper * _authWrapper;
    NSOperationQueue * _contextKerberosWorkQueue;
    NSOperationQueue * _contextNetworkWorkQueue;
    bool  _discoveryInProgress;
    SOKerberosExtensionData * _extensionData;
    SONetworkIdentity * _identity;
    SOAuthorizationWrapper * _passwordChangeAuthWrapper;
    SOAuthorizationWrapper * _passwordSyncAuthWrapper;
    SOFullProfile * _profile;
    SOAuthorizationWrapper * _receivedTGTAuthWrapper;
    SOKerberosRealmSettings * _settings;
    SOADSiteDiscovery * _siteDiscovery;
}

@property bool authRequestPending;
@property (retain) SOAuthorizationWrapper *authWrapper;
@property (readonly) NSOperationQueue *contextKerberosWorkQueue;
@property (readonly) NSOperationQueue *contextNetworkWorkQueue;
@property bool discoveryInProgress;
@property (retain) SOKerberosExtensionData *extensionData;
@property (retain) SONetworkIdentity *identity;
@property (retain) SOAuthorizationWrapper *passwordChangeAuthWrapper;
@property (retain) SOAuthorizationWrapper *passwordSyncAuthWrapper;
@property (retain) SOFullProfile *profile;
@property (retain) SOAuthorizationWrapper *receivedTGTAuthWrapper;
@property (retain) SOKerberosRealmSettings *settings;
@property (retain) SOADSiteDiscovery *siteDiscovery;

- (void).cxx_destruct;
- (bool)authRequestPending;
- (id)authWrapper;
- (id)contextKerberosWorkQueue;
- (id)contextNetworkWorkQueue;
- (bool)discoveryInProgress;
- (id)extensionData;
- (id)identity;
- (id)initWithProfile:(id)arg1;
- (id)passwordChangeAuthWrapper;
- (id)passwordSyncAuthWrapper;
- (id)profile;
- (id)receivedTGTAuthWrapper;
- (void)setAuthRequestPending:(bool)arg1;
- (void)setAuthWrapper:(id)arg1;
- (void)setDiscoveryInProgress:(bool)arg1;
- (void)setExtensionData:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setPasswordChangeAuthWrapper:(id)arg1;
- (void)setPasswordSyncAuthWrapper:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setReceivedTGTAuthWrapper:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSiteDiscovery:(id)arg1;
- (id)settings;
- (id)siteDiscovery;

@end
