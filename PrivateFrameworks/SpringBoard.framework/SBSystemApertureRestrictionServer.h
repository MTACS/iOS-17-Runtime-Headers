
@interface SBSystemApertureRestrictionServer : NSObject <BSInvalidatable, BSServiceConnectionListenerDelegate, SBSSystemApertureRestrictionServiceServerInterface> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientServiceCollectionLock;
    BSServiceConnectionListener * _connectionListener;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableArray * _connections;
    <SBSystemApertureRestrictionServerDelegate> * _delegate;
    bool  _isValid;
    NSMutableArray * _remoteAssertions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)acquireRestrictSystemApertureLayoutToInertAssertionIdentifierWithReason:(id)arg1;
- (id)acquireSystemApertureCompleteSuppressionAssertionIdentifierWithReason:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (oneway void)invalidateRestrictSystemApertureLayoutToInertAssertionWithIdentifier:(id)arg1;
- (oneway void)invalidateSystemApertureCompleteSuppressionAssertionWithIdentifier:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
