
@interface MSAutosave : MSXPCService {
    NSHashTable * _activeAutosaveSessions;
}

@property (nonatomic, retain) NSHashTable *activeAutosaveSessions;

+ (id)autosave;
+ (id)log;

- (void).cxx_destruct;
- (void)_getRemoteAutosaveSessionForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleInterruptedConnection;
- (id)activeAutosaveSessions;
- (void)autosaveMessageData:(id)arg1 replacingIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)autosaveSessionForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)autosavedMessageDataWithIdentifier:(id)arg1;
- (void)getIdleAutosaves:(id /* block */)arg1;
- (bool)hasAutosavedMessageWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)newConnectionForInterface:(id)arg1;
- (void)removeAutosavedMessageWithIdentifier:(id)arg1;
- (void)setActiveAutosaveSessions:(id)arg1;

@end
