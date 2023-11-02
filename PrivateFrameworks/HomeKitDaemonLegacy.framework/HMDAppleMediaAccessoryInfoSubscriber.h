
@interface HMDAppleMediaAccessoryInfoSubscriber : NSObject <HMEEventConsumer, HMFLogging> {
    <HMDAppleMediaAccessoryInfoSubscriberDataSource> * _dataSource;
    <HMDAppleMediaAccessoryInfoSubscriberDelegate> * _delegate;
    HMFWiFiNetworkInfo * _receivedWifiInfo;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) <HMDAppleMediaAccessoryInfoSubscriberDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDAppleMediaAccessoryInfoSubscriberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMFWiFiNetworkInfo *receivedWifiInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)delegate;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;
- (id)receivedWifiInfo;
- (void)setDelegate:(id)arg1;
- (void)setReceivedWifiInfo:(id)arg1;
- (void)subscribeToWiFiInfoUpdate;
- (id)workQueue;

@end
