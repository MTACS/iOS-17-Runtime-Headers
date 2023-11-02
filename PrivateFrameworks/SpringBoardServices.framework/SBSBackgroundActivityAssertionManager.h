
@interface SBSBackgroundActivityAssertionManager : NSObject <BSDescriptionProviding, SBSBackgroundActivityAssertionClient> {
    NSMutableDictionary * _acquisitionHandlerEntriesByIdentifier;
    NSMapTable * _assertionsByIdentifier;
    NSObject<OS_dispatch_queue> * _coordinatorCalloutQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    SBSBackgroundActivityCoordinator * _internalQueue_backgroundActivityCoordinator;
    NSXPCConnection * _sbXPCConnection;
}

@property (nonatomic, retain) NSMutableDictionary *acquisitionHandlerEntriesByIdentifier;
@property (nonatomic, retain) NSMapTable *assertionsByIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *coordinatorCalloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) SBSBackgroundActivityCoordinator *internalQueue_backgroundActivityCoordinator;
@property (nonatomic, retain) NSXPCConnection *sbXPCConnection;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleXPCConnectionInvalidation;
- (void)_internalQueue_removeBackgroundActivityAssertionWithIdentifier:(id)arg1 invalidate:(bool)arg2;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void)_internalQueue_updateRegistrationForCoordinator:(id)arg1 reply:(id /* block */)arg2;
- (void)_reactivateAssertions;
- (void)_registerBackgroundActivityCoordinatorAfterInterruption;
- (id)acquisitionHandlerEntriesByIdentifier;
- (void)addBackgroundActivityAssertion:(id)arg1 withHandler:(id /* block */)arg2 onQueue:(id)arg3;
- (id)assertionsByIdentifier;
- (id)coordinatorCalloutQueue;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)internalQueue;
- (id)internalQueue_backgroundActivityCoordinator;
- (void)invalidateBackgroundActivityAssertionsWithIdentifiers:(id)arg1;
- (void)removeBackgroundActivityAssertion:(id)arg1;
- (id)sbXPCConnection;
- (void)setAcquisitionHandlerEntriesByIdentifier:(id)arg1;
- (void)setAssertionsByIdentifier:(id)arg1;
- (void)setCoordinatorCalloutQueue:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setInternalQueue_backgroundActivityCoordinator:(id)arg1;
- (void)setSbXPCConnection:(id)arg1;
- (void)statusBarTappedWithContext:(id)arg1 reply:(id /* block */)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unregisterCoordinator;
- (void)updateRegistrationForCoordinator:(id)arg1 reply:(id /* block */)arg2;
- (void)updateStatusStringForAssertion:(id)arg1;

@end
