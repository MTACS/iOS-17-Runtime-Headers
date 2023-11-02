
@interface PSUINetworkSlicingController : PSListController {
    PSUICoreTelephonyCapabilitiesCache * _capabilityCache;
    bool  _networkSlicingOn;
}

@property (nonatomic, retain) PSUICoreTelephonyCapabilitiesCache *capabilityCache;
@property (nonatomic) bool networkSlicingOn;

- (void).cxx_destruct;
- (void)_enableNetworkSlicing:(bool)arg1;
- (id)capabilityCache;
- (id)getLogger;
- (id)getNetworkSlicingAppCategory:(id)arg1;
- (id)init;
- (id)initWithCapabilityCache:(id)arg1;
- (bool)networkSlicingOn;
- (void)setCapabilityCache:(id)arg1;
- (void)setNetworkSlicingAppCategory:(id)arg1 specifier:(id)arg2;
- (void)setNetworkSlicingOn:(bool)arg1;
- (id)specifiers;

@end
