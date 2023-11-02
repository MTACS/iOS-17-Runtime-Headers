
@protocol DDSMobileAssetv2ProviderDataSource <NSObject>

@required

- (long long)linguisticAssetCompatabilityVersion;
- (MAAssetQuery *)maAssetQueryForDDSAssetQuery:(DDSAssetQuery *)arg1 compatabilityVersion:(long long)arg2 platformVersion:(NSString *)arg3 internalInstall:(bool)arg4;
- (long long)mecabraDictionaryRapidUpdatesAssetCompatabilityVersion;

@end
