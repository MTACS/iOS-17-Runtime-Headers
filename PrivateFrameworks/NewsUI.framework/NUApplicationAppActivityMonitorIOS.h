
@interface NUApplicationAppActivityMonitorIOS : NSObject <FCAppActivityReceiver, NUAppActivityMonitor> {
    NSMutableSet * _backgroundObserverBlocks;
    NSMutableSet * _foregroundObserverBlocks;
    NSHashTable * _observers;
    NSMutableSet * _windowBackgroundObserverBlocks;
    NSMutableSet * _windowForegroundObserverBlocks;
}

@property (nonatomic, readonly) NSMutableSet *backgroundObserverBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableSet *foregroundObserverBlocks;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableSet *windowBackgroundObserverBlocks;
@property (nonatomic, readonly) NSMutableSet *windowForegroundObserverBlocks;

- (void).cxx_destruct;
- (void)_applicationWillTerminate;
- (void)_windowDidBecomeBackground;
- (void)_windowDidBecomeForeground;
- (void)addObserver:(id)arg1;
- (id)backgroundObserverBlocks;
- (void)dealloc;
- (id)foregroundObserverBlocks;
- (id)init;
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
- (id)windowBackgroundObserverBlocks;
- (id)windowForegroundObserverBlocks;

@end
