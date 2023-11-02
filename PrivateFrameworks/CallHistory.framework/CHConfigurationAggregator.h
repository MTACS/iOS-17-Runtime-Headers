
@interface CHConfigurationAggregator : NSObject <CHConfigurationDelegate> {
    NSArray * _configurations;
    <CHConfigurationAggregatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isCloudKitEnabled, nonatomic, readonly) bool cloudKitEnabled;
@property (nonatomic, readonly, copy) NSArray *configurations;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CHConfigurationAggregatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configurations;
- (id)delegate;
- (id)initWithConfigurations:(id)arg1 queue:(id)arg2;
- (bool)isCloudKitEnabled;
- (void)propertiesDidChangeForConfiguration:(id)arg1;
- (id)queue;
- (void)registerConfigurationDelegate;
- (void)setDelegate:(id)arg1;

@end
