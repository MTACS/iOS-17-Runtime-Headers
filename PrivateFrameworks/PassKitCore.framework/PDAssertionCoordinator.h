
@interface PDAssertionCoordinator : PDXPCService <PDAssertionCoordinatorExportedInterface, PDAssertionRequestDelegate> {
    NSMutableDictionary * _assertionsByType;
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _coordinatorSerialQueue;
    <PDAssertionCoordinatorDelegate> * _delegate;
    bool  _isForegroundApplication;
    NSMutableArray * _pendingAssertionRequests;
    long long  _suppressionPermissionState;
    PKEntitlementWhitelist * _whitelist;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PDAssertionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForegroundApplication;
@property (readonly) Class superclass;

+ (id)suppressionApplicationRegistry;

- (void).cxx_destruct;
- (void)_acquireAssertion:(id)arg1 handler:(id /* block */)arg2;
- (void)_acquireContactlessInterfaceSuppressionAssertion:(id)arg1 handler:(id /* block */)arg2;
- (void)_addRequestForAssertion:(id)arg1 handler:(id /* block */)arg2;
- (void)_cancelPendingAssertionRequest:(id)arg1;
- (void)_processPendingAssertionRequests;
- (void)_showAlertForContactlessInterfaceSuppression;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(id /* block */)arg4;
- (void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 isValid:(id /* block */)arg3;
- (void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 shouldInvalidateWhenBackgrounded:(bool)arg3;
- (void)assertionRequestDidTimeout:(id)arg1;
- (id)assertionsOfType:(unsigned long long)arg1;
- (id)bundleIdentifier;
- (void)cancelPendingAssertionRequests;
- (id)delegate;
- (id)description;
- (bool)hasAssertionsOfType:(unsigned long long)arg1;
- (id)initWithConnection:(id)arg1;
- (void)invalidateAllAssertions;
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(id /* block */)arg3;
- (void)invalidateAssertionsForBackgroundApplicationState;
- (bool)isForegroundApplication;
- (void)processPendingAssertionRequests;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsForegroundApplication:(bool)arg1;

@end
