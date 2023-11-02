
@protocol SBDNDStateService <NSObject>

@required

- (void)addStateUpdateListener:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: <DNDStateUpdateListener> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)queryCurrentStateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDState *, NSError *, void*
- (DNDState *)queryCurrentStateWithError:(id*)arg1;
- (void)removeStateUpdateListener:(id <DNDStateUpdateListener>)arg1;

@end
