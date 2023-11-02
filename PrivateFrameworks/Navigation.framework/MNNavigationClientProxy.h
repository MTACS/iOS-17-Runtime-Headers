
@interface MNNavigationClientProxy : NSObject {
    GEOApplicationAuditToken * _auditToken;
    MNDirectionsRequestManager * _directionsRequestManager;
}

- (void).cxx_destruct;
- (id)_directionsRequestManager;
- (void)cancelDirectionsRequestWithIdentifier:(id)arg1;
- (id)init;
- (void)requestDirections:(id)arg1 withIdentifier:(id)arg2 handler:(id /* block */)arg3;

@end
