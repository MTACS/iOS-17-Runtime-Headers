
@interface MSVDistributedNotificationObserver : NSObject {
    <MSVDistributedNotificationObserverDelegate> * _delegate;
    NSString * _distributedName;
    NSString * _localName;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _userInfoForLocalNotification;
}

@property (nonatomic) <MSVDistributedNotificationObserverDelegate> *delegate;
@property (nonatomic, readonly) NSString *distributedName;
@property (nonatomic, readonly) NSString *localName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSDictionary *userInfoForLocalNotification;

+ (id)observerWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3;

- (void).cxx_destruct;
- (void)_handleDistributedNotificationWithNotifyToken:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (id)distributedName;
- (id)init;
- (id)initWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3;
- (id)localName;
- (int)notifyToken;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setUserInfoForLocalNotification:(id)arg1;
- (id)userInfoForLocalNotification;

@end
