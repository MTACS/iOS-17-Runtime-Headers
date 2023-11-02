
@interface SSUInstalledAppProviderSandbox : NSObject <SSUInstalledAppProvider> {
    NSURL * _directory;
    NSString * _locale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *directory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *locale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)directory;
- (id)initWithDirectory:(id)arg1 locale:(id)arg2;
- (id)locale;
- (id)lookupAllSSUEnabledApps;
- (id)lookupSSUEnabledAppByBundleId:(id)arg1;

@end
