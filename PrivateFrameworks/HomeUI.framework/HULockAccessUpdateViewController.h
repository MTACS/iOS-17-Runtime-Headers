
@interface HULockAccessUpdateViewController : OBWelcomeController <HUPreloadableViewController> {
    HMHome * _home;
    NAFuture * _preloadFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NAFuture *preloadFuture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (id)preloadFuture;

@end
