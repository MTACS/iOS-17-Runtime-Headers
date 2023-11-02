
@interface MNCarPlayConnectionMonitor : NSObject <CARSessionObserving> {
    CARSessionStatus * _carSessionStatus;
    bool  _isConnected;
    bool  _shouldWait;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, readonly) bool isConnectedSynchronous;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isConnected;
- (bool)isConnectedSynchronous;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;

@end
