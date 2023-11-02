
@interface HKWorkoutRouteDataSource : NSObject <HKWorkoutDataSource, HKWorkoutRouteDataSourceClientInterface, _HKXPCExportable> {
    <HKWorkoutRouteDataSourceDelegate> * _delegate;
    NSUUID * _identifier;
    HKTaskServerProxyProvider * _proxyProvider;
    NSUUID * _sessionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKWorkoutRouteDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverIdentifier;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)clientRemote_didUpdateAltitude:(id)arg1;
- (void)clientRemote_didUpdateElevation:(id)arg1;
- (void)clientRemote_didUpdateRoute:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)delegate;
- (id)exportedInterface;
- (id)identifier;
- (id)initWithWorkoutSession:(id)arg1;
- (id)proxyProvider;
- (id)remoteInterface;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)workoutBuilderDidFinish;

@end
