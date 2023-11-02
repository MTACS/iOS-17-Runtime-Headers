
@interface NTTodayConfigConversionOperation : FCOperation {
    <FCCoreConfiguration> * _configuration;
    <FCContentContext> * _context;
    id /* block */  _defaultConfigCompletionHandler;
    NSError * _defaultConfigError;
    NSArray * _networkEvents;
    NTPBTodayConfig * _resultDefaultConfig;
    NSDictionary * _resultHeldRecordsByType;
    NTPBTodayConfig * _resultSingleTagConfig;
    id /* block */  _singleTagConfigCompletionHandler;
    NSError * _singleTagConfigError;
    NSDictionary * _widgetConfiguration;
}

@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ defaultConfigCompletionHandler;
@property (nonatomic, copy) NSError *defaultConfigError;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, copy) NTPBTodayConfig *resultDefaultConfig;
@property (nonatomic, retain) NSDictionary *resultHeldRecordsByType;
@property (nonatomic, copy) NTPBTodayConfig *resultSingleTagConfig;
@property (nonatomic, copy) id /* block */ singleTagConfigCompletionHandler;
@property (nonatomic, copy) NSError *singleTagConfigError;
@property (nonatomic, retain) NSDictionary *widgetConfiguration;

- (void).cxx_destruct;
- (void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3;
- (id)_todayConfigWithConfigJSON:(id)arg1 articleListIDs:(id)arg2 articleIDs:(id)arg3 error:(id*)arg4;
- (id)configuration;
- (id)context;
- (id /* block */)defaultConfigCompletionHandler;
- (id)defaultConfigError;
- (id)init;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultDefaultConfig;
- (id)resultHeldRecordsByType;
- (id)resultSingleTagConfig;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultConfigCompletionHandler:(id /* block */)arg1;
- (void)setDefaultConfigError:(id)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setResultDefaultConfig:(id)arg1;
- (void)setResultHeldRecordsByType:(id)arg1;
- (void)setResultSingleTagConfig:(id)arg1;
- (void)setSingleTagConfigCompletionHandler:(id /* block */)arg1;
- (void)setSingleTagConfigError:(id)arg1;
- (void)setWidgetConfiguration:(id)arg1;
- (id /* block */)singleTagConfigCompletionHandler;
- (id)singleTagConfigError;
- (bool)validateOperation;
- (id)widgetConfiguration;

@end
