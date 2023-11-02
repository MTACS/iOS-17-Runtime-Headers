
@interface SSUInstalledAppProviderDevice : NSObject <SSUInstalledAppProvider> {
    NSString * _locale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *locale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationInfoFromAppRecord:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)locale;
- (id)lookupAllSSUEnabledApps;
- (id)lookupSSUEnabledAppByBundleId:(id)arg1;

@end
