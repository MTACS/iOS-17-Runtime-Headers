
@interface HMUserActionPredictionProvider : NSObject <HMFLogging, HMFMessageReceiver> {
    <HMDarwinNotificationProvider> * _darwinNotificationProvider;
    <HMUserActionPredictionProviderDataSource> * _dataSource;
    HMUserActionPredictionDuetDataSource * _duetDataSource;
    int  _firstUnlockToken;
    NSMutableDictionary * _lastMappedPredictionsPerHome;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFMessageDispatcher * _messageDispatcher;
    HMUserActionPredictionTransformer * _predictionTransformer;
    bool  _shouldRefetchFromDuet;
    NSMapTable * _subscribers;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) <HMDarwinNotificationProvider> *darwinNotificationProvider;
@property (readonly) <HMUserActionPredictionProviderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMUserActionPredictionDuetDataSource *duetDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *lastMappedPredictionsPerHome;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMUserActionPredictionTransformer *predictionTransformer;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleRefreshPredictionsMessage:(id)arg1;
- (void)addSubscriber:(id)arg1 forHomeIdentifier:(id)arg2;
- (void)configure;
- (id)darwinNotificationProvider;
- (id)dataSource;
- (id)duetDataSource;
- (void)fetchPredictionsForHomeWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 UUID:(id)arg3 dataSource:(id)arg4 duetDataSource:(id)arg5 predictionTransformer:(id)arg6 darwinNotificationProvider:(id)arg7;
- (id)lastMappedPredictionsPerHome;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)predictionTransformer;
- (void)recalculatePredictions;
- (void)removeSubscriber:(id)arg1 forHomeIdentifier:(id)arg2;
- (void)unconfigure;
- (id)uuid;
- (id)workQueue;

@end
