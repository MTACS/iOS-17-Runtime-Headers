
@interface PFLForegroundSession : NSObject <PFLResumable, PFLTaskDelegate> {
    <PFLDataSource> * _dataSource;
    <PFLForegroundSessionDelegate> * _delegate;
    NSDictionary * _identifierTodataSource;
    bool  _ignoreEligibilityCheck;
    PFLNetworkResourceManager * _resourceManager;
    NSMutableSet * _runningTasks;
}

@property (nonatomic, readonly) <PFLDataSource> *dataSource;
@property <PFLForegroundSessionDelegate> *delegate;
@property (nonatomic, readonly) NSDictionary *identifierTodataSource;
@property (nonatomic, readonly) bool ignoreEligibilityCheck;
@property (nonatomic, readonly) PFLNetworkResourceManager *resourceManager;
@property (nonatomic, readonly) NSMutableSet *runningTasks;

- (void).cxx_destruct;
- (void)_finish;
- (id)dataSource;
- (id)delegate;
- (id)identifierTodataSource;
- (bool)ignoreEligibilityCheck;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 networkResourceManager:(id)arg2 ignoreEligibilityCheck:(bool)arg3;
- (id)initWithNetworkResourceManager:(id)arg1 dataSource:(id)arg2;
- (bool)isEligibleWithEligibilityIdentifier:(id)arg1 eligibilityProbability:(id)arg2;
- (void)removeUnusedResourcesWithConfiguration:(id)arg1;
- (id)resourceManager;
- (void)resume;
- (id)runningTasks;
- (void)setDelegate:(id)arg1;
- (void)suspend;
- (void)task:(id)arg1 didProgressToState:(unsigned long long)arg2 withError:(id)arg3;

@end
