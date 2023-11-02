
@interface CNUIDataCollector : NSObject {
    NSString * _appIdentifier;
    CNMetricsUIReporter * _metricsReporter;
    CNUIDataCollectorSGLogger * _sgLogger;
}

@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) CNMetricsUIReporter *metricsReporter;
@property (nonatomic, readonly) CNUIDataCollectorSGLogger *sgLogger;

+ (bool)isEnabled;
+ (id)sharedCollector;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (void)logContactActionType:(id)arg1 attributes:(id)arg2;
- (void)logContactCreated:(id)arg1 originalContact:(id)arg2;
- (void)logContactShown:(id)arg1;
- (void)logPresentation;
- (void)logSearchResultSelected:(id)arg1;
- (void)logSearchResultsFetchedSuggested:(bool)arg1;
- (void)logSearchUsage;
- (id)metricsReporter;
- (id)sgLogger;

@end
