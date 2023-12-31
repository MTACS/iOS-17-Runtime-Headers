
@protocol CLIndoorXPCProviderImplementation <NSObject>

@required

- (NSString *)endpointName;
- (Protocol *)remoteObjectProtocol;
- (bool)withinQueueCanReinitializeRemoteState;
- (void)withinQueueInvalidateState;
- (NSError *)withinQueuePermanentShutdownReason;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(NSError *)arg1;
- (void)withinQueueReinitializeRemoteState;

@end
