
@protocol DEDXPCConnectorDelegate <NSObject>

@required

- (void)connector:(DEDXPCConnector *)arg1 didLooseConnectionToProcessWithPid:(int)arg2;
- (DEDXPCInbound *)connector:(DEDXPCConnector *)arg1 needsXPCInboundForPid:(NSNumber *)arg2;

@end
