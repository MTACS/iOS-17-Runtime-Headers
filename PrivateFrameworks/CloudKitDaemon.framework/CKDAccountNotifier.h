
@interface CKDAccountNotifier : NSObject {
    NSOperationQueue * _accountChangeHandlerQueue;
    int  _accountChangedToken;
    NSMapTable * _notificationHandlers;
    bool  _warmingUp;
}

@property (nonatomic, retain) NSOperationQueue *accountChangeHandlerQueue;
@property (nonatomic) int accountChangedToken;
@property (nonatomic, retain) NSMapTable *notificationHandlers;
@property (getter=isWarmingUp) bool warmingUp;

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (id)_accountChangeNotificationOperation:(bool)arg1;
- (id)accountChangeHandlerQueue;
- (int)accountChangedToken;
- (void)dealloc;
- (id)init;
- (bool)isWarmingUp;
- (id)notificationHandlers;
- (void)postAccountChangedNotificationToClients;
- (void)postAccountChangedNotificationWithAccountID:(id)arg1 changeType:(long long)arg2;
- (void)registerObserver:(id)arg1 forAccountChangeNotification:(id /* block */)arg2;
- (void)setAccountChangeHandlerQueue:(id)arg1;
- (void)setAccountChangedToken:(int)arg1;
- (void)setNotificationHandlers:(id)arg1;
- (void)setWarmingUp:(bool)arg1;
- (void)unregisterObserverForAccountChangeNotification:(id)arg1;

@end
