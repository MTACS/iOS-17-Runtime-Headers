
@interface NMSNotificationDispatcher : NSObject {
    NSString * _baseNotificationName;
    <NMSNotificationDispatcherDelegate> * _delegate;
    bool  _hasPendingUpdates;
    NSString * _localDarwinNotificationName;
    int  _localNotifyToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _remoteDarwinNotificationName;
    int  _remoteNotifyToken;
    long long  _waitingCount;
}

@property (nonatomic, readonly) NSString *baseNotificationName;
@property (nonatomic) <NMSNotificationDispatcherDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleLocalNotificationIgnoringSenderPID:(bool)arg1;
- (void)_handleRemoteNotification;
- (void)_postLocalDarwinNotification;
- (id)baseNotificationName;
- (void)beginWaitingForUpdates;
- (void)dealloc;
- (id)delegate;
- (void)endWaitingForUpdates;
- (id)initWithNotificationName:(id)arg1;
- (void)scheduleLocalDarwinNotification;
- (void)setDelegate:(id)arg1;

@end
