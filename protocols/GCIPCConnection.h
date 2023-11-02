
@protocol GCIPCConnection

@required

- (id)addInterruptionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id)addInvalidationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)invalidate;
- (bool)isInvalid;
- (int)peerAuditSessionIdentifier;
- (struct { unsigned int x1[8]; })peerAuditToken;
- (NSString *)peerBundleIdentifier;
- (unsigned int)peerEffectiveGroupIdentifier;
- (unsigned int)peerEffectiveUserIdentifier;
- (int)peerProcessIdentifier;
- (id)peerValueForEntitlement:(NSString *)arg1;
- (id)remoteProxy;
- (id)remoteProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resume;
- (void)scheduleSendBarrierBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)suspend;
- (id)synchronousRemoteProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
