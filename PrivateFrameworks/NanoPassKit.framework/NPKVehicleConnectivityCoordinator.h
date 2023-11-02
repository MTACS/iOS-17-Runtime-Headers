
@interface NPKVehicleConnectivityCoordinator : NSObject {
    <NPKVehicleConnectivityCoordinatorDelegate> * _delegate;
    NSDistributedNotificationCenter * _distributedNotificationCenter;
}

@property (nonatomic) <NPKVehicleConnectivityCoordinatorDelegate> *delegate;

+ (id)_secureElementPassMatchingAID:(id)arg1 subcredentialIdentifier:(id)arg2;
+ (id)_subcredentialIdentifierForPass:(id)arg1;

- (void).cxx_destruct;
- (void)_handleCarKeyVehicleConnectedNotification:(id)arg1;
- (void)_handleCarKeyVehicleDisconnectedNotification:(id)arg1;
- (void)_parseVehicleConnectivityChangeNotificationObject:(id)arg1 outApplicationIdentifier:(id*)arg2 outSubcredentialIdentifier:(id*)arg3;
- (void)_registerObservers;
- (id)delegate;
- (id)init;
- (id)initWithDistributedNotificationCenter:(id)arg1;
- (bool)isVehicleConnectedForPass:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
