
@interface MRAVClusterController : NSObject {
    int  _airplayClusterStatusNotificationToken;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSString * _clusterLeaderUID;
    unsigned long long  _clusterStatus;
    unsigned int  _clusterType;
    NSString * _clusterUID;
    NSString * _localPairingIdentity;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSString *clusterLeaderUID;
@property (nonatomic, readonly) unsigned long long clusterStatus;
@property (nonatomic, readonly) unsigned int clusterType;
@property (nonatomic, readonly) NSString *clusterUID;
@property (nonatomic, readonly) bool needsCommandRedirection;

+ (bool)canBeClusterMember;
+ (id)getClusterLeaderUID;
+ (unsigned int)getClusterType;
+ (id)getClusterUID;
+ (id)sharedController;

- (void).cxx_destruct;
- (id)clusterLeaderUID;
- (unsigned long long)clusterStatus;
- (unsigned int)clusterType;
- (id)clusterUID;
- (void)deviceInfoDidChangeNotification:(id)arg1;
- (void)getClusterLeaderEndpoint:(id /* block */)arg1;
- (void)getClusterStatus:(id /* block */)arg1;
- (id)init;
- (bool)needsCommandRedirection;
- (unsigned long long)onQueue_computeClusterStatus;
- (void)onQueue_notifyObserversWithClusterStatus:(unsigned long long)arg1;
- (void)onQueue_notifyObserversWithClusterType:(unsigned int)arg1;
- (void)onQueue_setClusterStatus:(unsigned long long)arg1;
- (void)onQueue_setClusterType:(unsigned int)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateClusterInformation;

@end
