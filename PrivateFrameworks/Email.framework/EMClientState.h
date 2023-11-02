
@interface EMClientState : NSObject <EFLoggable> {
    EMRemoteConnection * _connection;
    EFObservable<EFObserver> * _foregroundObservable;
    bool  _isForeground;
    bool  _isRunningTests;
}

@property (retain) EMRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EFObservable<EFObserver> *foregroundObservable;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForeground;
@property (nonatomic) bool isRunningTests;
@property (readonly) Class superclass;

+ (id)log;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (void)_handleApplicationDidEnterBackground;
- (void)_handleApplicationWillEnterForeground;
- (void)_performAsyncUpdate:(id /* block */)arg1;
- (id)connection;
- (id)daemonBoosterWithDescription:(id)arg1;
- (void)exitDaemon;
- (id)foregroundObservable;
- (id)initWithRemoteConnection:(id)arg1;
- (bool)isForeground;
- (bool)isRunningTests;
- (void)setConnection:(id)arg1;
- (void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1;
- (void)setCurrentlyVisibleMailboxes:(id)arg1;
- (void)setForegroundObservable:(id)arg1;
- (void)setIsForeground:(bool)arg1;
- (void)setIsRunningTests:(bool)arg1;
- (void)setStateForDemoMode:(id /* block */)arg1;
- (void)test_handleApplicationDidEnterBackground;
- (void)test_handleApplicationWillEnterForeground;

@end
