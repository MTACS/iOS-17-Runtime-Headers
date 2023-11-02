
@interface HMDDuetPredictionSubscriber : HMFObject {
    <HMDDuetPredictionSubscriberDataSource> * _dataSource;
    int  _duetPredictionsChangedNotificationToken;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property <HMDDuetPredictionSubscriberDataSource> *dataSource;
@property int duetPredictionsChangedNotificationToken;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (id)dataSource;
- (void)dealloc;
- (int)duetPredictionsChangedNotificationToken;
- (id)initWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 dataSource:(id)arg3;
- (id)messageDispatcher;
- (void)setDataSource:(id)arg1;
- (void)setDuetPredictionsChangedNotificationToken:(int)arg1;
- (id)workQueue;

@end
