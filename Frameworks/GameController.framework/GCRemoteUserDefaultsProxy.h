
@interface GCRemoteUserDefaultsProxy : NSObject <GCUserDefaults> {
    <GCUserDefaultsXPCProxyServiceRemoteClientInterface> * _activeClient;
    NSMutableDictionary * _clients;
    NSMutableDictionary * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <GCUserDefaultsXPCProxyServiceRemoteClientInterface> *activeClient;
@property (nonatomic, readonly) bool agentConnectionEstablished;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeClient;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (bool)agentConnectionEstablished;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (void)consoleUserDidChange:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (id)init;
- (long long)integerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)observeUserDefaultsValueForKeyPath:(id)arg1 change:(id)arg2;
- (void)postInitialKVONotificationForObservation:(id)arg1 keyPath:(id)arg2;
- (void)refreshActiveClient;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)setActiveClient:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)userDefaultsCheckIn:(id)arg1 effectiveUserIdentifier:(unsigned int)arg2;

@end
