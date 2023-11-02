
@interface SSUSystemState : NSObject {
    NSObject<SSUCacheDirectoryProvider> * _cacheDirectoryProvider;
    NSObject<SSUInstalledAppProvider> * _installedAppProvider;
}

@property (nonatomic, readonly) NSObject<SSUCacheDirectoryProvider> *cacheDirectoryProvider;
@property (nonatomic, readonly) NSObject<SSUInstalledAppProvider> *installedAppProvider;

- (void).cxx_destruct;
- (id)cacheDirectoryProvider;
- (id)initWithCacheDirectoryProvider:(id)arg1 installedAppProvider:(id)arg2;
- (id)initWithCacheDirectoryProviderDevice:(id)arg1 installedAppProviderDevice:(id)arg2;
- (id)initWithCacheDirectoryProviderSandbox:(id)arg1 installedAppProviderSandbox:(id)arg2;
- (id)initWithCacheDirectoryProviderTemporary:(id)arg1 installedAppProviderSandbox:(id)arg2;
- (id)installedAppProvider;

@end
