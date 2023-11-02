
@interface PFLTaskContainer : NSObject <NSSecureCoding, PFLTaskStateProvider> {
    PFLTaskConfiguration * _configuration;
    <MLBatchProvider> * _dataProvider;
    <PFLTaskDelegate> * _delegate;
    NSString * _identifier;
    <PFLDataSource> * _metricsProvider;
    NSObject<OS_dispatch_queue> * _queue;
    PFLNetworkResourceManager * _resourceManager;
    <PFLTaskState> * _state;
}

@property (nonatomic, readonly) PFLTaskConfiguration *configuration;
@property (nonatomic, retain) <MLBatchProvider> *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PFLTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) <PFLDataSource> *metricsProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) PFLNetworkResourceManager *resourceManager;
@property (nonatomic, retain) <PFLTaskState> *state;
@property (readonly) Class superclass;

+ (id)descriptionFromState:(unsigned long long)arg1;
+ (id)loadFromSavedStateURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_saveState;
- (id)compiledModelURL;
- (id)configuration;
- (id)dataProvider;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2 state:(id)arg3;
- (id)layerNames;
- (void)markStateTransition:(id)arg1;
- (id)metricsIdentifier;
- (id)metricsProvider;
- (id)modelConfiguration;
- (id)modelIdentifier;
- (int)modelVersion;
- (unsigned long long)privatizationNormBinCount;
- (double)privatizationNormMax;
- (id)queue;
- (id)resourceManager;
- (void)resume;
- (void)setDataProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetricsProvider:(id)arg1;
- (void)setResourceManager:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (void)suspend;
- (id)taskIdentifier;
- (id)uploadResultsIdentifier;
- (double)validationSplit;

@end
