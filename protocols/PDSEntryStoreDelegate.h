
@protocol PDSEntryStoreDelegate <NSObject>

@required

- (void)entryStore:(PDSEntryStore *)arg1 didUpdatePendingTopics:(NSArray *)arg2 forceImmediateUpdate:(bool)arg3;

@end
