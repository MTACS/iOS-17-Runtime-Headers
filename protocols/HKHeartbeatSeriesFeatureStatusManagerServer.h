
@protocol HKHeartbeatSeriesFeatureStatusManagerServer <NSObject>

@required

- (void)remote_startObservingChangesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_stopObservingChanges;
- (void)remote_updateAndNotifyAllObservers;

@end
