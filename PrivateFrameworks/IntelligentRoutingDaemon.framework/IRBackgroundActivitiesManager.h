
@interface IRBackgroundActivitiesManager : NSObject {
    IRAnalyticsManager * _analyticsManager;
    IRCleanupManager * _cleanupManager;
    IRMobileAssetManager * _mobileAssetManager;
    IRSessionServer * _server;
    int  _userDefaultsRefreshToken;
}

@property (nonatomic, retain) IRAnalyticsManager *analyticsManager;
@property (nonatomic, retain) IRCleanupManager *cleanupManager;
@property (nonatomic, retain) IRMobileAssetManager *mobileAssetManager;
@property (nonatomic) IRSessionServer *server;
@property (nonatomic) int userDefaultsRefreshToken;

- (void).cxx_destruct;
- (id)analyticsManager;
- (id)cleanupManager;
- (id)initWithServer:(id)arg1;
- (id)mobileAssetManager;
- (void)registerForRepeatingBackgroundXPCActivityWithIdentifier:(id)arg1 interval:(long long)arg2 isDiskIntensive:(bool)arg3 isMemoryIntensive:(bool)arg4 handler:(id /* block */)arg5;
- (id)server;
- (void)setAnalyticsManager:(id)arg1;
- (void)setCleanupManager:(id)arg1;
- (void)setMobileAssetManager:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setUserDefaultsRefreshToken:(int)arg1;
- (int)userDefaultsRefreshToken;

@end
