
@protocol WBSSearchProviderContext <NSObject>

@required

- (NSDictionary *)carrierTemplateParameterValues;
- (NSString *)countryCode;
- (<WBSSearchProvider> *)defaultSeachProviderForPrivateBrowsing;
- (<WBSSearchProvider> *)defaultSearchProvider;
- (long long)deviceType;
- (bool)isChinaDevice;
- (bool)isSearchProviderEnabled:(unsigned long long)arg1;
- (NSString *)systemLanguage;
- (NSDictionary *)templateParameterValues;

@end
