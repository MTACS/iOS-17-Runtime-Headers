
@interface TAPersistenceManager : NSObject {
    NSHashTable * _observers;
    TAPersistenceManagerSettings * _settings;
    TAPersistenceStore * _store;
}

@property (nonatomic, retain) NSHashTable *observers;
@property (retain) TAPersistenceManagerSettings *settings;
@property (nonatomic, readonly) TAPersistenceStore *store;

- (void).cxx_destruct;
- (bool)_createDirectoryIfNotPresent;
- (void)_notifyObserversOnReadFromURL:(id)arg1 bytes:(unsigned long long)arg2;
- (void)_notifyObserversOnWriteToURL:(id)arg1 bytes:(unsigned long long)arg2;
- (void)addObserver:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (bool)load;
- (id)observers;
- (void)onUpdatedTAStore:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)reset;
- (bool)save;
- (void)setObservers:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (id)store;

@end
