
@interface NUExtensionAppActivityMonitor : NSObject <NUAppActivityMonitor> {
    NSMutableSet * _backgroundObserverBlocks;
    NSMutableSet * _foregroundObserverBlocks;
    NSNotificationCenter * _notificationCenter;
    NSHashTable * _observers;
    NSMutableSet * _windowBackgroundObserverBlocks;
    NSMutableSet * _windowForegroundObserverBlocks;
}

@property (nonatomic, readonly) NSMutableSet *backgroundObserverBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableSet *foregroundObserverBlocks;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableSet *windowBackgroundObserverBlocks;
@property (nonatomic, readonly) NSMutableSet *windowForegroundObserverBlocks;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (id)backgroundObserverBlocks;
- (void)dealloc;
- (id)foregroundObserverBlocks;
- (id)initWithNotificationCenter:(id)arg1;
- (id)notificationCenter;
- (id)observers;
- (void)performOnApplicationDidBecomeActive:(id /* block */)arg1;
- (void)performOnApplicationDidEnterBackground:(id /* block */)arg1;
- (void)performOnApplicationWillEnterForeground:(id /* block */)arg1;
- (void)performOnApplicationWindowDidBecomeBackground:(id /* block */)arg1;
- (void)performOnApplicationWindowDidBecomeForeground:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (id)windowBackgroundObserverBlocks;
- (id)windowForegroundObserverBlocks;

@end
