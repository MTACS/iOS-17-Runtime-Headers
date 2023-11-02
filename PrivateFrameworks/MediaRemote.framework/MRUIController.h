
@interface MRUIController : NSObject <MRLockScreenUIControllable, MRQuickControlsUIControllable, MRScreenMirroringQuickControlsUIControllable, MRUIContextProviding> {
    bool  _hasLockScreenControlsAssertion;
    bool  _hasQuickControlsAssertion;
    bool  _hasRouteRecommendationAssertion;
    bool  _hasScreenMirroringQuickControlsAssertion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _shouldRestoreState;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLockScreenControlsAssertion;
@property (nonatomic) bool hasQuickControlsAssertion;
@property (nonatomic) bool hasRouteRecommendationAssertion;
@property (nonatomic) bool hasScreenMirroringQuickControlsAssertion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) <MRUIServerXPCProtocol> *server;
@property (nonatomic) bool shouldRestoreState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_restoreState;
- (void)acquireLockScreenControlsAssertion;
- (id)acquireQuickControlsAssertion;
- (void)acquireRouteRecommendationAssertion;
- (void)acquireScreenMirroringQuickControlsAssertion;
- (id)contextForActivityIdentifier:(id)arg1;
- (void)dealloc;
- (bool)hasLockScreenControlsAssertion;
- (bool)hasQuickControlsAssertion;
- (bool)hasRouteRecommendationAssertion;
- (bool)hasScreenMirroringQuickControlsAssertion;
- (bool)hasUIAssertions;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)releaseLockScreenControlsAssertion;
- (void)releaseQuickControlsAssertion;
- (void)releaseRouteRecommendationAssertion;
- (void)releaseScreenMirroringQuickControlsAssertion;
- (id)server;
- (void)setHasLockScreenControlsAssertion:(bool)arg1;
- (void)setHasQuickControlsAssertion:(bool)arg1;
- (void)setHasRouteRecommendationAssertion:(bool)arg1;
- (void)setHasScreenMirroringQuickControlsAssertion:(bool)arg1;
- (void)setShouldRestoreState:(bool)arg1;
- (bool)shouldRestoreState;
- (id)xpcConnection;

@end
