
@protocol DADAgentStopStartControllerDelegate

@required

- (unsigned long long)disableMonitoringAgents;
- (void)enableMonitoringAgentsWithToken:(unsigned long long)arg1;
- (void)scheduleAgentStartOrStopBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
