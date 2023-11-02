
@interface SBSExternalDisplayService : NSObject <SBSExternalDisplayServiceServerToClientInterface> {
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSHashTable * _queue_observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (oneway void)externalDisplayDidConnect:(id)arg1;
- (oneway void)externalDisplayDidUpdateProperties:(id)arg1;
- (oneway void)externalDisplayWillDisconnect:(id)arg1;
- (void)getConnectedDisplayInfoWithCompletionHandler:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDisplayArrangement:(id)arg1 forDisplay:(id)arg2;
- (void)setMirroringEnabled:(bool)arg1 forDisplay:(id)arg2;
- (void)setSettings:(id)arg1 forDisplay:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;

@end
