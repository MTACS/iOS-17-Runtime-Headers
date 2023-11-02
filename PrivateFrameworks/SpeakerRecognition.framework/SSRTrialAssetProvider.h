
@interface SSRTrialAssetProvider : NSObject <SSRAssetProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)getAssetProviderType;
- (id)init;
- (id)installedAssetOfType:(unsigned long long)arg1 forLanguageCode:(id)arg2;
- (void)reloadForLocale:(id)arg1;

@end
