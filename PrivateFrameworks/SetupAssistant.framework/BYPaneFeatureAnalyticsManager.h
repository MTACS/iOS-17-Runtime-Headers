
@interface BYPaneFeatureAnalyticsManager : NSObject {
    BYAnalyticsManager * _analyticsManager;
    <BYExpressSetupDataSource> * _expressDataSource;
    NSArray * _expressSetupFeatures;
    <BYFlowItemDispositionProvider> * _flowItemDispositionProvider;
    NSString * _host;
    <BYRunState> * _runState;
}

@property (nonatomic, retain) BYAnalyticsManager *analyticsManager;
@property (nonatomic, retain) <BYExpressSetupDataSource> *expressDataSource;
@property (nonatomic, retain) NSArray *expressSetupFeatures;
@property (nonatomic, retain) <BYFlowItemDispositionProvider> *flowItemDispositionProvider;
@property (nonatomic, copy) NSString *host;
@property (nonatomic, retain) <BYRunState> *runState;

+ (id)_featureForPane:(long long)arg1;
+ (id)_nameForFeature:(long long)arg1;

- (void).cxx_destruct;
- (bool)_isFeatureForPaneIncludedInExpress:(long long)arg1;
- (id)_isValueDifferentFromExpressForFeature:(long long)arg1 value:(id)arg2;
- (id)analyticsManager;
- (void)clearActionForFeature:(long long)arg1;
- (id)expressDataSource;
- (id)expressSetupFeatures;
- (id)flowItemDispositionProvider;
- (id)host;
- (id)initWithAnalyticsManager:(id)arg1 runState:(id)arg2 host:(id)arg3 flowItemDispositionProvider:(id)arg4;
- (void)recordActionWithValue:(id)arg1 forFeature:(long long)arg2;
- (void)recordActionWithValue:(id)arg1 previousValue:(id)arg2 forFeature:(long long)arg3;
- (id)runState;
- (void)setAnalyticsManager:(id)arg1;
- (void)setExpressDataSource:(id)arg1;
- (void)setExpressDataSource:(id)arg1 features:(id)arg2;
- (void)setExpressSetupFeatures:(id)arg1;
- (void)setFlowItemDispositionProvider:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setRunState:(id)arg1;

@end
