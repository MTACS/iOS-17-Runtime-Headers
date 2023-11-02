
@interface StocksCore.NewsConfigurationManager : NSObject <FCCoreConfigurationManager, FCNewsAppConfigurationManager> {
    void appConfigObservers;
    void appConfigurationManager;
    void configLock;
    void coreConfigObservers;
    void lastKnownAppConfig;
    void lastKnownNewsConfig;
}

@property (nonatomic, readonly) <FCNewsAppConfiguration> *appConfiguration;
@property (nonatomic, readonly) <FCCoreConfiguration> *configuration;
@property (nonatomic, readonly) <FCNewsAppConfiguration> *possiblyUnfetchedAppConfiguration;
@property (nonatomic, readonly) NSArray *segmentSetIDs;
@property (nonatomic, readonly) NSArray *treatmentIDs;

- (void).cxx_destruct;
- (void)addAppConfigObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)appConfiguration;
- (id)configuration;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchConfigurationIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)possiblyUnfetchedAppConfiguration;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(id /* block */)arg2;
- (void)removeAppConfigObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)segmentSetIDs;
- (id)treatmentIDs;

@end
