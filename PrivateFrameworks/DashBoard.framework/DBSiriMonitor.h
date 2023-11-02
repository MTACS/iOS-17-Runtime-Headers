
@interface DBSiriMonitor : NSObject {
    CARObserverHashTable * _observers;
    bool  _siriEnabled;
}

@property (retain) CARObserverHashTable *observers;
@property (nonatomic) bool siriEnabled;

- (void).cxx_destruct;
- (void)_updateSiriEnabled;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)handleAssistantLanguageChanged:(id)arg1;
- (void)handleAssistantPreferencesChanged:(id)arg1;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSiriEnabled:(bool)arg1;
- (bool)siriEnabled;

@end
