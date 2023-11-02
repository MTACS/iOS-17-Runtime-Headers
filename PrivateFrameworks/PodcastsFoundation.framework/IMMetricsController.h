
@interface IMMetricsController : NSObject <IMMetricsControllerProtocol> {
    bool  _isLoading;
    AMSMetrics * _metricsController;
    bool  _shouldIgnoreDNU;
    bool  _shouldSuppressUserInfo;
    NSString * _topic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLoading;
@property (nonatomic, retain) AMSMetrics *metricsController;
@property (nonatomic) bool shouldIgnoreDNU;
@property (nonatomic) bool shouldSuppressUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *topic;

+ (id)queue;

- (void).cxx_destruct;
- (void)addAdditionalFieldsToEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)flushImmediately;
- (void)getMetricsController:(id /* block */)arg1;
- (id)initWithTopic:(id)arg1;
- (bool)isLoading;
- (id)metricsController;
- (void)recordEvent:(id)arg1;
- (void)setIsLoading:(bool)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setShouldIgnoreDNU:(bool)arg1;
- (void)setShouldSuppressUserInfo:(bool)arg1;
- (void)setTopic:(id)arg1;
- (bool)shouldIgnoreDNU;
- (bool)shouldSuppressUserInfo;
- (id)topic;

@end
