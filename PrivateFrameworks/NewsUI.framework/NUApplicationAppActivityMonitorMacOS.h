
@interface NUApplicationAppActivityMonitorMacOS : NSObject <FCAppActivityReceiver, NUAppActivityMonitor> {
    NSMutableSet * _backgroundObserverBlocks;
    bool  _becomingActive;
    NSMutableSet * _foregroundObserverBlocks;
    NSNotificationCenter * _notificationCenter;
    NSHashTable * _observers;
    NSMutableSet * _windowBackgroundObserverBlocks;
    NSString * _windowBecameFrontmostNotificationName;
    NSMutableSet * _windowForegroundObserverBlocks;
    bool  _windowIsForeground;
    NSString * _windowLostFrontmostNotificationName;
}

@property (nonatomic, readonly) NSMutableSet *backgroundObserverBlocks;
@property (getter=isBecomingActive, nonatomic) bool becomingActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableSet *foregroundObserverBlocks;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableSet *windowBackgroundObserverBlocks;
@property (nonatomic, readonly, copy) NSString *windowBecameFrontmostNotificationName;
@property (nonatomic, readonly) NSMutableSet *windowForegroundObserverBlocks;
@property (getter=isWindowForeground, nonatomic) bool windowIsForeground;
@property (nonatomic, readonly, copy) NSString *windowLostFrontmostNotificationName;

- (void).cxx_destruct;
- (void)_applicationWillTerminate;
- (void)_markWindowAsBackground;
- (void)_markWindowAsForeground;
- (void)addObserver:(id)arg1;
- (id)backgroundObserverBlocks;
- (void)dealloc;
- (id)foregroundObserverBlocks;
- (id)initWithNotificationCenter:(id)arg1 windowBecameFrontmostNotificationName:(id)arg2 windowLostFrontmostNotificationName:(id)arg3;
- (bool)isBecomingActive;
- (bool)isWindowForeground;
- (id)notificationCenter;
- (id)observers;
- (void)performOnApplicationDidBecomeActive:(id /* block */)arg1;
- (void)performOnApplicationDidEnterBackground:(id /* block */)arg1;
- (void)performOnApplicationWillEnterForeground:(id /* block */)arg1;
- (void)performOnApplicationWindowDidBecomeBackground:(id /* block */)arg1;
- (void)performOnApplicationWindowDidBecomeForeground:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)sceneDidBecomeActive;
- (void)sceneDidBecomeActiveWithURL:(id)arg1 sourceApplication:(id)arg2 sceneID:(id)arg3;
- (void)sceneDidEnterBackground;
- (void)sceneDidEnterBackgroundWithSceneID:(id)arg1;
- (void)sceneWillConnect;
- (void)sceneWillEnterForeground;
- (void)sceneWillResignActiveWithSceneID:(id)arg1;
- (void)setBecomingActive:(bool)arg1;
- (void)setWindowIsForeground:(bool)arg1;
- (id)windowBackgroundObserverBlocks;
- (id)windowBecameFrontmostNotificationName;
- (id)windowForegroundObserverBlocks;
- (id)windowLostFrontmostNotificationName;

@end
