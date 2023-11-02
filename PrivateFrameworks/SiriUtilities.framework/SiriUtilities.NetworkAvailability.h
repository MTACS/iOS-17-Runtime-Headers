
@interface SiriUtilities.NetworkAvailability : _TtCs12_SwiftObject {
    void _isAvailable;
    void _isConstrained;
    void _isExpensive;
    void _isInAirplaneMode;
    void _status;
    void airplaneModeUpdateHandler;
    void lock;
    void mock;
    void monitor;
    void networkReachability;
    void pathUpdateHandler;
    void radiosPreferences;
}

@property (nonatomic, readonly) SUNetworkReachability *networkReachability;

- (id)networkReachability;

@end
