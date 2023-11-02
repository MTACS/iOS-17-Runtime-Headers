
@interface SPRMonitorManager : SPRObject

- (bool)ping;
- (id)sendAuditLogsAndReturnError:(id*)arg1;
- (id)sendIncidentLog:(id)arg1 error:(id*)arg2;
- (bool)start;
- (bool)stop;
- (bool)storeAuditLog:(id)arg1 error:(id*)arg2;

@end
