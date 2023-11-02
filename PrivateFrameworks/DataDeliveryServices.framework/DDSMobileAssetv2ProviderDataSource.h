
@interface DDSMobileAssetv2ProviderDataSource : NSObject <DDSMobileAssetv2ProviderDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long linguisticAssetCompatabilityVersion;
@property (readonly) long long mecabraDictionaryRapidUpdatesAssetCompatabilityVersion;
@property (readonly) Class superclass;

- (long long)compatabilityVersionFromFileWithName:(id)arg1;
- (long long)linguisticAssetCompatabilityVersion;
- (id)maAssetQueryForDDSAssetQuery:(id)arg1 compatabilityVersion:(long long)arg2 platformVersion:(id)arg3 internalInstall:(bool)arg4;
- (long long)mecabraDictionaryRapidUpdatesAssetCompatabilityVersion;

@end
