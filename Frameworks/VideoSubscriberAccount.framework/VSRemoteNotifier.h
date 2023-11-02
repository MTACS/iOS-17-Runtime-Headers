
@interface VSRemoteNotifier : NSObject {
    <VSRemoteNotifierDelegate> * _delegate;
    NSDistributedNotificationCenter * _distributedNotificationCenter;
    NSString * _notificationObject;
    NSString * _remoteNotificationName;
}

@property (nonatomic) <VSRemoteNotifierDelegate> *delegate;
@property (nonatomic, retain) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (nonatomic, copy) NSString *notificationObject;
@property (nonatomic, readonly, copy) NSString *remoteNotificationName;

+ (id)_currentProcessIdentifier;

- (void).cxx_destruct;
- (void)_didReceiveDistributedNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)distributedNotificationCenter;
- (id)init;
- (id)initWithNotificationName:(id)arg1;
- (id)notificationObject;
- (void)postNotification;
- (void)postNotificationWithUserInfo:(id)arg1;
- (id)remoteNotificationName;
- (void)setDelegate:(id)arg1;
- (void)setDistributedNotificationCenter:(id)arg1;
- (void)setNotificationObject:(id)arg1;

@end
