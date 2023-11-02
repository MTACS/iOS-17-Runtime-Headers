
@interface SLHighlightsCache : NSObject {
    id /* block */  _clientUpdateHighlightsBlock;
    NSHashTable * _delegates;
    NSMutableDictionary * _highlightsCache;
    NSObject<OS_dispatch_group> * _initialFetchGroup;
    NSObject<OS_dispatch_queue> * _initialFetchWaitingQueue;
    SLInteractionHandler * _interactionHandler;
    int  _notificationTokenDeleteHighlights;
    int  _notificationTokenRefreshHighlights;
    int  _notificationTokenScreenTimeChange;
    id /* block */  _systemUpdateHighlightsBlock;
    NSObject<OS_dispatch_queue> * _threadSafePropertyQueue;
}

@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, copy) id /* block */ clientUpdateHighlightsBlock;
@property (nonatomic, retain) NSHashTable *delegates;
@property (nonatomic, readonly, copy) NSArray *highlights;
@property (nonatomic, retain) NSMutableDictionary *highlightsCache;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *initialFetchGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *initialFetchWaitingQueue;
@property (nonatomic, retain) SLInteractionHandler *interactionHandler;
@property (nonatomic, readonly) int notificationTokenDeleteHighlights;
@property (nonatomic, readonly) int notificationTokenRefreshHighlights;
@property (nonatomic, readonly) int notificationTokenScreenTimeChange;
@property (nonatomic, copy) id /* block */ systemUpdateHighlightsBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *threadSafePropertyQueue;

+ (id)highlightFetchQueue;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_fetchAndUpdateHighlightsImmediately;
- (void)_leaveInitialFetchGroupIfNecessary;
- (void)_notifyDelegatesWithNotificationType:(long long)arg1 withHighlights:(id)arg2;
- (void)_registerNotifications;
- (void)_updateHighlightsForSystemNotification;
- (id /* block */)_updateHighlightsWithPreviousUpdateBlock:(id /* block */)arg1 debounceInterval:(unsigned long long)arg2;
- (void)addDelegate:(id)arg1;
- (id)appIdentifier;
- (id /* block */)clientUpdateHighlightsBlock;
- (id)currentDelegates;
- (void)dealloc;
- (id)delegates;
- (void)didDeleteHighlightsOrAttributions;
- (void)fetchHighlightsWithLimit:(unsigned long long)arg1 variant:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)highlights;
- (id)highlightsCache;
- (id)init;
- (id)initialFetchGroup;
- (id)initialFetchWaitingQueue;
- (id)interactionHandler;
- (int)notificationTokenDeleteHighlights;
- (int)notificationTokenRefreshHighlights;
- (int)notificationTokenScreenTimeChange;
- (void)removeDelegate:(id)arg1;
- (void)runAfterInitialFetch:(id /* block */)arg1 onQueue:(id)arg2;
- (void)setClientUpdateHighlightsBlock:(id /* block */)arg1;
- (void)setDelegates:(id)arg1;
- (void)setHighlights:(id)arg1;
- (void)setHighlightsCache:(id)arg1;
- (void)setInitialFetchGroup:(id)arg1;
- (void)setInitialFetchWaitingQueue:(id)arg1;
- (void)setInteractionHandler:(id)arg1;
- (void)setSystemUpdateHighlightsBlock:(id /* block */)arg1;
- (id /* block */)systemUpdateHighlightsBlock;
- (id)threadSafePropertyQueue;
- (void)updateHighlights;

@end
