
@interface HDNotificationSyncDiagnosticOperation : HDDiagnosticOperation

- (void)_appendCSVLine:(id)arg1;
- (void)_appendNotificationInstructions:(id)arg1;
- (id)reportFilename;
- (void)run;

@end
