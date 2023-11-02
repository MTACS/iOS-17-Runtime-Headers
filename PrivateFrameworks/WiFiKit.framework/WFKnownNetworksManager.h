
@interface WFKnownNetworksManager : NSObject <WFKnownNetworksProvider> {
    NSArray * _allKnownProfiles;
    CWFInterface * _interface;
    WFPrivateAddressConfigManager * _privateAddressConfigManager;
}

@property (nonatomic, retain) NSArray *allKnownProfiles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CWFInterface *interface;
@property (nonatomic, retain) WFPrivateAddressConfigManager *privateAddressConfigManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getAllKnownProfiles;
- (id)allEditableNetworkProfiles;
- (id)allKnownProfiles;
- (id)allNonEditableNetworkProfiles;
- (id)initWithInterface:(id)arg1;
- (id)interface;
- (id)passwordForNetworksWithSSID:(id)arg1;
- (id)privateAddressConfigForNetworkName:(id)arg1;
- (id)privateAddressConfigManager;
- (bool)removeNetworks:(id)arg1;
- (void)setAllKnownProfiles:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setPrivateAddressConfigManager:(id)arg1;

@end
