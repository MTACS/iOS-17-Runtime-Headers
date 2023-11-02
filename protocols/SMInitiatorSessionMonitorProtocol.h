
@protocol SMInitiatorSessionMonitorProtocol

@required

- (void)fetchCurrentSessionStateWithHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SMSessionManagerState *, bool, NSError *, void*
- (void)startMonitoringSessionStateWithHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SMSessionManagerState *, bool, NSError *, void*
- (void)stopMonitoringSessionStateWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
