
@interface CPLNetworkWatcher : NSObject <RadiosPreferencesDelegate> {
    <CPLNetworkWatcherDelegate> * _delegate;
    NSString * _endPoint;
    NSObject<OS_nw_path_monitor> * _monitor;
    struct network_usage_policy_client_s { } * _networkPolicyClient;
    CPLNetworkState * _networkState;
    NSObject<OS_dispatch_queue> * _queue;
    RadiosPreferences * _radiosPreferences;
}

@property (nonatomic) <CPLNetworkWatcherDelegate> *delegate;
@property (nonatomic, readonly) NSString *endPoint;
@property (nonatomic, readonly) CPLNetworkState *networkState;

- (void).cxx_destruct;
- (void)_getCellularPolicyWithClient:(struct network_usage_policy_client_s { }*)arg1;
- (bool)_isRestrictedPath:(id)arg1 policies:(id)arg2;
- (void)_updateAirplaneMode;
- (void)_updateCellularPolicy:(id)arg1;
- (void)_updateCellularPolicyFromPolicies:(id)arg1;
- (void)_updateNetworkState:(id)arg1;
- (void)airplaneModeChanged;
- (void)dealloc;
- (id)delegate;
- (id)endPoint;
- (id)initWithQueue:(id)arg1;
- (id)networkState;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
