
@interface HDCarouselServicesManager : NSObject <HDAssertionObserver> {
    HDAssertionManager * _assertionManager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)init;
- (id)takeDisableAOTAssertionForOwnerIdentifier:(id)arg1;
- (id)takeSessionAssertionForOwnerIdentifier:(id)arg1;
- (id)takeSessionAssertionForOwnerIdentifier:(id)arg1 supportsAOT:(bool)arg2;

@end
