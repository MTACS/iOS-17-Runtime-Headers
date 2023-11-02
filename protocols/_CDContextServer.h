
@protocol _CDContextServer <NSObject>

@required

- (void)activateDevices:(NSArray *)arg1 remoteUserContextProxySourceDeviceUUID:(NSUUID *)arg2;
- (void)deactivateDevices:(NSArray *)arg1 remoteUserContextProxySourceDeviceUUID:(NSUUID *)arg2;
- (void)deregisterCallback:(_CDContextualChangeRegistration *)arg1;
- (void)evaluatePredicate:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: _CDContextualPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)hasKnowledgeOfPath:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: _CDContextualKeyPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)propertiesOfPath:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: _CDContextualKeyPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSDate *, void*
- (void)registerCallback:(_CDContextualChangeRegistration *)arg1;
- (void)setObject:(void *)arg1 lastModifiedDate:(void *)arg2 forContextualKeyPath:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 9: NSObject<NSCopying><NSSecureCoding> *, NSDate *, _CDContextualKeyPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
