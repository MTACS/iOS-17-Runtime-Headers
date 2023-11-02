
@interface PXUserInterfaceElementEventTracker : PXObservable <PXUserInterfaceElementEventTracker> {
    bool  _hasAppeared;
    bool  _isAppActive;
    bool  _isVisible;
    NSMutableDictionary * _payload;
    PXUpdater * _updater;
}

@property (nonatomic, readonly) double currentTimestamp;
@property (nonatomic) bool hasAppeared;
@property (nonatomic) bool isAppActive;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, copy) NSMutableDictionary *payload;
@property (nonatomic, readonly) PXUpdater *updater;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_invalidateIsVisible;
- (void)_setNeedsUpdate;
- (void)_updateIsVisible;
- (double)currentTimestamp;
- (void)didAppear;
- (void)didDisappear;
- (void)didPerformChanges;
- (id)finalPayloadWithPayload:(id)arg1;
- (bool)hasAppeared;
- (id)init;
- (bool)isAppActive;
- (bool)isVisible;
- (id)payload;
- (void)setHasAppeared:(bool)arg1;
- (void)setIsAppActive:(bool)arg1;
- (void)setIsVisible:(bool)arg1;
- (void)setPayload:(id)arg1;
- (double)timeIntervalBetweenTimestamp:(double)arg1 andTimestamp:(double)arg2;
- (double)timeIntervalSinceTimestamp:(double)arg1;
- (id)updater;

@end
