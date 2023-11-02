
@protocol PKApplicationWorkspaceProxy <NSObject>

@required

- (void)addObserver:(id <PKApplicationWorkspaceObserverProtocol>)arg1;
- (NSArray *)installedPlugins;
- (NSArray *)pluginsMatchingQuery:(void *)arg1 applyFilter:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSString *, NSDictionary *, void*
- (bool)registerPlugin:(NSURL *)arg1;
- (void)removeObserver:(id <PKApplicationWorkspaceObserverProtocol>)arg1;
- (bool)unregisterPlugin:(NSURL *)arg1;

@end
