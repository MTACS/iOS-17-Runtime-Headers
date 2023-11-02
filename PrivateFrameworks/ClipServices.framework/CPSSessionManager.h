
@interface CPSSessionManager : NSObject {
    <CPSAppInfoFetching> * _appInfoFetcher;
    <CPSBusinessItemFetching> * _businessItemFetcher;
    CPSInstallationController * _clipInstaller;
    <CPSLegacyAppInstalling> * _legacyInstaller;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessions;
}

@property (nonatomic, readonly) NSArray *allSessions;
@property (nonatomic, readonly) <CPSAppInfoFetching> *appInfoFetcher;
@property (nonatomic, readonly) <CPSBusinessItemFetching> *businessItemFetcher;
@property (nonatomic, readonly) CPSInstallationController *clipInstaller;
@property (nonatomic, retain) <CPSLegacyAppInstalling> *legacyInstaller;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_handleMemoryPressure:(unsigned long long)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_setUpMemoryPressureHandler;
- (id)allSessions;
- (id)appInfoFetcher;
- (id)businessItemFetcher;
- (void)clearSessionWithURL:(id)arg1;
- (id)clipInstaller;
- (void)getSessionWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)getSessionWithURL:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)handleManagedConfigurationChanged;
- (id)init;
- (id)legacyInstaller;
- (id)sessionWithURL:(id)arg1 createIfNoExist:(bool)arg2;
- (void)setLegacyInstaller:(id)arg1;

@end
