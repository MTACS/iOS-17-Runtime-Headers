
@interface ASDNotificationCenter : NSObject <ASDNotificationServiceProtocol, ASDServiceProvider> {
    <ASDNotificationCenterDialogObserver> * _dialogObserver;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _notificationObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerLock;
    NSHashTable * _progressObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <ASDNotificationCenterDialogObserver> *dialogObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultCenter;
+ (id)interface;

- (void).cxx_destruct;
- (void)addNotificationObserver:(id)arg1 forName:(id)arg2;
- (void)addProgressObserver:(id)arg1;
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)deliverNotifications:(id)arg1;
- (void)deliverProgress:(id)arg1;
- (void)deliverViewPresentationRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)dialogObserver;
- (id)init;
- (void)isDialogObserverAvailableWithReplyHandler:(id /* block */)arg1;
- (void)removeNotificationObserver:(id)arg1 forName:(id)arg2;
- (void)removeProgressObserver:(id)arg1;
- (void)setDialogObserver:(id)arg1;

@end
