
@interface SBBackgroundActivityAssertionServiceManager : NSObject <BSDescriptionProviding, NSXPCListenerDelegate, SBBackgroundActivityAssertionServer> {
    NSMapTable * _assertionsByBackgroundActivityIdentifier;
    NSMapTable * _assertionsByIdentifierByClientConnection;
    NSMapTable * _attributionsByAssertion;
    NSMutableSet * _backgroundActivityIdentifiers;
    NSMutableArray * _coordinatorConnectionsByBackgroundActivity;
    <SBBackgroundActivityAssertionServiceManagerDelegate> * _delegate;
    NSMutableSet * _exclusiveBackgroundActivityIdentifiers;
    NSObject<OS_dispatch_queue> * _internalQueue;
    STBackgroundActivitiesStatusDomainPublisher * _publisher;
    NSMutableArray * _runningUpdateTransactions;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, retain) NSMapTable *assertionsByBackgroundActivityIdentifier;
@property (nonatomic, retain) NSMapTable *assertionsByIdentifierByClientConnection;
@property (nonatomic, retain) NSMapTable *attributionsByAssertion;
@property (nonatomic, copy) NSMutableSet *backgroundActivityIdentifiers;
@property (nonatomic, retain) NSMutableArray *coordinatorConnectionsByBackgroundActivity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBBackgroundActivityAssertionServiceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSMutableSet *exclusiveBackgroundActivityIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) STBackgroundActivitiesStatusDomainPublisher *publisher;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (id)_internalQueue_backgroundActivityIdentifiersAddedByAddingAssertionData:(id)arg1;
- (id)_internalQueue_backgroundActivityIdentifiersRemovedByRemovingAssertionData:(id)arg1;
- (id)_internalQueue_coordinatorClientForBackgroundActivityIdentifiers:(id)arg1;
- (id)_internalQueue_coordinatorClientForConnection:(id)arg1;
- (id)_internalQueue_coordinatorClientMatchingBackgroundActivityIdentifier:(id)arg1;
- (void)_internalQueue_deactivateBackgroundActivityAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (void)_internalQueue_publishAttributionsForAddingAssertionData:(id)arg1;
- (void)_internalQueue_publishAttributionsForRemovingAssertionData:(id)arg1;
- (void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (void)_notifyDelegateAboutStatusStringChange;
- (bool)_verifyCoordinatorEntitlementForBackgroundActivityIdentifiers:(id)arg1 onConnection:(id)arg2;
- (void)activateBackgroundActivityAssertions:(id)arg1 reply:(id /* block */)arg2;
- (id)assertionsByBackgroundActivityIdentifier;
- (id)assertionsByIdentifierByClientConnection;
- (id)attributionsByAssertion;
- (id)backgroundActivityIdentifiers;
- (id)coordinatorConnectionsByBackgroundActivity;
- (void)deactivateBackgroundActivityAssertionsWithIdentifiers:(id)arg1;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)exclusiveBackgroundActivityIdentifiers;
- (bool)handleTapForBackgroundActivityWithIdentifier:(id)arg1;
- (id)init;
- (id)internalQueue;
- (void)invalidateBackgroundActivityAssertions:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)publisher;
- (void)setAssertionsByBackgroundActivityIdentifier:(id)arg1;
- (void)setAssertionsByIdentifierByClientConnection:(id)arg1;
- (void)setAttributionsByAssertion:(id)arg1;
- (void)setBackgroundActivityIdentifiers:(id)arg1;
- (void)setCoordinatorConnectionsByBackgroundActivity:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExclusiveBackgroundActivityIdentifiers:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setRegisteredBackgroundActivityIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2;
- (void)setXpcListener:(id)arg1;
- (id)statusStringForBackgroundActivityWithIdentifier:(id)arg1 activeAttributions:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unregisterCoordinatorRegistrationForBackgroundActivityIdentifiers:(id)arg1;
- (id)xpcListener;

@end
