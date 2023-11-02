
@protocol DNDSAssertionSyncManagerDelegate <NSObject>

@required

- (void)syncManager:(void *)arg1 performModeAssertionUpdatesWithHandler:(void *)arg2; // needs 2 arg types, found 7: <DNDSAssertionSyncManager> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, <DNDSModeAssertionUpdateContext> *, void*
- (void)syncManager:(id <DNDSAssertionSyncManager>)arg1 prepareForSyncToDevices:(NSArray *)arg2;

@end
