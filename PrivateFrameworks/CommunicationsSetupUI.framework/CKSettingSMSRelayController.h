
@interface CKSettingSMSRelayController : PSListController <IDSServiceDelegate> {
    IDSService * _relayService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *relayService;
@property (readonly) Class superclass;

+ (id)authorizedSMSRelayDevices;
+ (bool)deviceIsAuthorized:(id)arg1;
+ (bool)isDeviceUsingMiCWithIdentifier:(id)arg1;
+ (id)micSMSRelayDevices;
+ (unsigned long long)numberOfActiveDevices;
+ (bool)shouldShowSMSRelaySettings;

- (void).cxx_destruct;
- (id)_footerSpecifierForSMSRelayGroup;
- (id)_headerSpecifierForMicGroup;
- (id)_headerSpecifierForNonMicGroupDisplayingHeader:(bool)arg1;
- (id)_specifiersForDevices:(id)arg1 cellType:(long long)arg2 get:(SEL)arg3;
- (void)dealloc;
- (id)getDeviceActive:(id)arg1;
- (id)getDeviceOn:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isDeviceUsingMiCWithIdentifier:(id)arg1;
- (bool)isMiCEnabled;
- (id)relayService;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setDeviceActive:(id)arg1 specifier:(id)arg2;
- (void)setRelayService:(id)arg1;
- (id)specifiers;
- (void)systemApplicationWillEnterForeground;
- (void)viewWillAppear:(bool)arg1;

@end
