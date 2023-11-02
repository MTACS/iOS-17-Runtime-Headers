
@interface HDSHAccessibilityAssertionManager : NSObject <HDContentProtectionObserver, HDProfileReadyObserver> {
    HDAssertion * _accessibilityAssertion;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) HDAssertion *accessibilityAssertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldBeObservingContentProtectionState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_takeAccessibilityAssertion;
- (void)_restoreContentProtectionObservingState;
- (id)accessibilityAssertion;
- (void)beginObservingContentProtectionState;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)invalidateAccessibilityAssertion;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setShouldBeObservingContentProtectionState:(bool)arg1;
- (bool)shouldBeObservingContentProtectionState;
- (void)stopObservingContentProtectionState;

@end
