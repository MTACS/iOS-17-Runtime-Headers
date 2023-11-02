
@interface PKProvisioningContext : NSObject {
    long long  _environment;
    PKGroupsController * _groupsController;
    NSString * _hostApplicationBundleIdentifier;
    bool  _isBackground;
    bool  _isFollowupProvisioning;
    bool  _isFollowupSetupAssistant;
    long long  _mode;
    PKPeerPaymentWebService * _peerPaymentWebService;
    PKPaymentProvisioningController * _provisioningController;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly) long long environment;
@property (nonatomic) PKGroupsController *groupsController;
@property (nonatomic, copy) NSString *hostApplicationBundleIdentifier;
@property (nonatomic) bool isBackground;
@property (nonatomic) bool isFollowupProvisioning;
@property (nonatomic) bool isFollowupSetupAssistant;
@property (nonatomic) long long mode;
@property (nonatomic, retain) PKPeerPaymentWebService *peerPaymentWebService;
@property (nonatomic, readonly) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, copy) NSString *teamIdentifier;

- (void).cxx_destruct;
- (long long)environment;
- (id)groupsController;
- (id)hostApplicationBundleIdentifier;
- (id)initWithEnvironment:(long long)arg1 provisioningController:(id)arg2 groupsController:(id)arg3;
- (bool)isBackground;
- (bool)isFollowupProvisioning;
- (bool)isFollowupSetupAssistant;
- (long long)mode;
- (id)peerPaymentWebService;
- (id)provisioningController;
- (void)setGroupsController:(id)arg1;
- (void)setHostApplicationBundleIdentifier:(id)arg1;
- (void)setIsBackground:(bool)arg1;
- (void)setIsFollowupProvisioning:(bool)arg1;
- (void)setIsFollowupSetupAssistant:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setPeerPaymentWebService:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (id)teamIdentifier;

@end
