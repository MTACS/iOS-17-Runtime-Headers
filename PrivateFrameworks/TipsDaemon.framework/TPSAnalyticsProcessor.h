
@interface TPSAnalyticsProcessor : NSObject <TPSAnalyticsProcessing> {
    TPSAnalyticsEventController * _analyticsEventController;
    <TPSAnalyticsProcessorDataSource> * _dataSource;
    NSString * _dateLastRunKey;
    TPSDuetDataProvider * _duetDataProvider;
}

@property (nonatomic) <TPSAnalyticsProcessorDataSource> *dataSource;
@property (nonatomic, retain) NSDate *dateLastRun;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TPSDuetDataProvider *duetDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)loadValueForKey:(id)arg1 class:(Class)arg2;
+ (void)saveValue:(id)arg1 forKey:(id)arg2;

- (void).cxx_destruct;
- (id)dataSource;
- (id)dateLastRun;
- (id)duetDataProvider;
- (id)init;
- (void)processAnalytics:(id /* block */)arg1;
- (void)resetAnalytics;
- (void)setDataSource:(id)arg1;
- (void)setDateLastRun:(id)arg1;
- (void)setDuetDataProvider:(id)arg1;

@end
