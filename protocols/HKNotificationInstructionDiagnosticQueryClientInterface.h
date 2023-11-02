
@protocol HKNotificationInstructionDiagnosticQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverNotificationInstructions:(NSArray *)arg1 clearPending:(bool)arg2 isFinalBatch:(bool)arg3 queryUUID:(NSUUID *)arg4;

@end
