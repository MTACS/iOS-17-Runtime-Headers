
@interface TKTokenWatcherProxy : NSObject <TKProtocolTokenWatcherHost> {
    TKTokenWatcher * _watcher;
}

- (void).cxx_destruct;
- (id)initWithWatcher:(id)arg1;
- (void)insertedToken:(id)arg1;
- (void)removedToken:(id)arg1;

@end
