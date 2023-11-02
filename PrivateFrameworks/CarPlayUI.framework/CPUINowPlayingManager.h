
@interface CPUINowPlayingManager : NSObject <MPRequestResponseControllerDelegate> {
    NSString * _bundleIdentifier;
    NSString * _lastContentItemIdentifier;
    NSString * _lastContentItemTitle;
    CPUIThrottle * _metadataThrottle;
    MPRequestResponseController * _requestController;
    CPUINowPlayingSnapshot * _snapshot;
    CARObserverHashTable * _stateObservers;
    unsigned long long  _throttleBehavior;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastContentItemIdentifier;
@property (nonatomic, copy) NSString *lastContentItemTitle;
@property (nonatomic, retain) CPUIThrottle *metadataThrottle;
@property (nonatomic, retain) MPRequestResponseController *requestController;
@property (nonatomic, readonly) CPUINowPlayingSnapshot *snapshot;
@property (nonatomic, retain) CARObserverHashTable *stateObservers;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long throttleBehavior;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_setupRequestController;
- (void)addNowPlayingObserver:(id)arg1;
- (id)bundleIdentifier;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)lastContentItemIdentifier;
- (id)lastContentItemTitle;
- (id)metadataThrottle;
- (void)performCommandRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)removeNowPlayingObserver:(id)arg1;
- (id)requestController;
- (void)setLastContentItemIdentifier:(id)arg1;
- (void)setLastContentItemTitle:(id)arg1;
- (void)setMetadataThrottle:(id)arg1;
- (void)setRequestController:(id)arg1;
- (void)setStateObservers:(id)arg1;
- (void)setThrottleBehavior:(unsigned long long)arg1;
- (id)snapshot;
- (id)stateObservers;
- (unsigned long long)throttleBehavior;

@end
