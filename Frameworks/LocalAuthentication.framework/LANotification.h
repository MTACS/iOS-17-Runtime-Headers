
@interface LANotification : NSObject <LANotificationObserverXPC> {
    bool  _appMustBeActive;
    NSXPCConnection * _connection;
    <LANotificationXPC> * _notification;
    bool  _notifyOnResume;
    NSObject<LANotificationObserver> * _observer;
    NSObject * _oldValue;
    LANotificationProxy * _proxy;
    NSObject * _value;
    bool  _waitingForActivation;
}

@property (nonatomic) bool appMustBeActive;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <LANotificationXPC> *notification;
@property (nonatomic) bool notifyOnResume;
@property (nonatomic) NSObject<LANotificationObserver> *observer;
@property (nonatomic, readonly) NSObject *oldValue;
@property (nonatomic, readonly) LANotificationProxy *proxy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject *value;

+ (bool)isAppActive;
+ (void)postNotificationWithNewValue:(id)arg1 oldValue:(id)arg2;

- (void).cxx_destruct;
- (void)_appActivityChanged:(id)arg1;
- (void)_checkWaiting;
- (id)_notificationNameWhenAppIsActive:(bool)arg1;
- (void)_notifyObserverWithAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_observeAppActivity:(bool)arg1;
- (bool)appMustBeActive;
- (id)connection;
- (id)darwinNotificationForValue:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithObserver:(id)arg1;
- (void)newValue:(id)arg1 oldValue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)notification;
- (bool)notifyOnResume;
- (id)observer;
- (id)oldValue;
- (void)postNewValue:(id)arg1 oldValue:(id)arg2;
- (id)proxy;
- (void)resume;
- (void)setAppMustBeActive:(bool)arg1;
- (void)setNotifyOnResume:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)suspend;
- (id)value;

@end
