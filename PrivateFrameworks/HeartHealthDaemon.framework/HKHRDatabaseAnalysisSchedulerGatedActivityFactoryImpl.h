
@interface HKHRDatabaseAnalysisSchedulerGatedActivityFactoryImpl : NSObject <HKHRDatabaseAnalysisSchedulerGatedActivityFactory> {
    NSString * _identifier;
    NSObject<OS_os_log> * _loggingCategory;
}

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 loggingCategory:(id)arg2;
- (id)makeGatedActivityWithHandler:(id /* block */)arg1;

@end
