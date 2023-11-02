
@interface SharedWithYou.CommunicationManager : NSObject <SLDServiceProxyDelegate> {
    void $__lazy_storage_$_facetimeServiceProxy;
    void attributionIdentifier;
    void presentingViewController;
    void videoEnabled;
}

- (void).cxx_destruct;
- (id)init;
- (void)serviceProxyDidConnect:(id)arg1;
- (void)serviceProxyDidDisconnect:(id)arg1;

@end
