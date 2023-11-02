
@interface SLShareableContentObserver : NSObject <NSUserActivityObserver, SLDServiceProxyDelegate> {
    bool  _needsRefresh;
    SLDServiceProxy * _serviceProxy;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsRefresh;
@property (nonatomic, readonly) SLDServiceProxy *serviceProxy;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serviceQueue;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)activityItemsConfigurationReadyNotification:(id)arg1;
- (void)addObservers;
- (bool)applicationIsActive;
- (void)connectAndRefreshNow;
- (void)didBecomeActiveNotification:(id)arg1;
- (void)didEnterBackgroundNotification:(id)arg1;
- (void)documentStateChangedNotification:(id)arg1;
- (id)init;
- (bool)needsRefresh;
- (bool)needsToRefresh;
- (bool)needsToResume;
- (void)pause;
- (void)refreshIfNeeded;
- (void)reset;
- (void)resumeIfNeeded;
- (id)serviceProxy;
- (void)serviceProxyDidConnect:(id)arg1;
- (void)serviceProxyDidDisconnect:(id)arg1;
- (id)serviceQueue;
- (void)setNeedsRefresh;
- (void)setNeedsRefresh:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)userActivityWasCreated:(id)arg1;
- (void)willResignActiveNotification:(id)arg1;

@end
