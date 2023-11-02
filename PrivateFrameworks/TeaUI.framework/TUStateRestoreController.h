
@interface TUStateRestoreController : NSObject <TUStateRestoreControllerType> {
    void alwaysAllowStateRestoration;
    void anyNavigationHappenAfterBackground;
    void hasStateDiscarded;
    void isStateRestorationFeatureEnabled;
    void store;
    void timeWindow;
}

@property (nonatomic) bool hasStateDiscarded;
@property (nonatomic, readonly) bool isStateRestorationAllowed;
@property (nonatomic, readonly) bool isStateRestorationFeatureEnabled;

- (void).cxx_destruct;
- (bool)hasStateDiscarded;
- (id)init;
- (id)initWithTimeWindow:(double)arg1 isRunningPPT:(bool)arg2;
- (id)initWithTimeWindow:(double)arg1 isStateRestorationEnabled:(bool)arg2;
- (bool)isStateRestorationAllowed;
- (bool)isStateRestorationFeatureEnabled;
- (void)markStateDiscarded;
- (void)navigationDidHappen;
- (void)sceneDidEnterBackground;
- (void)setHasStateDiscarded:(bool)arg1;

@end
