
@interface RadioNetworkObserver : NSObject {
    long long  _networkUsageCount;
    NSObject<OS_dispatch_queue> * _networkUsageQueue;
}

@property (nonatomic, readonly) bool isCellularNetworkingAllowed;
@property (nonatomic, readonly) bool isUsingNetwork;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (id)_init;
- (void)beginUsingNetwork;
- (void)dealloc;
- (void)endUsingNetwork;
- (id)init;
- (bool)isCellularNetworkingAllowed;
- (bool)isUsingNetwork;

@end
