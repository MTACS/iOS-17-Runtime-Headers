
@interface ASKRebootstrapCoordinator : NSObject {
    id /* block */  _appBootstrapHandler;
    ASKStorefrontChangeProvider * _changeObserver;
    long long  _delayCount;
    NSHashTable * _handlerTokens;
    bool  _hasPendingNotification;
}

@property (nonatomic, copy) id /* block */ appBootstrapHandler;
@property (nonatomic, readonly) ASKStorefrontChangeProvider *changeObserver;
@property (nonatomic) long long delayCount;
@property (nonatomic, readonly) NSHashTable *handlerTokens;
@property (nonatomic) bool hasPendingNotification;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id /* block */)appBootstrapHandler;
- (void)beginDelayingNotifications;
- (id)changeObserver;
- (long long)delayCount;
- (void)endDelayingNotifications;
- (id)handlerTokens;
- (bool)hasPendingNotification;
- (id)init;
- (void)notify;
- (void)registerAppBootstrapHandler:(id /* block */)arg1;
- (id)registerCleanupHandler:(id /* block */)arg1;
- (void)scheduleNotification;
- (void)setAppBootstrapHandler:(id /* block */)arg1;
- (void)setDelayCount:(long long)arg1;
- (void)setHasPendingNotification:(bool)arg1;
- (void)simulateStorefrontChange;

@end
