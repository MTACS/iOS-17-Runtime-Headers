
@interface HKGymKitMetricsDataSource : NSObject <HKWorkoutDataSource, _HKXPCExportable> {
    <HKGymKitMetricsDataSourceDelegate> * _delegate;
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    HKTaskServerProxyProvider * _proxyProvider;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKGymKitMetricsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_startTaskServerIfNeededWithCompletion:(id /* block */)arg1;
- (void)clientRemote_didReceiveMetrics:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)delegate;
- (id)exportedInterface;
- (id)identifier;
- (id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProxyProvider:(id)arg1;
- (void)workoutBuilderDidFinish;

@end
