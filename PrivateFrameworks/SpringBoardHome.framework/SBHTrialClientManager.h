
@interface SBHTrialClientManager : NSObject {
    NSString * _homeScreenNamespace;
    TRIClient * _trialClient;
}

@property (nonatomic, retain) NSString *homeScreenNamespace;
@property (nonatomic, retain) TRIClient *trialClient;

- (void).cxx_destruct;
- (id)homeScreenNamespace;
- (void)immediatelyFetchSpringBoardHomeNamespace;
- (id)init;
- (void)setHomeScreenNamespace:(id)arg1;
- (void)setTrialClient:(id)arg1;
- (id)trialClient;
- (bool)widgetDiscoverabilityGoSwitchEnabled;

@end
