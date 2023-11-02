
@protocol BMStreamDatastorePruningDelegate

@required

- (void)didPruneEvents;
- (void)willPruneEvent:(BMStoreEvent *)arg1;

@end
